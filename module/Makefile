# Простой Makefile для модуля ядра на Arch Linux
obj-m += module.o
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	rm -f *.ko

load:
	sudo insmod module.ko

unload:
	sudo rmmod module

logs:
	dmesg | tail -20

help:
	@echo "Использование:"
	@echo "  make       - собрать модуль"
	@echo "  make clean - очистить"
	@echo "  make load  - загрузить модуль"
	@echo "  make unload - выгрузить модуль"
	@echo "  make logs  - показать логи ядра"