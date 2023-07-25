# RainFall
 This project is an introduction to the exploitation of (elf-like) binary.

## Stack Canary
Stack canaries, named for their analogy to a canary in a coal mine, are used to detect a stack buffer overflow before execution of malicious code can occur. This method works by placing a small integer, the value of which is randomly chosen at program start, in memory just before the stack return pointer.

`gcc prog.c -o prog -fstack-protector-all`

`gcc prog.c -o prog -fno-stack-protector`

`checksec --file prog`

## GDB
`info functions`

`info stack`

`x/s 0x0800080c`

`x/12x $esp`

## Buffer Overflow Attack
[detailed french article on buffer overflow](https://beta.hackndo.com/buffer-overflow/)

[return to libc](https://beta.hackndo.com/retour-a-la-libc/)


## Format string vulnerability (printf)
[format string vunerability](https://bufferoverflows.net/format-string-vulnerability-what-when-and-how/)