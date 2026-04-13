#include<stdio.h>
int main(){
    int n,i;
    long long fact=1;
    printf("Enter a no: ");
    scanf("%d");
    if(n<0){
       printf("Factorial is not defined for negative no");
    }
    else{
      for(i=1;i<=n;i++){
          fact=fact*i;
      }
      printf("Factorial of %d=%lld",n,fact);
    }
return 0;
}