#include <stdio.h>
#include <stdlib.h>

unsigned int addNum(unsigned int a, unsigned int b)
{
    unsigned int c = a + b;
    return c;
}

int main(int argc, char** argv)
{
    unsigned a, b, c;
    if (argc == 3) {
        a = atoi(argv[1]);
	b = atoi(argv[2]);
    } else {
        a = 1;
	b = 2;
    }
    c = addNum(a, b);
    printf("%d + %d = %d \n", a, b, c);

    return 0;
}
