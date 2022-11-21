#include<stdio.h>
int main(){
    
    int a[]= { 2, 3, 4, 5, 6, 7, 8, 2, 5, 3 };
    int i;
    int b = 10;


   

for(i=0;i<b;i++ ){

for(int c = i + 1; c < b; c++) {    

 if(a[i] == a[c]) {
     printf("%d\n", a[c]);  
 }

}       
}

 
return 0;
}