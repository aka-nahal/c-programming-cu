#include<stdio.h> 
int main()   
{ 
	int i,j; 
	for(i=1; i<=20; i++) 
	{ 
		for(j=1; j<=20; j++) 
		{ 
			printf("%d x %d = %d\n",i,j,i*j); 
		} 
		printf("\n\n"); 
	} 
} 