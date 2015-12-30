#
WARN	:= -W -Wall -Wstrict-prototypes -Wmissing-prototypes
INCLUDE	:= -isystem /lib/modules/`uname -r`/build/include  
# CFLAGS	:= -O2 -DMODULE -D__KERNEL__ ${WARN} ${INCLUDE} 
CC	:= gcc
OBJS	:= ${patsubst %.c, %.o, ${wildcard *.c}}
obj-m += pps-2gpio.o
	
all: ${OBJS}

.PHONY: clean

clean:
	rm -rf *.o

