#include <stdio.h>

#define MAX 10

// Function for matrix addition
void addMatrix() {
    int r, c, i, j;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&B[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            C[i][j]=A[i][j]+B[i][j];

    printf("Resultant Matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
}

// Function to find saddle point
void saddlePoint() {
    int r, c, i, j, k;
    int A[MAX][MAX];
    int min, colIndex, found = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<r;i++){
        min=A[i][0];
        colIndex=0;

        for(j=1;j<c;j++){
            if(A[i][j] < min){
                min=A[i][j];
                colIndex=j;
            }
        }

        for(k=0;k<r;k++){
            if(A[k][colIndex] > min)
                break;
        }

        if(k==r){
            printf("Saddle Point: %d\n",min);
            found=1;
        }
    }

    if(!found)
        printf("No Saddle Point found.\n");
}

// Function for inverse (2x2 only)
void inverseMatrix() {
    float A[2][2], det;

    printf("Enter elements of 2x2 matrix:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%f",&A[i][j]);

    det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

    if(det == 0){
        printf("Inverse does not exist.\n");
        return;
    }

    printf("Inverse Matrix:\n");
    printf("%.2f %.2f\n", A[1][1]/det, -A[0][1]/det);
    printf("%.2f %.2f\n", -A[1][0]/det, A[0][0]/det);
}

// Function to check magic square
void magicSquare() {
    int n, i, j;
    int A[MAX][MAX];
    int sumRow, sumCol, diag1=0, diag2=0, magic=1;

    printf("Enter order of square matrix: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);

    int targetSum = 0;
    for(j=0;j<n;j++)
        targetSum += A[0][j];

    for(i=0;i<n;i++){
        sumRow=0;
        sumCol=0;
        for(j=0;j<n;j++){
            sumRow += A[i][j];
            sumCol += A[j][i];
        }
        if(sumRow != targetSum || sumCol != targetSum)
            magic=0;
    }

    for(i=0;i<n;i++){
        diag1 += A[i][i];
        diag2 += A[i][n-i-1];
    }

    if(diag1 != targetSum || diag2 != targetSum)
        magic=0;

    if(magic)
        printf("It is a Magic Square.\n");
    else
        printf("It is not a Magic Square.\n");
}

int main() {
    int choice;

    printf("\n==== MATRIX OPERATIONS MENU ====\n");
    printf("1. Addition of two matrices\n");
    printf("2. Saddle point of a matrix\n");
    printf("3. Inverse of a matrix (2x2)\n");
    printf("4. Magic square check\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1: addMatrix(); break;
        case 2: saddlePoint(); break;
        case 3: inverseMatrix(); break;
        case 4: magicSquare(); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}