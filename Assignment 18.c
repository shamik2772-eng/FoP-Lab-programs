#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int length, i, flag = 0;	
    printf("Enter a string: ");
    gets(str1);
    length = strlen(str1);
    printf("Length of string = %d\n", length);
    for(i = 0; i < length; i++) {
        rev[i] = str1[length - i - 1];
    }
    rev[length] = '\0';
    printf("Reversed string = %s\n", rev);
    printf("Enter another string for comparison: ");
    gets(str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    if(strcmp(str1, rev) == 0)
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");
    if(strstr(str1, str2) != NULL)
        printf("Second string is a substring of first string\n");
    else
        printf("Second string is NOT a substring of first string\n");

    return 0;
}