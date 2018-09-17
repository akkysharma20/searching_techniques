#include"heap.h"
void heapsort(int arr[],int n)
{
  int i;
  for(i=n;i>=1;i--)
  {
    maxheap(arr,i);
    swap(&arr[i],&arr[1]);
  }
}
