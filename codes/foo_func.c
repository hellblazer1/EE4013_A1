#include <stdio.h>

int foo(int val)
{
    int x = 0;
    while(val>0)
    {
        printf("%d\n",val);
        x = x+foo(val--);
    }
    return val;
}

int main()
{
    //int n;
    //scanf("%d", &n);
    int val1 = foo(3);
    printf("The foo value is %d\n",val1);
    return 0;
}
