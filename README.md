## ATmega Template

I created this template so I could avoid having to rewrite the same boilerplate when starting new projects that use an ATmega.

Makefile taken from: https://github.com/hexagon5un/AVR-Programming/blob/master/Chapter02_Programming-AVRs/blinkLED/Makefile

## Required Packages

* [avr-libc](https://www.nongnu.org/avr-libc/)
* [avr-binutils](https://www.nongnu.org/avr-libc/user-manual/overview.html)
* [avr-gdb](https://gcc.gnu.org/wiki/avr-gcc)
* [avrdude](https://www.nongnu.org/avrdude/user-manual/avrdude.html)
* [simavr](https://github.com/buserror/simavr)
* binutils
* make

**Ubuntu**:

    sudo apt install avr-libc binutils-avr gdb-avr avrdude simavr binutils make

To use `avr-libc` sources change `LIBDIR` to path. Conventionally I find it easier to use the following layout:

```
- avr-projects
  - avr-libc
  - project1
  - project2
```

... And in the `Makefile` set `LIBDIR` to `../avr-libc`

## Build

After you've set up your `.env` file simply run the following command to build the project:

    make

When you're ready to upload your code to the ATmega run:

    sudo make flash 

And to clean everything up:

    make sqeaky_clean
