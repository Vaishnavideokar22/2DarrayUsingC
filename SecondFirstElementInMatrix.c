#include<stdio.h>

 void mat(){

int r = 3;
int c = 3;

int arr[r][c];

printf("Enter the elements in the array: \n");

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

printf("The elements are %d \n",arr[2][1]);
    
}

int main(){

    mat();

    return 0;
}