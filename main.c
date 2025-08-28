#include <stdio.h>
#include "sortSearch.h"

int main() {
  int temp[100] = {
        9528, 9988, 7122, 9571, 3774, 943, 3618, 8375, 7877, 9980,
        2982, 1357, 3935, 334, 3888, 8219, 8866, 2585, 784, 6840,
        7169, 5074, 5730, 9306, 6742, 9481, 4932, 5773, 263, 2421,
        8778, 1451, 3538, 7094, 719, 3746, 5573, 379, 1787, 1935,
        2471, 4652, 8075, 9312, 9198, 6382, 2357, 2688, 3608, 4620,
        6842, 8916, 3372, 1220, 3733, 8170, 612, 8446, 1158, 9217,
        3845, 3436, 9085, 2538, 8867, 8094, 7782, 1561, 3303, 1769,
        8931, 2338, 4336, 7541, 9438, 7409, 7107, 2230, 5197, 6744,
        7677, 6526, 5366, 837, 450, 4180, 7009, 6836, 2991, 5636,
        9641, 1666, 1118, 2891, 6847, 6926, 2852, 6127, 4653, 1558
    };
  
  printf("Array before qSort\n");
  displayArray(temp, 100);

  quickSort(temp, 0, 99);

  printf("Array after qSort\n");
  displayArray(temp, 100);

  int elements = sizeof(temp) / sizeof(temp[0]);

  int fNum = 5555;

  if(binarySearch(temp, 0, elements, fNum))
  {
    printf("%d is in array\n", fNum);
  } else {
    printf("%d is not in Array\n", fNum);
  }
 
  int sNum = 719;
  if(binarySearch(temp, 0, elements, sNum)){
    printf("%d is in array\n", sNum);
  } else {
    printf("%d is not in array\n", sNum);
  } 

  quickSortReverse(temp, 0, 99);
  printf("Array after qSort Reverse\n");
  displayArray(temp, 100);

  return 0;
}

