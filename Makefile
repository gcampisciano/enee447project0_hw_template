ARMGNU ?= aarch64-none-elf

TARGET = kernel8.bin
SDTARGET = things_to_copy_to_your_sd_card/kernel8.img
DEPS = *.h

COPS = -Wall -O2 -nostdlib -nostartfiles -ffreestanding 

all : $(TARGET)

.s.o : 
	$(ARMGNU)-as $< -o $@

.c.o : $(DEPS)
	$(ARMGNU)-gcc $(COPS) -c $< -o $@

OBJECTS := $(patsubst %.s,%.o,$(wildcard *.s)) $(patsubst %.c,%.o,$(wildcard *.c))

$(TARGET) : $(OBJECTS) 
	$(ARMGNU)-ld $(OBJECTS) -T memmap.ld -o kernel8.elf
	$(ARMGNU)-objdump -D kernel8.elf > kernel8.list
	$(ARMGNU)-objcopy kernel8.elf -O binary $(TARGET)
	cp $(TARGET) $(SDTARGET)

clean :
	rm -f *.o
	rm -f *.bin
	rm -f *.elf
	rm -f *.list
	rm -f *.auto


