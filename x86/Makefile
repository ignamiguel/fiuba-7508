CFLAGS := -m32 -g -std=c99 -Wall -Wextra -Wpedantic
CFLAGS += -O1 -fno-pic -fno-omit-frame-pointer -no-pie
ASFLAGS = $(CFLAGS)

ASMS := $(wildcard *.S) # wildcard *.S
SRCS := $(wildcard *.c) # wildcard *.c

CC := gcc

# Como en este lab el código de cada programa reside en un
# único archivo, los wildcard transformarán prog.c o prog.S
# directamente a "prog", sin usar compilación intermedia; esto
# es, sin que make llegue a recibir prog.o como objetivo.

# $(subst ee,EE,feet on the street) > ‘fEEt on the strEEt’.
# $(patsubst pattern,replacement,text)
PROG := $(patsubst %.S, %, $(ASMS)) # patsubst %.S > %
PROG += $(patsubst %.c, %, $(SRCS)) # patsubst %.c > %

all: $(PROG)

show: 
	@echo $(PROG) $(CC)

run:
	$(PROG)

clean:
	rm -f $(PROG)

.PHONY: clean all

QEMU := qemu-system-i386 -serial mon:stdio
BOOT := -kernel $(PROG)

qemu: $(PROG)
	$(QEMU) $(BOOT)

qemu-gdb: $(PROG)
	$(QEMU) -kernel $(PROG) -S -gdb tcp:127.0.0.1:7508 $(BOOT)

gdb:
	gdb -q -s $(PROG) -n -ex 'target remote 127.0.0.1:7508'

.PHONY: qemu qemu-gdb gdb