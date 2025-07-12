//QUESTION 1(C){Generating Character Pattern}

#include<stdio.h>

int main()
{
    int i, j, n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c", 87+j);
        }
        printf("\n");
    }

    return 0;
}