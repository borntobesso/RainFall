#include <stdio.h>
#include <time.h>

char *c;

void m() {
    time_t t;
    time(NULL);
    printf("%s - %d\n", c, t);
    return ;
}

int main(int ac, char **av) {
    char *s1;
    char *s2;
    FILE *f;
    s1 = malloc(8);
    s1[0] = 1;
    s1[4] = malloc(8);
    s2 = malloc(8);
    s2[0] = 2;
    s2[4] = malloc(8);
    strcpy(s1[4], av[1]);
    strcpy(s2[4], av[2]);
    f = fopen("/home/user/level8/.pass", "r");
    fgets(c, 68, f);
    puts("~~");
    return 0;
}