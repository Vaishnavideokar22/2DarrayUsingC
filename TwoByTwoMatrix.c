#include<stdio.h>

 void matrix(){

int row = 2;
int col = 2;

int arr[row][col];

printf("Enter the elements in the array: \n");

for(int i = 0; i < row ; i++){
    for(int j = 0; j < col; j++){
        scanf("%d",&arr[i][j]);
    }
}

printf("The elements in the array are: \n");

for(int i = 0; i < row ; i++){
    for(int j = 0; j < col; j++){
        printf("%d \t",arr[i][j]);
    }
    printf("\n");
}
    
}

int main(){

    matrix();

    return 0;
}