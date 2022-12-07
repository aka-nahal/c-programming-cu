// Write a program to convert decimal to binary using functions with no argument but a return value.
// incompletelbi
#include<stdio.h>

int converter(){
    int a[10],b,c;
    printf("Enter the you want to convert :- ");
    scanf("%d",&b);

printf("Entered Number : - %d \n",b);

for(int i=0;b>0;i++){

    a[i]=b%2;
    b=b/2;

    printf("%d",b);
    for(i=i;i>=0;i--){

        printf("%d",a[i]);
    }
}

}

int main(){

converter();

return 0;

}