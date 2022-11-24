// Write a program to enter value in two dimensional array.
#include<stdio.h>
int main(){
 
   int a[2][3];
   // syntax for 2d :- [{1,2,3},{2,4,5}]; 

// for input
for(int i=0;i<2;i++){

 for(int j=0;j<3;j++){
    printf("Enter Any Number:- ");
    scanf("%d",&a[i][j]);
    
    
}}

// for output
for(int i=0;i<2;i++){

 for(int j=0;j<3;j++){
    printf("%d",a[i][j]);
    if(j==2){
        printf("\n");
    }
 }}

    return 0;
}