#include<stdio.h>
int main() {

int a,b=4,c=0;

printf("Enter Any Number:- ");
scanf("%d",&a);

while(a>=b){

a=a-b;
c++;

}

printf("Answer is :- %d \n",c);
return 0;

}