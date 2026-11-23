#include<stdio.h>

#if 0
int main()
{
    int *p, *q;
    int x, y, z;
    x = 10;
    y = 20;
    *p = &x;
    *q = (int)&y;
    z = *p/(*q);
    printf("%d %d %d\n", *p, *q, z);
    return 0;
}
#endif

#if 0
int main()
{
    short x = 0;
    char *cptr = &x;
    if(*cptr)
        printf("Hello");
    else
        printf("World");
    return 0;
}
#endif