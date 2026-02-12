#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("bequ1n aka kulikovskikh@bk.ru");
MODULE_DESCRIPTION("test kernel module");
MODULE_VERSION("1.0");

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello world from kernel module\n");
    printk(KERN_INFO "Module loaded successfully\n");

    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);