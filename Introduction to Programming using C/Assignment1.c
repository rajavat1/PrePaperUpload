#include <stdio.h>
#include <string.h>
int main()
{
    float maths, cp, cs, csw, ct;
    int f = 0;
    int g = 0;
    char grace[50];
    // Input and validation for Maths
    printf("Enter Maths Marks : ");
    scanf("%f", &maths);
    if (maths < 0 || maths > 100)
    {
        printf("Invalid value for Maths\n");
        return 0;
    }
    else if (maths < 33 && maths >= 30)
    {
        g++;
        maths += (33 - maths); // Apply grace marks
        strcpy(grace, "Maths");
    }
    else if (maths < 30)
    {
        f++;
    }
    // Input and validation for CP
    printf("Enter CP Marks : ");
    scanf("%f", &cp);
    if (cp < 0 || cp > 100)
    {
        printf("Invalid value for CP\n");
        return 0;
    }
    else if (cp < 33 && cp >= 30)
    {
        g++;
        cp += (33 - cp); // Apply grace marks
        strcpy(grace, "CP");
    }
    else if (cp < 30)
    {
        f++;
    }
    // Input and validation for CS
    printf("Enter Computer Skills Marks : ");
    scanf("%f", &cs);
    if (cs < 0 || cs > 100)
    {
        printf("Invalid value for Computer Skills Marks\n");
        return 0;
    }
    else if (cs < 33 && cs >= 30)
    {
        g++;
        cs += (33 - cs); // Apply grace marks
        strcpy(grace, "Computer Skills");
    }
    else if (cs < 30)
    {
        f++;
    }
    // Input and validation for Computer Software Marks
    printf("Enter Computer Software Marks : ");
    scanf("%f", &csw);
    if (csw < 0 || csw > 100)
    {
        printf("Invalid value for Computer Software Marks\n");
        return 0;
    }
    else if (csw < 33 && csw >= 30)
    {
        g++;
        csw += (33 - csw); // Apply grace marks
        strcpy(grace, "Computer Software Marks");
    }
    else if (csw < 30)
    {
        f++;
    }
    // Input and validation for Computer Thinking
    printf("Enter Computer Thinking Marks : ");
    scanf("%f", &ct);
    if (ct < 0 || ct > 100)
    {
        printf("Invalid value for Computer Thinking Marks\n");
        return 0;
    }
    else if (ct < 33 && ct >= 30)
    {
        g++;
        ct += (33 - ct); // Apply grace marks
        strcpy(grace, "Computer Thinking");
    }
    else if (ct < 30)
    {
        f++;
    }
    // Determine overall result
    if (f == 0 && g == 0)
    {
        float totalM = maths + cp + cs + csw + ct;
        float percentage = (totalM / 500) * 100;
        printf("Result: Passed\n");
        printf("Total MArks is: %f\n", totalM);
        printf("Percentage: %f%%\n", percentage);
        if (percentage >= 60)
        {
            printf("Division: First Division\n");
        }
        else if (percentage >= 45)
        {
            printf("Division: Second Division\n");
        }
        else if (percentage >= 33)
        {
            printf("Division: Third Division\n");
        }
    }
    else
    {
        if (g == 1 && f == 0)
        {
            printf("Passed in grace marks, Grace Subject is %s ", grace);
        }
        else if (f == 1 && g == 1)
        {
            printf("Result : Supplementary");
        }
        else if (f == 1 && g == 0)
        {
            printf("Result : Supplementary");
        }
        else
        {
            printf("Result : fail");
        }
    }
    return 0;
}