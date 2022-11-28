// complete it
#include<stdio.h>
int main(){
    
    int i,a[0];
 int c;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);

    }


printf("Number for search:- ");
scanf("%d",&c);

    for(i=0;i<5;i++){

        if(c=a[i]){

            printf("found");

        }
        else{
            printf("Not Found");
        }
    }
    
    return 0;
}