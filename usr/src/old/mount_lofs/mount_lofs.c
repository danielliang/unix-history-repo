/*
 * Copyright (c) 1992, 1993
 *	The Regents of the University of California.  All rights reserved.
 * All rights reserved.
 *
 * This code is derived from software donated to Berkeley by
 * Jan-Simon Pendry.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)mount_lofs.c	8.2 (Berkeley) %G%
 */

#include <sys/param.h>
#include <sys/mount.h>
#include <miscfs/lofs/lofs.h>

#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

static int subdir __P((char *, char *));
void usage __P((void));

int
main(argc, argv)
	int argc;
	char *argv[];
{
	struct lofs_args args;
	int ch, mntflags;
	char target[MAXPATHLEN];

	mntflags = 0;
	while ((ch = getopt(argc, argv, "F:")) != EOF)
		switch(ch) {
		case 'F':
			mntflags = atoi(optarg);
			break;
		case '?':
		default:
			usage();
		}
	argc -= optind;
	argv += optind;

	if (argc != 2)
		usage();

	if (realpath(argv[0], target) == 0) {
		(void)fprintf(stderr, "mount_lofs: %s: %s\n",
				target, strerror(errno));
		exit(1);
	}

	if (subdir(target, argv[1])) {
		(void)fprintf(stderr,
			"mount_lofs: %s (%s) is a sub directory of %s\n",
				argv[0], target, argv[1]);
		exit(1);
	}

	args.target = target;

	if (mount(MOUNT_LOFS, argv[1], mntflags, &args)) {
		(void)fprintf(stderr, "mount_lofs: %s\n", strerror(errno));
		exit(1);
	}
	exit(0);
}

static int
subdir(p, dir)
	char *p;
	char *dir;
{
	int l;

	l = strlen(dir);
	if (l <= 1)
		return (1);

	if ((strncmp(p, dir, l) == 0) && (p[l] == '/'))
		return (1);

	return (0);
}

void
usage()
{
	(void)fprintf(stderr,
	    "usage: mount_lofs [ -F fsoptions ] target_fs mount_point\n");
	exit(1);
}
