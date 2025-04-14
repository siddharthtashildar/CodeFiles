#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int lowEle, int highEle) {
  
  while (lowEle <= highEle) {
    int midAF = lowEle + (highEle - lowEle) / 2;

    if (x == array[midAF])
      return midAF;

    if (x > array[midAF])
      lowEle = midAF + 1;

    else
      highEle = midAF - 1;
  }

  return -1;
}

int main(void) {
    int array[] = {3, 4, 5, 6, 7, 8, 37,69,420};
    int x = 69;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
      printf("404! Couldnt find that sucker!");
    else
      printf("Found The Element! Lets goo! he resides at index %d", result);
  }