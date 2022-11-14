#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100,555,999,9000};
  int i;
  
  for (i = 0; i < 7; i++) {
    printf("%d\n", myNumbers[i]);
  }
 
  return 0;
}