#include<stdio.h>

int swap(int num1,int num2){

    int temp;

    printf("Entered Values %d %d",num1,num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("After swapped values :- \n");
    printf("num1= %d \n ",num1);
    printf("num2= %d \n",num2);

    }

void swap1(int * num1, int * num2){

    int temp;
    printf("Entered Values %d %d",num1,num2);

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("After swapped values :- \n");
    printf("num1= %d \n ",num1);
    printf("num2= %d \n",num2);
}


int main(){

    int n1,n2;

    printf("Enter two numbers : ");
    scanf("%d%d",n1,n2);

    swap1(n1,n2);

    return 0;
}

