/*
 * System call prototypes.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 * created from FreeBSD: src/sys/i386/linux/syscalls.master,v 1.44 2001/09/28 01:30:59 marcel Exp 
 */

#ifndef _LINUX_SYSPROTO_H_
#define	_LINUX_SYSPROTO_H_

#include <sys/signal.h>

#include <sys/acl.h>

struct proc;

struct thread;

#define	PAD_(t)	(sizeof(register_t) <= sizeof(t) ? \
		0 : sizeof(register_t) - sizeof(t))

#if BYTE_ORDER == LITTLE_ENDIAN
#define	PADL_(t)	0
#define	PADR_(t)	PAD_(t)
#else
#define	PADL_(t)	PAD_(t)
#define	PADR_(t)	0
#endif

struct linux_fork_args {
	register_t dummy;
};
struct linux_open_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char flags_l_[PADL_(l_int)]; l_int flags; char flags_r_[PADR_(l_int)];
	char mode_l_[PADL_(l_int)]; l_int mode; char mode_r_[PADR_(l_int)];
};
struct linux_waitpid_args {
	char pid_l_[PADL_(l_pid_t)]; l_pid_t pid; char pid_r_[PADR_(l_pid_t)];
	char status_l_[PADL_(l_int *)]; l_int * status; char status_r_[PADR_(l_int *)];
	char options_l_[PADL_(l_int)]; l_int options; char options_r_[PADR_(l_int)];
};
struct linux_creat_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char mode_l_[PADL_(l_int)]; l_int mode; char mode_r_[PADR_(l_int)];
};
struct linux_link_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char to_l_[PADL_(char *)]; char * to; char to_r_[PADR_(char *)];
};
struct linux_unlink_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
};
struct linux_execve_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char argp_l_[PADL_(char **)]; char ** argp; char argp_r_[PADR_(char **)];
	char envp_l_[PADL_(char **)]; char ** envp; char envp_r_[PADR_(char **)];
};
struct linux_chdir_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
};
struct linux_time_args {
	char tm_l_[PADL_(l_time_t *)]; l_time_t * tm; char tm_r_[PADR_(l_time_t *)];
};
struct linux_mknod_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char mode_l_[PADL_(l_int)]; l_int mode; char mode_r_[PADR_(l_int)];
	char dev_l_[PADL_(l_dev_t)]; l_dev_t dev; char dev_r_[PADR_(l_dev_t)];
};
struct linux_chmod_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char mode_l_[PADL_(l_mode_t)]; l_mode_t mode; char mode_r_[PADR_(l_mode_t)];
};
struct linux_lchown16_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char uid_l_[PADL_(l_uid16_t)]; l_uid16_t uid; char uid_r_[PADR_(l_uid16_t)];
	char gid_l_[PADL_(l_gid16_t)]; l_gid16_t gid; char gid_r_[PADR_(l_gid16_t)];
};
struct linux_stat_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char up_l_[PADL_(struct ostat *)]; struct ostat * up; char up_r_[PADR_(struct ostat *)];
};
struct linux_lseek_args {
	char fdes_l_[PADL_(l_uint)]; l_uint fdes; char fdes_r_[PADR_(l_uint)];
	char off_l_[PADL_(l_off_t)]; l_off_t off; char off_r_[PADR_(l_off_t)];
	char whence_l_[PADL_(l_int)]; l_int whence; char whence_r_[PADR_(l_int)];
};
struct linux_getpid_args {
	register_t dummy;
};
struct linux_mount_args {
	char specialfile_l_[PADL_(char *)]; char * specialfile; char specialfile_r_[PADR_(char *)];
	char dir_l_[PADL_(char *)]; char * dir; char dir_r_[PADR_(char *)];
	char filesystemtype_l_[PADL_(char *)]; char * filesystemtype; char filesystemtype_r_[PADR_(char *)];
	char rwflag_l_[PADL_(l_ulong)]; l_ulong rwflag; char rwflag_r_[PADR_(l_ulong)];
	char data_l_[PADL_(void *)]; void * data; char data_r_[PADR_(void *)];
};
struct linux_oldumount_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
};
struct linux_setuid16_args {
	char uid_l_[PADL_(l_uid16_t)]; l_uid16_t uid; char uid_r_[PADR_(l_uid16_t)];
};
struct linux_getuid16_args {
	register_t dummy;
};
struct linux_stime_args {
	register_t dummy;
};
struct linux_ptrace_args {
	register_t dummy;
};
struct linux_alarm_args {
	char secs_l_[PADL_(l_uint)]; l_uint secs; char secs_r_[PADR_(l_uint)];
};
struct linux_fstat_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char up_l_[PADL_(struct ostat *)]; struct ostat * up; char up_r_[PADR_(struct ostat *)];
};
struct linux_pause_args {
	register_t dummy;
};
struct linux_utime_args {
	char fname_l_[PADL_(char *)]; char * fname; char fname_r_[PADR_(char *)];
	char times_l_[PADL_(struct l_utimbuf *)]; struct l_utimbuf * times; char times_r_[PADR_(struct l_utimbuf *)];
};
struct linux_access_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char flags_l_[PADL_(l_int)]; l_int flags; char flags_r_[PADR_(l_int)];
};
struct linux_nice_args {
	char inc_l_[PADL_(l_int)]; l_int inc; char inc_r_[PADR_(l_int)];
};
struct linux_kill_args {
	char pid_l_[PADL_(l_int)]; l_int pid; char pid_r_[PADR_(l_int)];
	char signum_l_[PADL_(l_int)]; l_int signum; char signum_r_[PADR_(l_int)];
};
struct linux_rename_args {
	char from_l_[PADL_(char *)]; char * from; char from_r_[PADR_(char *)];
	char to_l_[PADL_(char *)]; char * to; char to_r_[PADR_(char *)];
};
struct linux_mkdir_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char mode_l_[PADL_(l_int)]; l_int mode; char mode_r_[PADR_(l_int)];
};
struct linux_rmdir_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
};
struct linux_pipe_args {
	char pipefds_l_[PADL_(l_ulong *)]; l_ulong * pipefds; char pipefds_r_[PADR_(l_ulong *)];
};
struct linux_times_args {
	char buf_l_[PADL_(struct l_times_argv *)]; struct l_times_argv * buf; char buf_r_[PADR_(struct l_times_argv *)];
};
struct linux_brk_args {
	char dsend_l_[PADL_(l_ulong)]; l_ulong dsend; char dsend_r_[PADR_(l_ulong)];
};
struct linux_setgid16_args {
	char gid_l_[PADL_(l_gid16_t)]; l_gid16_t gid; char gid_r_[PADR_(l_gid16_t)];
};
struct linux_getgid16_args {
	register_t dummy;
};
struct linux_signal_args {
	char sig_l_[PADL_(l_int)]; l_int sig; char sig_r_[PADR_(l_int)];
	char handler_l_[PADL_(l_handler_t)]; l_handler_t handler; char handler_r_[PADR_(l_handler_t)];
};
struct linux_geteuid16_args {
	register_t dummy;
};
struct linux_getegid16_args {
	register_t dummy;
};
struct linux_umount_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char flags_l_[PADL_(l_int)]; l_int flags; char flags_r_[PADR_(l_int)];
};
struct linux_ioctl_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char cmd_l_[PADL_(l_uint)]; l_uint cmd; char cmd_r_[PADR_(l_uint)];
	char arg_l_[PADL_(l_ulong)]; l_ulong arg; char arg_r_[PADR_(l_ulong)];
};
struct linux_fcntl_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char cmd_l_[PADL_(l_uint)]; l_uint cmd; char cmd_r_[PADR_(l_uint)];
	char arg_l_[PADL_(l_ulong)]; l_ulong arg; char arg_r_[PADR_(l_ulong)];
};
struct linux_olduname_args {
	register_t dummy;
};
struct linux_ustat_args {
	char dev_l_[PADL_(l_dev_t)]; l_dev_t dev; char dev_r_[PADR_(l_dev_t)];
	char ubuf_l_[PADL_(struct l_ustat *)]; struct l_ustat * ubuf; char ubuf_r_[PADR_(struct l_ustat *)];
};
struct linux_sigaction_args {
	char sig_l_[PADL_(l_int)]; l_int sig; char sig_r_[PADR_(l_int)];
	char nsa_l_[PADL_(l_osigaction_t *)]; l_osigaction_t * nsa; char nsa_r_[PADR_(l_osigaction_t *)];
	char osa_l_[PADL_(l_osigaction_t *)]; l_osigaction_t * osa; char osa_r_[PADR_(l_osigaction_t *)];
};
struct linux_sgetmask_args {
	register_t dummy;
};
struct linux_ssetmask_args {
	char mask_l_[PADL_(l_osigset_t)]; l_osigset_t mask; char mask_r_[PADR_(l_osigset_t)];
};
struct linux_setreuid16_args {
	char ruid_l_[PADL_(l_uid16_t)]; l_uid16_t ruid; char ruid_r_[PADR_(l_uid16_t)];
	char euid_l_[PADL_(l_uid16_t)]; l_uid16_t euid; char euid_r_[PADR_(l_uid16_t)];
};
struct linux_setregid16_args {
	char rgid_l_[PADL_(l_gid16_t)]; l_gid16_t rgid; char rgid_r_[PADR_(l_gid16_t)];
	char egid_l_[PADL_(l_gid16_t)]; l_gid16_t egid; char egid_r_[PADR_(l_gid16_t)];
};
struct linux_sigsuspend_args {
	char hist0_l_[PADL_(l_int)]; l_int hist0; char hist0_r_[PADR_(l_int)];
	char hist1_l_[PADL_(l_int)]; l_int hist1; char hist1_r_[PADR_(l_int)];
	char mask_l_[PADL_(l_osigset_t)]; l_osigset_t mask; char mask_r_[PADR_(l_osigset_t)];
};
struct linux_sigpending_args {
	char mask_l_[PADL_(l_osigset_t *)]; l_osigset_t * mask; char mask_r_[PADR_(l_osigset_t *)];
};
struct linux_setrlimit_args {
	char resource_l_[PADL_(l_uint)]; l_uint resource; char resource_r_[PADR_(l_uint)];
	char rlim_l_[PADL_(struct l_rlimit *)]; struct l_rlimit * rlim; char rlim_r_[PADR_(struct l_rlimit *)];
};
struct linux_old_getrlimit_args {
	char resource_l_[PADL_(l_uint)]; l_uint resource; char resource_r_[PADR_(l_uint)];
	char rlim_l_[PADL_(struct l_rlimit *)]; struct l_rlimit * rlim; char rlim_r_[PADR_(struct l_rlimit *)];
};
struct linux_getgroups16_args {
	char gidsetsize_l_[PADL_(l_uint)]; l_uint gidsetsize; char gidsetsize_r_[PADR_(l_uint)];
	char gidset_l_[PADL_(l_gid16_t *)]; l_gid16_t * gidset; char gidset_r_[PADR_(l_gid16_t *)];
};
struct linux_setgroups16_args {
	char gidsetsize_l_[PADL_(l_uint)]; l_uint gidsetsize; char gidsetsize_r_[PADR_(l_uint)];
	char gidset_l_[PADL_(l_gid16_t *)]; l_gid16_t * gidset; char gidset_r_[PADR_(l_gid16_t *)];
};
struct linux_old_select_args {
	char ptr_l_[PADL_(struct l_old_select_argv *)]; struct l_old_select_argv * ptr; char ptr_r_[PADR_(struct l_old_select_argv *)];
};
struct linux_symlink_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char to_l_[PADL_(char *)]; char * to; char to_r_[PADR_(char *)];
};
struct linux_readlink_args {
	char name_l_[PADL_(char *)]; char * name; char name_r_[PADR_(char *)];
	char buf_l_[PADL_(char *)]; char * buf; char buf_r_[PADR_(char *)];
	char count_l_[PADL_(l_int)]; l_int count; char count_r_[PADR_(l_int)];
};
struct linux_uselib_args {
	char library_l_[PADL_(char *)]; char * library; char library_r_[PADR_(char *)];
};
struct linux_reboot_args {
	char magic1_l_[PADL_(l_int)]; l_int magic1; char magic1_r_[PADR_(l_int)];
	char magic2_l_[PADL_(l_int)]; l_int magic2; char magic2_r_[PADR_(l_int)];
	char cmd_l_[PADL_(l_uint)]; l_uint cmd; char cmd_r_[PADR_(l_uint)];
	char arg_l_[PADL_(void *)]; void * arg; char arg_r_[PADR_(void *)];
};
struct linux_readdir_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char dent_l_[PADL_(struct l_dirent *)]; struct l_dirent * dent; char dent_r_[PADR_(struct l_dirent *)];
	char count_l_[PADL_(l_uint)]; l_uint count; char count_r_[PADR_(l_uint)];
};
struct linux_mmap_args {
	char ptr_l_[PADL_(struct l_mmap_argv *)]; struct l_mmap_argv * ptr; char ptr_r_[PADR_(struct l_mmap_argv *)];
};
struct linux_truncate_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char length_l_[PADL_(l_ulong)]; l_ulong length; char length_r_[PADR_(l_ulong)];
};
struct linux_statfs_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char buf_l_[PADL_(struct l_statfs_buf *)]; struct l_statfs_buf * buf; char buf_r_[PADR_(struct l_statfs_buf *)];
};
struct linux_fstatfs_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char buf_l_[PADL_(struct l_statfs_buf *)]; struct l_statfs_buf * buf; char buf_r_[PADR_(struct l_statfs_buf *)];
};
struct linux_ioperm_args {
	char start_l_[PADL_(l_ulong)]; l_ulong start; char start_r_[PADR_(l_ulong)];
	char length_l_[PADL_(l_ulong)]; l_ulong length; char length_r_[PADR_(l_ulong)];
	char enable_l_[PADL_(l_int)]; l_int enable; char enable_r_[PADR_(l_int)];
};
struct linux_socketcall_args {
	char what_l_[PADL_(l_int)]; l_int what; char what_r_[PADR_(l_int)];
	char args_l_[PADL_(l_ulong)]; l_ulong args; char args_r_[PADR_(l_ulong)];
};
struct linux_syslog_args {
	char type_l_[PADL_(l_int)]; l_int type; char type_r_[PADR_(l_int)];
	char buf_l_[PADL_(char *)]; char * buf; char buf_r_[PADR_(char *)];
	char len_l_[PADL_(l_int)]; l_int len; char len_r_[PADR_(l_int)];
};
struct linux_setitimer_args {
	char which_l_[PADL_(l_int)]; l_int which; char which_r_[PADR_(l_int)];
	char itv_l_[PADL_(struct l_itimerval *)]; struct l_itimerval * itv; char itv_r_[PADR_(struct l_itimerval *)];
	char oitv_l_[PADL_(struct l_itimerval *)]; struct l_itimerval * oitv; char oitv_r_[PADR_(struct l_itimerval *)];
};
struct linux_getitimer_args {
	char which_l_[PADL_(l_int)]; l_int which; char which_r_[PADR_(l_int)];
	char itv_l_[PADL_(struct l_itimerval *)]; struct l_itimerval * itv; char itv_r_[PADR_(struct l_itimerval *)];
};
struct linux_newstat_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char buf_l_[PADL_(struct l_newstat *)]; struct l_newstat * buf; char buf_r_[PADR_(struct l_newstat *)];
};
struct linux_newlstat_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char buf_l_[PADL_(struct l_newstat *)]; struct l_newstat * buf; char buf_r_[PADR_(struct l_newstat *)];
};
struct linux_newfstat_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char buf_l_[PADL_(struct l_newstat *)]; struct l_newstat * buf; char buf_r_[PADR_(struct l_newstat *)];
};
struct linux_uname_args {
	register_t dummy;
};
struct linux_iopl_args {
	char level_l_[PADL_(l_ulong)]; l_ulong level; char level_r_[PADR_(l_ulong)];
};
struct linux_vhangup_args {
	register_t dummy;
};
struct linux_vm86old_args {
	register_t dummy;
};
struct linux_wait4_args {
	char pid_l_[PADL_(l_pid_t)]; l_pid_t pid; char pid_r_[PADR_(l_pid_t)];
	char status_l_[PADL_(l_uint *)]; l_uint * status; char status_r_[PADR_(l_uint *)];
	char options_l_[PADL_(l_int)]; l_int options; char options_r_[PADR_(l_int)];
	char rusage_l_[PADL_(struct l_rusage *)]; struct l_rusage * rusage; char rusage_r_[PADR_(struct l_rusage *)];
};
struct linux_swapoff_args {
	register_t dummy;
};
struct linux_sysinfo_args {
	char info_l_[PADL_(struct l_sysinfo *)]; struct l_sysinfo * info; char info_r_[PADR_(struct l_sysinfo *)];
};
struct linux_ipc_args {
	char what_l_[PADL_(l_uint)]; l_uint what; char what_r_[PADR_(l_uint)];
	char arg1_l_[PADL_(l_int)]; l_int arg1; char arg1_r_[PADR_(l_int)];
	char arg2_l_[PADL_(l_int)]; l_int arg2; char arg2_r_[PADR_(l_int)];
	char arg3_l_[PADL_(l_int)]; l_int arg3; char arg3_r_[PADR_(l_int)];
	char ptr_l_[PADL_(void *)]; void * ptr; char ptr_r_[PADR_(void *)];
	char arg5_l_[PADL_(l_long)]; l_long arg5; char arg5_r_[PADR_(l_long)];
};
struct linux_sigreturn_args {
	char sfp_l_[PADL_(struct l_sigframe *)]; struct l_sigframe * sfp; char sfp_r_[PADR_(struct l_sigframe *)];
};
struct linux_clone_args {
	char flags_l_[PADL_(l_int)]; l_int flags; char flags_r_[PADR_(l_int)];
	char stack_l_[PADL_(void *)]; void * stack; char stack_r_[PADR_(void *)];
};
struct linux_newuname_args {
	char buf_l_[PADL_(struct l_new_utsname *)]; struct l_new_utsname * buf; char buf_r_[PADR_(struct l_new_utsname *)];
};
struct linux_modify_ldt_args {
	char func_l_[PADL_(l_int)]; l_int func; char func_r_[PADR_(l_int)];
	char ptr_l_[PADL_(void *)]; void * ptr; char ptr_r_[PADR_(void *)];
	char bytecount_l_[PADL_(l_ulong)]; l_ulong bytecount; char bytecount_r_[PADR_(l_ulong)];
};
struct linux_adjtimex_args {
	register_t dummy;
};
struct linux_sigprocmask_args {
	char how_l_[PADL_(l_int)]; l_int how; char how_r_[PADR_(l_int)];
	char mask_l_[PADL_(l_osigset_t *)]; l_osigset_t * mask; char mask_r_[PADR_(l_osigset_t *)];
	char omask_l_[PADL_(l_osigset_t *)]; l_osigset_t * omask; char omask_r_[PADR_(l_osigset_t *)];
};
struct linux_create_module_args {
	register_t dummy;
};
struct linux_init_module_args {
	register_t dummy;
};
struct linux_delete_module_args {
	register_t dummy;
};
struct linux_get_kernel_syms_args {
	register_t dummy;
};
struct linux_quotactl_args {
	register_t dummy;
};
struct linux_bdflush_args {
	register_t dummy;
};
struct linux_sysfs_args {
	char option_l_[PADL_(l_int)]; l_int option; char option_r_[PADR_(l_int)];
	char arg1_l_[PADL_(l_ulong)]; l_ulong arg1; char arg1_r_[PADR_(l_ulong)];
	char arg2_l_[PADL_(l_ulong)]; l_ulong arg2; char arg2_r_[PADR_(l_ulong)];
};
struct linux_personality_args {
	char per_l_[PADL_(l_ulong)]; l_ulong per; char per_r_[PADR_(l_ulong)];
};
struct linux_setfsuid16_args {
	char uid_l_[PADL_(l_uid16_t)]; l_uid16_t uid; char uid_r_[PADR_(l_uid16_t)];
};
struct linux_setfsgid16_args {
	char gid_l_[PADL_(l_gid16_t)]; l_gid16_t gid; char gid_r_[PADR_(l_gid16_t)];
};
struct linux_llseek_args {
	char fd_l_[PADL_(l_int)]; l_int fd; char fd_r_[PADR_(l_int)];
	char ohigh_l_[PADL_(l_ulong)]; l_ulong ohigh; char ohigh_r_[PADR_(l_ulong)];
	char olow_l_[PADL_(l_ulong)]; l_ulong olow; char olow_r_[PADR_(l_ulong)];
	char res_l_[PADL_(l_loff_t *)]; l_loff_t * res; char res_r_[PADR_(l_loff_t *)];
	char whence_l_[PADL_(l_uint)]; l_uint whence; char whence_r_[PADR_(l_uint)];
};
struct linux_getdents_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char dent_l_[PADL_(void *)]; void * dent; char dent_r_[PADR_(void *)];
	char count_l_[PADL_(l_uint)]; l_uint count; char count_r_[PADR_(l_uint)];
};
struct linux_select_args {
	char nfds_l_[PADL_(l_int)]; l_int nfds; char nfds_r_[PADR_(l_int)];
	char readfds_l_[PADL_(l_fd_set *)]; l_fd_set * readfds; char readfds_r_[PADR_(l_fd_set *)];
	char writefds_l_[PADL_(l_fd_set *)]; l_fd_set * writefds; char writefds_r_[PADR_(l_fd_set *)];
	char exceptfds_l_[PADL_(l_fd_set *)]; l_fd_set * exceptfds; char exceptfds_r_[PADR_(l_fd_set *)];
	char timeout_l_[PADL_(struct l_timeval *)]; struct l_timeval * timeout; char timeout_r_[PADR_(struct l_timeval *)];
};
struct linux_msync_args {
	char addr_l_[PADL_(l_ulong)]; l_ulong addr; char addr_r_[PADR_(l_ulong)];
	char len_l_[PADL_(l_size_t)]; l_size_t len; char len_r_[PADR_(l_size_t)];
	char fl_l_[PADL_(l_int)]; l_int fl; char fl_r_[PADR_(l_int)];
};
struct linux_getsid_args {
	char pid_l_[PADL_(l_pid_t)]; l_pid_t pid; char pid_r_[PADR_(l_pid_t)];
};
struct linux_fdatasync_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
};
struct linux_sysctl_args {
	char args_l_[PADL_(struct l___sysctl_args *)]; struct l___sysctl_args * args; char args_r_[PADR_(struct l___sysctl_args *)];
};
struct linux_sched_setscheduler_args {
	char pid_l_[PADL_(l_pid_t)]; l_pid_t pid; char pid_r_[PADR_(l_pid_t)];
	char policy_l_[PADL_(l_int)]; l_int policy; char policy_r_[PADR_(l_int)];
	char param_l_[PADL_(struct l_sched_param *)]; struct l_sched_param * param; char param_r_[PADR_(struct l_sched_param *)];
};
struct linux_sched_getscheduler_args {
	char pid_l_[PADL_(l_pid_t)]; l_pid_t pid; char pid_r_[PADR_(l_pid_t)];
};
struct linux_sched_get_priority_max_args {
	char policy_l_[PADL_(l_int)]; l_int policy; char policy_r_[PADR_(l_int)];
};
struct linux_sched_get_priority_min_args {
	char policy_l_[PADL_(l_int)]; l_int policy; char policy_r_[PADR_(l_int)];
};
struct linux_mremap_args {
	char addr_l_[PADL_(l_ulong)]; l_ulong addr; char addr_r_[PADR_(l_ulong)];
	char old_len_l_[PADL_(l_ulong)]; l_ulong old_len; char old_len_r_[PADR_(l_ulong)];
	char new_len_l_[PADL_(l_ulong)]; l_ulong new_len; char new_len_r_[PADR_(l_ulong)];
	char flags_l_[PADL_(l_ulong)]; l_ulong flags; char flags_r_[PADR_(l_ulong)];
	char new_addr_l_[PADL_(l_ulong)]; l_ulong new_addr; char new_addr_r_[PADR_(l_ulong)];
};
struct linux_setresuid16_args {
	char ruid_l_[PADL_(l_uid16_t)]; l_uid16_t ruid; char ruid_r_[PADR_(l_uid16_t)];
	char euid_l_[PADL_(l_uid16_t)]; l_uid16_t euid; char euid_r_[PADR_(l_uid16_t)];
	char suid_l_[PADL_(l_uid16_t)]; l_uid16_t suid; char suid_r_[PADR_(l_uid16_t)];
};
struct linux_getresuid16_args {
	char ruid_l_[PADL_(l_uid16_t *)]; l_uid16_t * ruid; char ruid_r_[PADR_(l_uid16_t *)];
	char euid_l_[PADL_(l_uid16_t *)]; l_uid16_t * euid; char euid_r_[PADR_(l_uid16_t *)];
	char suid_l_[PADL_(l_uid16_t *)]; l_uid16_t * suid; char suid_r_[PADR_(l_uid16_t *)];
};
struct linux_vm86_args {
	register_t dummy;
};
struct linux_query_module_args {
	register_t dummy;
};
struct linux_nfsservctl_args {
	register_t dummy;
};
struct linux_setresgid16_args {
	char rgid_l_[PADL_(l_gid16_t)]; l_gid16_t rgid; char rgid_r_[PADR_(l_gid16_t)];
	char egid_l_[PADL_(l_gid16_t)]; l_gid16_t egid; char egid_r_[PADR_(l_gid16_t)];
	char sgid_l_[PADL_(l_gid16_t)]; l_gid16_t sgid; char sgid_r_[PADR_(l_gid16_t)];
};
struct linux_getresgid16_args {
	char rgid_l_[PADL_(l_gid16_t *)]; l_gid16_t * rgid; char rgid_r_[PADR_(l_gid16_t *)];
	char egid_l_[PADL_(l_gid16_t *)]; l_gid16_t * egid; char egid_r_[PADR_(l_gid16_t *)];
	char sgid_l_[PADL_(l_gid16_t *)]; l_gid16_t * sgid; char sgid_r_[PADR_(l_gid16_t *)];
};
struct linux_prctl_args {
	register_t dummy;
};
struct linux_rt_sigreturn_args {
	char ucp_l_[PADL_(struct l_ucontext *)]; struct l_ucontext * ucp; char ucp_r_[PADR_(struct l_ucontext *)];
};
struct linux_rt_sigaction_args {
	char sig_l_[PADL_(l_int)]; l_int sig; char sig_r_[PADR_(l_int)];
	char act_l_[PADL_(l_sigaction_t *)]; l_sigaction_t * act; char act_r_[PADR_(l_sigaction_t *)];
	char oact_l_[PADL_(l_sigaction_t *)]; l_sigaction_t * oact; char oact_r_[PADR_(l_sigaction_t *)];
	char sigsetsize_l_[PADL_(l_size_t)]; l_size_t sigsetsize; char sigsetsize_r_[PADR_(l_size_t)];
};
struct linux_rt_sigprocmask_args {
	char how_l_[PADL_(l_int)]; l_int how; char how_r_[PADR_(l_int)];
	char mask_l_[PADL_(l_sigset_t *)]; l_sigset_t * mask; char mask_r_[PADR_(l_sigset_t *)];
	char omask_l_[PADL_(l_sigset_t *)]; l_sigset_t * omask; char omask_r_[PADR_(l_sigset_t *)];
	char sigsetsize_l_[PADL_(l_size_t)]; l_size_t sigsetsize; char sigsetsize_r_[PADR_(l_size_t)];
};
struct linux_rt_sigpending_args {
	register_t dummy;
};
struct linux_rt_sigtimedwait_args {
	register_t dummy;
};
struct linux_rt_sigqueueinfo_args {
	register_t dummy;
};
struct linux_rt_sigsuspend_args {
	char newset_l_[PADL_(l_sigset_t *)]; l_sigset_t * newset; char newset_r_[PADR_(l_sigset_t *)];
	char sigsetsize_l_[PADL_(l_size_t)]; l_size_t sigsetsize; char sigsetsize_r_[PADR_(l_size_t)];
};
struct linux_pread_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char buf_l_[PADL_(char *)]; char * buf; char buf_r_[PADR_(char *)];
	char nbyte_l_[PADL_(l_size_t)]; l_size_t nbyte; char nbyte_r_[PADR_(l_size_t)];
	char offset_l_[PADL_(l_loff_t)]; l_loff_t offset; char offset_r_[PADR_(l_loff_t)];
};
struct linux_pwrite_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char buf_l_[PADL_(char *)]; char * buf; char buf_r_[PADR_(char *)];
	char nbyte_l_[PADL_(l_size_t)]; l_size_t nbyte; char nbyte_r_[PADR_(l_size_t)];
	char offset_l_[PADL_(l_loff_t)]; l_loff_t offset; char offset_r_[PADR_(l_loff_t)];
};
struct linux_chown16_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char uid_l_[PADL_(l_uid16_t)]; l_uid16_t uid; char uid_r_[PADR_(l_uid16_t)];
	char gid_l_[PADL_(l_gid16_t)]; l_gid16_t gid; char gid_r_[PADR_(l_gid16_t)];
};
struct linux_getcwd_args {
	char buf_l_[PADL_(char *)]; char * buf; char buf_r_[PADR_(char *)];
	char bufsize_l_[PADL_(l_ulong)]; l_ulong bufsize; char bufsize_r_[PADR_(l_ulong)];
};
struct linux_capget_args {
	register_t dummy;
};
struct linux_capset_args {
	register_t dummy;
};
struct linux_sigaltstack_args {
	char uss_l_[PADL_(l_stack_t *)]; l_stack_t * uss; char uss_r_[PADR_(l_stack_t *)];
	char uoss_l_[PADL_(l_stack_t *)]; l_stack_t * uoss; char uoss_r_[PADR_(l_stack_t *)];
};
struct linux_sendfile_args {
	register_t dummy;
};
struct linux_vfork_args {
	register_t dummy;
};
struct linux_getrlimit_args {
	char resource_l_[PADL_(l_uint)]; l_uint resource; char resource_r_[PADR_(l_uint)];
	char rlim_l_[PADL_(struct l_rlimit *)]; struct l_rlimit * rlim; char rlim_r_[PADR_(struct l_rlimit *)];
};
struct linux_mmap2_args {
	char addr_l_[PADL_(l_ulong)]; l_ulong addr; char addr_r_[PADR_(l_ulong)];
	char len_l_[PADL_(l_ulong)]; l_ulong len; char len_r_[PADR_(l_ulong)];
	char prot_l_[PADL_(l_ulong)]; l_ulong prot; char prot_r_[PADR_(l_ulong)];
	char flags_l_[PADL_(l_ulong)]; l_ulong flags; char flags_r_[PADR_(l_ulong)];
	char fd_l_[PADL_(l_ulong)]; l_ulong fd; char fd_r_[PADR_(l_ulong)];
	char pgoff_l_[PADL_(l_ulong)]; l_ulong pgoff; char pgoff_r_[PADR_(l_ulong)];
};
struct linux_truncate64_args {
	char path_l_[PADL_(char *)]; char * path; char path_r_[PADR_(char *)];
	char length_l_[PADL_(l_loff_t)]; l_loff_t length; char length_r_[PADR_(l_loff_t)];
};
struct linux_ftruncate64_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char length_l_[PADL_(l_loff_t)]; l_loff_t length; char length_r_[PADR_(l_loff_t)];
};
struct linux_stat64_args {
	char filename_l_[PADL_(char *)]; char * filename; char filename_r_[PADR_(char *)];
	char statbuf_l_[PADL_(struct l_stat64 *)]; struct l_stat64 * statbuf; char statbuf_r_[PADR_(struct l_stat64 *)];
	char flags_l_[PADL_(l_long)]; l_long flags; char flags_r_[PADR_(l_long)];
};
struct linux_lstat64_args {
	char filename_l_[PADL_(char *)]; char * filename; char filename_r_[PADR_(char *)];
	char statbuf_l_[PADL_(struct l_stat64 *)]; struct l_stat64 * statbuf; char statbuf_r_[PADR_(struct l_stat64 *)];
	char flags_l_[PADL_(l_long)]; l_long flags; char flags_r_[PADR_(l_long)];
};
struct linux_fstat64_args {
	char fd_l_[PADL_(l_ulong)]; l_ulong fd; char fd_r_[PADR_(l_ulong)];
	char statbuf_l_[PADL_(struct l_stat64 *)]; struct l_stat64 * statbuf; char statbuf_r_[PADR_(struct l_stat64 *)];
	char flags_l_[PADL_(l_long)]; l_long flags; char flags_r_[PADR_(l_long)];
};
struct linux_lchown_args {
	char filename_l_[PADL_(char *)]; char * filename; char filename_r_[PADR_(char *)];
	char user_l_[PADL_(l_uid_t)]; l_uid_t user; char user_r_[PADR_(l_uid_t)];
	char group_l_[PADL_(l_gid_t)]; l_gid_t group; char group_r_[PADR_(l_gid_t)];
};
struct linux_getuid_args {
	register_t dummy;
};
struct linux_getgid_args {
	register_t dummy;
};
struct linux_getgroups_args {
	char gidsetsize_l_[PADL_(l_int)]; l_int gidsetsize; char gidsetsize_r_[PADR_(l_int)];
	char grouplist_l_[PADL_(l_gid_t *)]; l_gid_t * grouplist; char grouplist_r_[PADR_(l_gid_t *)];
};
struct linux_setgroups_args {
	char gidsetsize_l_[PADL_(l_int)]; l_int gidsetsize; char gidsetsize_r_[PADR_(l_int)];
	char grouplist_l_[PADL_(l_gid_t *)]; l_gid_t * grouplist; char grouplist_r_[PADR_(l_gid_t *)];
};
struct linux_fchown_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char user_l_[PADL_(l_uid_t)]; l_uid_t user; char user_r_[PADR_(l_uid_t)];
	char group_l_[PADL_(l_gid_t)]; l_gid_t group; char group_r_[PADR_(l_gid_t)];
};
struct linux_chown_args {
	char filename_l_[PADL_(char *)]; char * filename; char filename_r_[PADR_(char *)];
	char user_l_[PADL_(l_uid_t)]; l_uid_t user; char user_r_[PADR_(l_uid_t)];
	char group_l_[PADL_(l_gid_t)]; l_gid_t group; char group_r_[PADR_(l_gid_t)];
};
struct linux_setfsuid_args {
	char uid_l_[PADL_(l_uid_t)]; l_uid_t uid; char uid_r_[PADR_(l_uid_t)];
};
struct linux_setfsgid_args {
	char gid_l_[PADL_(l_gid_t)]; l_gid_t gid; char gid_r_[PADR_(l_gid_t)];
};
struct linux_pivot_root_args {
	char new_root_l_[PADL_(char *)]; char * new_root; char new_root_r_[PADR_(char *)];
	char put_old_l_[PADL_(char *)]; char * put_old; char put_old_r_[PADR_(char *)];
};
struct linux_mincore_args {
	char start_l_[PADL_(l_ulong)]; l_ulong start; char start_r_[PADR_(l_ulong)];
	char len_l_[PADL_(l_size_t)]; l_size_t len; char len_r_[PADR_(l_size_t)];
	char vec_l_[PADL_(u_char *)]; u_char * vec; char vec_r_[PADR_(u_char *)];
};
struct linux_madvise_args {
	register_t dummy;
};
struct linux_getdents64_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char dirent_l_[PADL_(void *)]; void * dirent; char dirent_r_[PADR_(void *)];
	char count_l_[PADL_(l_uint)]; l_uint count; char count_r_[PADR_(l_uint)];
};
struct linux_fcntl64_args {
	char fd_l_[PADL_(l_uint)]; l_uint fd; char fd_r_[PADR_(l_uint)];
	char cmd_l_[PADL_(l_uint)]; l_uint cmd; char cmd_r_[PADR_(l_uint)];
	char arg_l_[PADL_(l_ulong)]; l_ulong arg; char arg_r_[PADR_(l_ulong)];
};
int	linux_fork __P((struct thread *, struct linux_fork_args *));
int	linux_open __P((struct thread *, struct linux_open_args *));
int	linux_waitpid __P((struct thread *, struct linux_waitpid_args *));
int	linux_creat __P((struct thread *, struct linux_creat_args *));
int	linux_link __P((struct thread *, struct linux_link_args *));
int	linux_unlink __P((struct thread *, struct linux_unlink_args *));
int	linux_execve __P((struct thread *, struct linux_execve_args *));
int	linux_chdir __P((struct thread *, struct linux_chdir_args *));
int	linux_time __P((struct thread *, struct linux_time_args *));
int	linux_mknod __P((struct thread *, struct linux_mknod_args *));
int	linux_chmod __P((struct thread *, struct linux_chmod_args *));
int	linux_lchown16 __P((struct thread *, struct linux_lchown16_args *));
int	linux_stat __P((struct thread *, struct linux_stat_args *));
int	linux_lseek __P((struct thread *, struct linux_lseek_args *));
int	linux_getpid __P((struct thread *, struct linux_getpid_args *));
int	linux_mount __P((struct thread *, struct linux_mount_args *));
int	linux_oldumount __P((struct thread *, struct linux_oldumount_args *));
int	linux_setuid16 __P((struct thread *, struct linux_setuid16_args *));
int	linux_getuid16 __P((struct thread *, struct linux_getuid16_args *));
int	linux_stime __P((struct thread *, struct linux_stime_args *));
int	linux_ptrace __P((struct thread *, struct linux_ptrace_args *));
int	linux_alarm __P((struct thread *, struct linux_alarm_args *));
int	linux_fstat __P((struct thread *, struct linux_fstat_args *));
int	linux_pause __P((struct thread *, struct linux_pause_args *));
int	linux_utime __P((struct thread *, struct linux_utime_args *));
int	linux_access __P((struct thread *, struct linux_access_args *));
int	linux_nice __P((struct thread *, struct linux_nice_args *));
int	linux_kill __P((struct thread *, struct linux_kill_args *));
int	linux_rename __P((struct thread *, struct linux_rename_args *));
int	linux_mkdir __P((struct thread *, struct linux_mkdir_args *));
int	linux_rmdir __P((struct thread *, struct linux_rmdir_args *));
int	linux_pipe __P((struct thread *, struct linux_pipe_args *));
int	linux_times __P((struct thread *, struct linux_times_args *));
int	linux_brk __P((struct thread *, struct linux_brk_args *));
int	linux_setgid16 __P((struct thread *, struct linux_setgid16_args *));
int	linux_getgid16 __P((struct thread *, struct linux_getgid16_args *));
int	linux_signal __P((struct thread *, struct linux_signal_args *));
int	linux_geteuid16 __P((struct thread *, struct linux_geteuid16_args *));
int	linux_getegid16 __P((struct thread *, struct linux_getegid16_args *));
int	linux_umount __P((struct thread *, struct linux_umount_args *));
int	linux_ioctl __P((struct thread *, struct linux_ioctl_args *));
int	linux_fcntl __P((struct thread *, struct linux_fcntl_args *));
int	linux_olduname __P((struct thread *, struct linux_olduname_args *));
int	linux_ustat __P((struct thread *, struct linux_ustat_args *));
int	linux_sigaction __P((struct thread *, struct linux_sigaction_args *));
int	linux_sgetmask __P((struct thread *, struct linux_sgetmask_args *));
int	linux_ssetmask __P((struct thread *, struct linux_ssetmask_args *));
int	linux_setreuid16 __P((struct thread *, struct linux_setreuid16_args *));
int	linux_setregid16 __P((struct thread *, struct linux_setregid16_args *));
int	linux_sigsuspend __P((struct thread *, struct linux_sigsuspend_args *));
int	linux_sigpending __P((struct thread *, struct linux_sigpending_args *));
int	linux_setrlimit __P((struct thread *, struct linux_setrlimit_args *));
int	linux_old_getrlimit __P((struct thread *, struct linux_old_getrlimit_args *));
int	linux_getgroups16 __P((struct thread *, struct linux_getgroups16_args *));
int	linux_setgroups16 __P((struct thread *, struct linux_setgroups16_args *));
int	linux_old_select __P((struct thread *, struct linux_old_select_args *));
int	linux_symlink __P((struct thread *, struct linux_symlink_args *));
int	linux_readlink __P((struct thread *, struct linux_readlink_args *));
int	linux_uselib __P((struct thread *, struct linux_uselib_args *));
int	linux_reboot __P((struct thread *, struct linux_reboot_args *));
int	linux_readdir __P((struct thread *, struct linux_readdir_args *));
int	linux_mmap __P((struct thread *, struct linux_mmap_args *));
int	linux_truncate __P((struct thread *, struct linux_truncate_args *));
int	linux_statfs __P((struct thread *, struct linux_statfs_args *));
int	linux_fstatfs __P((struct thread *, struct linux_fstatfs_args *));
int	linux_ioperm __P((struct thread *, struct linux_ioperm_args *));
int	linux_socketcall __P((struct thread *, struct linux_socketcall_args *));
int	linux_syslog __P((struct thread *, struct linux_syslog_args *));
int	linux_setitimer __P((struct thread *, struct linux_setitimer_args *));
int	linux_getitimer __P((struct thread *, struct linux_getitimer_args *));
int	linux_newstat __P((struct thread *, struct linux_newstat_args *));
int	linux_newlstat __P((struct thread *, struct linux_newlstat_args *));
int	linux_newfstat __P((struct thread *, struct linux_newfstat_args *));
int	linux_uname __P((struct thread *, struct linux_uname_args *));
int	linux_iopl __P((struct thread *, struct linux_iopl_args *));
int	linux_vhangup __P((struct thread *, struct linux_vhangup_args *));
int	linux_vm86old __P((struct thread *, struct linux_vm86old_args *));
int	linux_wait4 __P((struct thread *, struct linux_wait4_args *));
int	linux_swapoff __P((struct thread *, struct linux_swapoff_args *));
int	linux_sysinfo __P((struct thread *, struct linux_sysinfo_args *));
int	linux_ipc __P((struct thread *, struct linux_ipc_args *));
int	linux_sigreturn __P((struct thread *, struct linux_sigreturn_args *));
int	linux_clone __P((struct thread *, struct linux_clone_args *));
int	linux_newuname __P((struct thread *, struct linux_newuname_args *));
int	linux_modify_ldt __P((struct thread *, struct linux_modify_ldt_args *));
int	linux_adjtimex __P((struct thread *, struct linux_adjtimex_args *));
int	linux_sigprocmask __P((struct thread *, struct linux_sigprocmask_args *));
int	linux_create_module __P((struct thread *, struct linux_create_module_args *));
int	linux_init_module __P((struct thread *, struct linux_init_module_args *));
int	linux_delete_module __P((struct thread *, struct linux_delete_module_args *));
int	linux_get_kernel_syms __P((struct thread *, struct linux_get_kernel_syms_args *));
int	linux_quotactl __P((struct thread *, struct linux_quotactl_args *));
int	linux_bdflush __P((struct thread *, struct linux_bdflush_args *));
int	linux_sysfs __P((struct thread *, struct linux_sysfs_args *));
int	linux_personality __P((struct thread *, struct linux_personality_args *));
int	linux_setfsuid16 __P((struct thread *, struct linux_setfsuid16_args *));
int	linux_setfsgid16 __P((struct thread *, struct linux_setfsgid16_args *));
int	linux_llseek __P((struct thread *, struct linux_llseek_args *));
int	linux_getdents __P((struct thread *, struct linux_getdents_args *));
int	linux_select __P((struct thread *, struct linux_select_args *));
int	linux_msync __P((struct thread *, struct linux_msync_args *));
int	linux_getsid __P((struct thread *, struct linux_getsid_args *));
int	linux_fdatasync __P((struct thread *, struct linux_fdatasync_args *));
int	linux_sysctl __P((struct thread *, struct linux_sysctl_args *));
int	linux_sched_setscheduler __P((struct thread *, struct linux_sched_setscheduler_args *));
int	linux_sched_getscheduler __P((struct thread *, struct linux_sched_getscheduler_args *));
int	linux_sched_get_priority_max __P((struct thread *, struct linux_sched_get_priority_max_args *));
int	linux_sched_get_priority_min __P((struct thread *, struct linux_sched_get_priority_min_args *));
int	linux_mremap __P((struct thread *, struct linux_mremap_args *));
int	linux_setresuid16 __P((struct thread *, struct linux_setresuid16_args *));
int	linux_getresuid16 __P((struct thread *, struct linux_getresuid16_args *));
int	linux_vm86 __P((struct thread *, struct linux_vm86_args *));
int	linux_query_module __P((struct thread *, struct linux_query_module_args *));
int	linux_nfsservctl __P((struct thread *, struct linux_nfsservctl_args *));
int	linux_setresgid16 __P((struct thread *, struct linux_setresgid16_args *));
int	linux_getresgid16 __P((struct thread *, struct linux_getresgid16_args *));
int	linux_prctl __P((struct thread *, struct linux_prctl_args *));
int	linux_rt_sigreturn __P((struct thread *, struct linux_rt_sigreturn_args *));
int	linux_rt_sigaction __P((struct thread *, struct linux_rt_sigaction_args *));
int	linux_rt_sigprocmask __P((struct thread *, struct linux_rt_sigprocmask_args *));
int	linux_rt_sigpending __P((struct thread *, struct linux_rt_sigpending_args *));
int	linux_rt_sigtimedwait __P((struct thread *, struct linux_rt_sigtimedwait_args *));
int	linux_rt_sigqueueinfo __P((struct thread *, struct linux_rt_sigqueueinfo_args *));
int	linux_rt_sigsuspend __P((struct thread *, struct linux_rt_sigsuspend_args *));
int	linux_pread __P((struct thread *, struct linux_pread_args *));
int	linux_pwrite __P((struct thread *, struct linux_pwrite_args *));
int	linux_chown16 __P((struct thread *, struct linux_chown16_args *));
int	linux_getcwd __P((struct thread *, struct linux_getcwd_args *));
int	linux_capget __P((struct thread *, struct linux_capget_args *));
int	linux_capset __P((struct thread *, struct linux_capset_args *));
int	linux_sigaltstack __P((struct thread *, struct linux_sigaltstack_args *));
int	linux_sendfile __P((struct thread *, struct linux_sendfile_args *));
int	linux_vfork __P((struct thread *, struct linux_vfork_args *));
int	linux_getrlimit __P((struct thread *, struct linux_getrlimit_args *));
int	linux_mmap2 __P((struct thread *, struct linux_mmap2_args *));
int	linux_truncate64 __P((struct thread *, struct linux_truncate64_args *));
int	linux_ftruncate64 __P((struct thread *, struct linux_ftruncate64_args *));
int	linux_stat64 __P((struct thread *, struct linux_stat64_args *));
int	linux_lstat64 __P((struct thread *, struct linux_lstat64_args *));
int	linux_fstat64 __P((struct thread *, struct linux_fstat64_args *));
int	linux_lchown __P((struct thread *, struct linux_lchown_args *));
int	linux_getuid __P((struct thread *, struct linux_getuid_args *));
int	linux_getgid __P((struct thread *, struct linux_getgid_args *));
int	linux_getgroups __P((struct thread *, struct linux_getgroups_args *));
int	linux_setgroups __P((struct thread *, struct linux_setgroups_args *));
int	linux_fchown __P((struct thread *, struct linux_fchown_args *));
int	linux_chown __P((struct thread *, struct linux_chown_args *));
int	linux_setfsuid __P((struct thread *, struct linux_setfsuid_args *));
int	linux_setfsgid __P((struct thread *, struct linux_setfsgid_args *));
int	linux_pivot_root __P((struct thread *, struct linux_pivot_root_args *));
int	linux_mincore __P((struct thread *, struct linux_mincore_args *));
int	linux_madvise __P((struct thread *, struct linux_madvise_args *));
int	linux_getdents64 __P((struct thread *, struct linux_getdents64_args *));
int	linux_fcntl64 __P((struct thread *, struct linux_fcntl64_args *));

#ifdef COMPAT_43


#endif /* COMPAT_43 */

#undef PAD_
#undef PADL_
#undef PADR_

#endif /* !_LINUX_SYSPROTO_H_ */
