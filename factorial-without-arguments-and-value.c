// write a program to find factorial without using arguments and return values

#include<stdio.h>

int factorial(){

int i,fact=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("Fact = %d \n",fact);
    return factorial;

}

int main(){
    factorial();
    
}