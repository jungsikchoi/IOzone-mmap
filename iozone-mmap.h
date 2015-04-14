#include <linux/unistd.h>
#include <unistd.h>

void *mmap_test (unsigned long addr, unsigned long len,
		unsigned long prot, unsigned long flags,
		unsigned long fd, unsigned long async_map_ratio) {
    return (void *)syscall (316, addr, len, prot, flags, fd, async_map_ratio);
}
