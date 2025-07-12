#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++) 
        {
            if (str1[i] == str2[j])
            {
                for (int k = j; k < len2 - 1; k++)
                {
                    str2[k] = str2[k + 1];
                }
                len2--;
                j--;
            }
        }
    }

    str2[len2] = '\0';

    printf("Resultant string: %s\n", str2);

    return 0;
}
