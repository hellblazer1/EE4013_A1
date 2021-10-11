#include <stdio.h>

int proper(int val)
{
    int x = 0;
    if(val>0)
    {
        printf("%d\n",val);
        x = val+proper(val-1);
    }
    return x;
}

int main()
{
    //int n;
    //scanf("%d", &n);
    int val1 = proper(3);
    printf("The sum of first n natural numbers %d\n",val1);
    return 0;
}
