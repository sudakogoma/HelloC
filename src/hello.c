#include <stdio.h>

int getA()
{
    return 2;
}

int getRoundValue(int getValue(), int min, int max)
{
    int x = (*getValue)();
    if (x < min)
    {
        x = min;
    }
    if (x > max)
    {
        x = max;
    }
    return x;
}

int main(void)
{
    printf("hello world.\n");

    int a = 0;
    int b = 1;

    a |= (b == 1) << 1;

    int c = getRoundValue(&getA, -1, 1);
    char* chr;
    sprintf(chr, "%d", c);
    printf("%s\n", chr);

    return 0;
}
