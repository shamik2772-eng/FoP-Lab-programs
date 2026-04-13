#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks1, marks2, marks3;
    float total, average;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].marks1, &s[i].marks2, &s[i].marks3);
        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].average = s[i].total / 3;
    }
    printf("\n--- Student Results ---\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %.2f\n", s[i].total);
        printf("Average Marks: %.2f\n", s[i].average);

        if (s[i].average >= 40)
            printf("Result: Pass\n");
        else
            printf("Result: Fail\n");
    }

    return 0;
}