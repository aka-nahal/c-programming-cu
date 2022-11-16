#include<stdio.h>

int main()
{
int a;
int b;
int c;
    printf("welcome to Ni Hao the best taste ever\n");
    printf("here is our menu \n");
    printf("chose something from the menu\n");
    printf(" 1.Spanish Stuff \n 2.Chineese Cusine \n 3.Ramen \n 4.Burger \n");
    printf("To order pls enter the corresponding number to the dish \n");
    scanf("%d",&a);
    
 
    
    switch (a){
        
        case 1:
        
         
    
        printf("Spanish Stuff Is Avaible And Ready To Order \n");
        printf("To Confirm the order pls enter 0 for yes and 1 for No \n");
        scanf("%d",&b);
        
        if(b==0){
            printf("Order Confirmed\n");
        }
        
        else {
            
            printf("Order Cancelled and now get out \n");
        }
         break;
        case 2:
        
        
        printf("Chineese Cusine Is Avaible And Ready To Order \n");
        printf("To Confirm the order pls enter 0 for yes and 1 for No \n");
        scanf("%d",&b);
        
        if(b==0){
            printf("Order Confirmed\n");
        }
        
        else {
            
            printf("Order Cancelled and now get out \n");
        }
         break;
        case 3:
        
        
        printf("Ramen Is Avaible And Ready To Order \n");
        printf("To Confirm the order pls enter 0 for yes and 1 for No \n");
        scanf("%d",&b);
        
        if(b==0){
            printf("Order Confirmed\n");
        }
        
        else {
            
            printf("Order Cancelled and now get out \n");
        }
         break;
         case 4:
        
        
        printf("Burger Is Avaible And Ready To Order \n");
        printf("To Confirm the order pls enter 0 for yes and 1 for No \n");
        scanf("%d",&b);
        
        if(b==0){
            printf("Order Confirmed\n");
        }
        
        else {
            
            printf("Order Cancelled and now get out \n");
            
            break;
             
        }
       
      

     printf("Now For Your Drinks \n");
     printf("1.pespi \n 2. coca cola \n 3.7up \n 4. No Drinks");
     printf("To order pls enter the corresponding number to the drink \n");
      scanf("%d",&c);
    

  switch (c){
        
        case 1:
        
        
        printf("pespi Is Avaible And Ready To Order \n");
        printf("To Confirm the order pls enter 0 for yes and 1 for No \n");
        scanf("%d",&b);
        
        if(b==0){
            printf("Order Confirmed\n");
        }
        
        else {
            
            printf("Order Cancelled and now get out \n");
        }
         break;
        case 2:
        
        
        printf("coka cola Is Avaible And Ready To Order \n");
        printf("To Confirm the order pls enter 0 for yes and 1 for No \n");
        scanf("%d",&b);
        
        if(b==0){
            printf("Order Confirmed\n");
        }
        
        else {
            
            printf("Order Cancelled and now get out \n");
        }
         break;
        case 3:
        
        
        printf("7up Is Avaible And Ready To Order \n");
        printf("To Confirm the order pls enter 0 for yes and 1 for No \n");
        scanf("%d",&b);
        
        if(b==0){
            printf("Order Confirmed \n");
        }
        
        else {
            
            printf("Order Cancelled and now get out \n");
        }
        
        break;
          
      case 4:
          printf("Alright");
          
          break;
  } }
    

    printf("Thanks You For Coming Here \n");
   
    return 0;
}