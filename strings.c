#include<stdio.h>
#include<string.h>

int main(){

    int a,b;
    char str1[30];
    char str2[30];

    puts("Enter the string value");
    gets(str1);

    puts("Enter the strings value");
    gets(str2);

    puts(str1);
    puts(str2);

while(1){

    printf(" \n 1.String Length \n 2.String Copy \n 3.String Comparision \n 4.String Concatenation \n 5.Reverse \n 6.Exit");
    printf("Enter the corresonponding to number to execute the the desired program");
    scanf("%d",&a);

    switch(a)
    {
        case 1: 
        b=strlen(str1);
        printf("The length of the string is %d",b);
        break;

        case 2:
        strcpy(str1,str2);
        printf("Copied string is %s",str1);
        break;

        case 3:
        b=strcmp(str1,str2);
        if(b==0)

            printf("the strings are same");

        else

        printf("not the same");
        break;

        case 4:
        strcat(str1,str2);
        printf("\n Concatenated String is %s. \n",str1);
        break;

        case 5:
        strrev(str1);
        printf("\n Concatenated string is %s \n",str1);
        break;

        case 6:
        return 0;

        default:
        printf("You entered an invalid option \n");
    }

    } 
    

 return 0;
}