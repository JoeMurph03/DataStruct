#include <stdio.h>
#include "sortSearch.h"

void quickSort(int* nums, int left, int right){

  if(left >= right) //if the pivots have been crossed or are the same, then the sort is over
    return;

  //sets the pivot value is the center of the two set indexes. Finds the value of that index
  int pivotIndex = (left + right) / 2;
  int pivotValue = nums[pivotIndex];

  //sets the given values in order to save the given values for later use
  int leftIndex = left;
  int rightIndex = right;

  while(leftIndex <= rightIndex) {  //goes until the two 'boxes' have crossed
    while(nums[leftIndex] < pivotValue){  //goes until there is a value that does not belong on the left side
      leftIndex++;  //moves the box to the left to be checked again
    }
    while(nums[rightIndex] > pivotValue){  //goes until there is a value that does not belong on the right side of the pivot
      rightIndex--; //moves the box to the right
    }
    
    //checks to see that the boxes are not overlapped after both boxes have found a stopping point
    if(leftIndex <= rightIndex){
      //swaps the values to their correct sides 
      int temp = nums[leftIndex];
      nums[leftIndex] = nums[rightIndex];
      nums[rightIndex] = temp;
      
      //moves the boxes one more time for the loop to start again      
      leftIndex++;
      rightIndex--;
    }
  }
  
  //calls the function again with the new values
  quickSort(nums, left, rightIndex);
  quickSort(nums, leftIndex, right);
}

//for some reason this sort the array from high to low but it is cut in half
void quickSortReverse(int* nums, int left, int right){
  
  if(left >= right){
    return;
  }

  int pivotIndex = (left + right) / 2;
  int pivotValue = nums[pivotIndex];

  int leftIndex = left;
  int rightIndex = right;

  while(leftIndex <= rightIndex) {
   
    while(nums[leftIndex] > pivotValue){
      leftIndex++;
    }
    
    while(nums[rightIndex] < pivotValue){
      rightIndex--;
    } 

    if(leftIndex <= rightIndex){
      int temp = nums[leftIndex];
      nums[leftIndex] = nums[rightIndex];
      nums[rightIndex] = temp;

      leftIndex++;
      rightIndex--;
    }
  }
  quickSortReverse(nums, left, rightIndex);
  quickSortReverse(nums, leftIndex, right);
}


