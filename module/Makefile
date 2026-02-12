obj-m += mytest.o
KDIR := /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	rm -f *.ko

load: all
	sudo insmod mytest.ko

unload:
	sudo rmmod mytest

.PHONY: all clean load unload
