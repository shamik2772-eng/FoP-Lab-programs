#include <stdio.h>

int main()
{
    int marks[5];
    int i;
    int total = 0;
    float percentage;
    int pass = 1;

    printf("Enter marks of five subjects:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);

        if(marks[i] < 40)
        {
            pass = 0;
        }

        total += marks[i];
    }

    if(pass == 0)
    {
        printf("Result: FAIL\n");
    }
    else
    {
        percentage = total / 5.0;
        printf("Result: PASS\n");
        printf("Aggregate Percentage = %.2f%%\n", percentage);

        if(percentage >= 75)
            printf("Grade: Distinction\n");
        else if(percentage >= 60)
            printf("Grade: First Division\n");
        else if(percentage >= 50)
            printf("Grade: Second Division\n");
        else
            printf("Grade: Third Division\n");
    }

    return 0;
}