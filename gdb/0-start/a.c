#include <stdio.h>

int main()
{
    int i = 0;
    char buf[100];
    buf[0] = 'a';
    buf[1] = 'b';
    buf[2] = 0;
    printf("%s\n", buf);
    return 1;
}
