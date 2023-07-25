#include <stdio.h>

void v(void) {
	char buf[512]; // ebp - 520 bytes
	fgets(buf, 512, stdin);
	printf(buf);
	if (*(0x804988c) == '@') {
		fwrite("Wait what?\n", 1, 12, stdout);
		system("/bin/sh");
	}
	return ;
}

int main(void) {
	v();
	return ;
}
