#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];   // date of joining
    float salary;
};
void totalEmployees(int n);
void countGender(struct Employee emp[], int n);
void salaryAbove10k(struct Employee emp[], int n);
void asstManager(struct Employee emp[], int n);

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i+1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender (Male/Female): ");
        scanf("%s", emp[i].gender);

        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    totalEmployees(n);
    countGender(emp, n);
    salaryAbove10k(emp, n);
    asstManager(emp, n);

    return 0;
}
void totalEmployees(int n) {
    printf("\nTotal number of employees = %d\n", n);
}
void countGender(struct Employee emp[], int n) {
    int male = 0, female = 0, i;

    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].gender, "Male") == 0)
            male++;
        else if(strcmp(emp[i].gender, "Female") == 0)
            female++;
    }

    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);
}
void salaryAbove10k(struct Employee emp[], int n) {
    int i;
    printf("\nEmployees with salary > 10000:\n");

    for(i = 0; i < n; i++) {
        if(emp[i].salary > 10000) {
            printf("%s\n", emp[i].name);
        }
    }
}
void asstManager(struct Employee emp[], int n) {
    int i;
    printf("\nEmployees with designation Asst. Manager:\n");

    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "Asst.Manager") == 0 || 
           strcmp(emp[i].designation, "AsstManager") == 0) {
            printf("%s\n", emp[i].name);
        }
    }
}