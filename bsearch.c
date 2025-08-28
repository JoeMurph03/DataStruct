#include <stdio.h>
#include "sortSearch.h"

int binarySearch(int* numArray, int left, int right, int findNum){

  if(left > right){
    return 0;
  }
 
  int pivotIndex = (left + right) / 2;
  int pivotValue = numArray[pivotIndex];

  if (findNum == pivotValue){
    return 1;
  } else if (findNum < pivotValue){
    return binarySearch(numArray, left, (pivotIndex - 1), findNum);
  } else {
    return binarySearch(numArray, (pivotIndex + 1), right, findNum);
  }
}

