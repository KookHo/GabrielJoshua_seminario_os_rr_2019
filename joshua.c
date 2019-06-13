#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gabriel/Joshua");
MODULE_DESCRIPTION("Simple module for test in the seminar");
MODULE_VERSION("0.1");

static char *name = "Arch";

module_param(name, charp, S_IRUGO);

static int __init arch_start(void)
{
	printk(KERN_INFO "Loading module...\n");
	printk(KERN_INFO "Hello %s\n",name);
	return 0;
}

static void __exit arch_end(void)
{
	printk(KERN_INFO "Byee\n");
}

module_init(arch_start);
module_exit(arch_end);

