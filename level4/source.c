#include <stdio.h>
#include <stdlib.h>

int m;

void p(char *str) {
    printf(str);
    return ;
}

void n(void) {
    char buf[520];

    fgets(buf, 512, stdin);
    p(buf);
    if (m == 0x1025544) {
        system("/bin/cat /home/user/level5/.pass");
    }
    return ;    
}

int main(void) {
    n();
    return 0;
}