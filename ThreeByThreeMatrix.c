#include<stdio.h>

 void matrix(){

int r = 3;
int c = 3;

int arr[r][c];

printf("Enter the elements in the arry: \n");

for(int i = 0; i < r ; i++){
    for(int j = 0; j < c; j++){
        scanf("%d",&arr[i][j]);
    }
}

printf("The elements in the array are: \n");

for(int i = 0; i < r ; i++){
    for(int j = 0; j < c; j++){
        printf("%d \t",arr[i][j]);
    }
    printf("\n");
}
    
}

int main(){

    matrix();

    return 0;
}