#include <stdio.h>

int bar(int val)
{
    int x = 0;
    while(val>0)
    {
        printf("%d\n",val);
        x = x+bar(val-1);
    }
    return val;
}

int main()
{
    //int n;
    //scanf("%d", &n);
    int val1 = bar(3);
    printf("The foo value is %d\n",val1);
    return 0;
}
