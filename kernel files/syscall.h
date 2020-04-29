asmlinkage long sys_mlock2(unsigned long start, size_t len, int flags);



asmlinkage long sys_pkey_mprotect(unsigned long start, size_t len,
				  unsigned long prot, int pkey);
asmlinkage long sys_pkey_alloc(unsigned long flags, unsigned long init_val);
asmlinkage long sys_pkey_free(int pkey);
asmlinkage long sys_statx(int dfd, const char __user *path, unsigned flags,
			  unsigned mask, struct statx __user *buffer);

asmlinkage void sys_sys_pj1_print(int pid, long start_time, long end_time);
asmlinkage long sys_sys_pj1_time(void);

#endif
