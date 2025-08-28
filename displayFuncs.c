#include <stdio.h>
#include "sortSearch.h"

void displayArray(int* intArray, int elements, char *str)
{
   printf("\n%s\n", str); 
   for(int i = 0; i < elements; i++){
    if(i % 10 == 0 && i != 0){
      printf("\n");
    } 
    if(i == elements - 1){
      printf("%d", intArray[i]);
    } else {
      printf("%d, ", intArray[i]);
    } 
 
  }
  
  printf("\n\n");

}
