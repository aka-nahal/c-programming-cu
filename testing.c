#include<stdio.h>
int main(){
    
    int a[]= { 2, 3, 4, 5, 6, 7, 8, 2, 5, 3 };
    int i;
    int b = 10;


   

for(i=0;i<b;i++ ){

for(int j = i + 1; j < b; j++) {    

 if(a[i] == a[j]) {
     printf("%d\n", a[j]);  
 }

}
}

 
return 0;
}