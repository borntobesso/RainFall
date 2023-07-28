#include <stdio.h>
#include <stdlib.h>

void m() {
    puts("Nope");
    return ;
}

void n() {
    system("/bin/cat /home/user/level7/.pass");
    return ;
}

int main(int ac, char **av) {
    char *ptr = malloc(64);
    char *ptr2 = malloc(4);
    ptr2 = m;
    strcpy(ptr, av[1]);
    ptr2();
    return 0;
}