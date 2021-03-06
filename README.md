# ENEE447 Project 0
## You're supposed to modify the following files
- `time.c`

## Readings recommended
- [p0.pdf on ELMS](https://umd.instructure.com/courses/1277187/files/folder/Lab%20Files%20Spring%202020/Project%200?preview=55362636)
  - **NOTE: Set up **64-bit** ARM cross-compilation (instead of 32-bit) if you are using this template**
- [Bare metal programming](https://github.com/dwelch67/raspberrypi/tree/master/baremetal)
- [This ARM doc](http://classweb.ece.umd.edu/enee447.S2019/ARM-Documentation/BCM2836-QA7.pdf) where you can learn how to make use of the timer on board
- [How Raspberry Pi boots](https://raspberrypi.stackexchange.com/questions/10442/what-is-the-boot-sequence)
- [Doc about 64-bit ARM registers](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.dui0801a/BABBGCAC.html) and [32-bit ARM calling convecntion](https://en.wikipedia.org/wiki/Calling_convention#ARM_(A32)), which could probably help you understand `utils.s`

## Environment setup
- Ubuntu (TBD)
  - Download [AArch64 ELF bare-metal target](https://developer.arm.com/-/media/Files/downloads/gnu-a/9.2-2019.12/binrel/gcc-arm-9.2-2019.12-x86_64-aarch64-none-elf.tar.xz?revision=ea238776-c7c7-43be-ba0d-40d7f594af1f&la=en&hash=2937ED76D3E6B85BA511BCBD46AE121DBA5268F3)
  - Modify `.bashrc` at the home directory, put this line at the end `export PATH=$PATH:/home/student/Desktop/gcc-arm-9.2-2019.12-x86_64-aarch64-none-elf/bin/` (assuming you uncompressed the cross-compiler at `Desktop`)

](gcc-arm-9.2-2019.12-x86_64-aarch64-none-elf.tar.xz)

## How to test your solution
- Compile this code with `make` command
- Copy the files (not the folder) in `things_to_copy_to_your_sd_card` to your SD card
- Boot your Raspberry 3B+ with the SD card

