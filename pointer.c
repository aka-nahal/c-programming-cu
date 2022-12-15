/* NOTES:- 
 pointer is a variable which is used to store address of another variable.
function of * :- it is used to declare the pointer and it returns the value of the reference varible.
function of & :- used to return the address of the varible.
 types of pointer :- 
 1. null pointer:- will return the value 0. 
 2. void pointer:-  it is also termed as generic pointer,it does not have any standard data type. it can be used to store an address of any variable 
 3. wild pointer:- pointer is said to wild pointer if it is not being initiazled to anything. these types of poniters are not effecient because they may point to some  unknown memory location which may cause compilation error in our program and ulitmately crashing of the program. the result will be segementation error.
 
 Pointer arithemetic operations:-
  1. increment :-  new address = current address + (i*size of data type) syntax = p = p+1;
  2. decrement :-  new address = current address - (i*size of data type) syntax = p = p-1;
  3. addition :-   new address = current address + (number*size of data type)
  4. subraction :- new address = current address - (number*size of data type)

  */
#include<stdio.h>
int increment(){
 int a=10;
 int *p;
 p = &a;

 printf("%d \n",p);
 p = p+1;
 printf("%d \n",p);

    return 0;
}

int decrement(){
 int a=10;
 int *p;
 p = &a;

 printf("%d \n",p);
 p = p-1;
 printf("%d \n",p);

    return 0;
}
int addition(){
 int a=10;
 int *p;
 p = &a;

 printf("%d \n",p);
 p = p+6;
 printf("%d \n",p);

    return 0;
}
int subraction(){
 int a=10;
 int *p;
 p = &a;

 printf("%d \n",p);
 p = p-6;
 printf("%d \n",p);

    return 0;
}
int main(){
    
    increment();
    decrement();
    addition();
    subraction();

    return 0;
}