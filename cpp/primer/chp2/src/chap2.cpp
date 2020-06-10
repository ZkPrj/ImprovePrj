#include <iostream>

int main(int argc, char** argv)
{
    int i= 42;
    int &r = i;
    int *p = &i;
    int &r2 = *p;
    r2 = 100;
    std::cout << r2 << std::endl;
    return 0;
}