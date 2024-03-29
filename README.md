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

## Shellcode
`\x31\xc0\x50\x68\x2f\x2f\x73
\x68\x68\x2f\x62\x69\x6e\x89
\xe3\x89\xc1\x89\xc2\xb0\x0b
\xcd\x80\x31\xc0\x40\xcd\x80`
