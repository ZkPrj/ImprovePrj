#include <stdio.h>
#include <stdlib.h>

unsigned int MyMax(unsigned int a, unsigned b)
{
    if (a > b) {
    	return a;
    }
    return b;
}

int main(unsigned int argc, char **argv)
{
    unsigned a, b, c;
    if (argc >= 3) {
    	a = (unsigned int)atoi(argv[1]);
	b = (unsigned int)atoi(argv[2]);
    } else {
    	a = 10;
	b = 20;
    }
    c = MyMax(a, b);
    printf("Max(%d, %d) = %d\n", a, b, c);
    return 0;
}
