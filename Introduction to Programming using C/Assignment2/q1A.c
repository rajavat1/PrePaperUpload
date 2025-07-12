// QUESTION 1 (A){Generate Triangle Pattern}
#include<stdio.h>

int main()
{
    int i, j, n=4, a;
    a = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", a%2);
            a++;
        }
        printf("\n");
    }

    return 0;
}