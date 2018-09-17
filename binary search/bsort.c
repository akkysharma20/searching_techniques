#include"head.h"
void bubblesort(int arr[],int num)
{
  for(int i=0;i<num-1;i++)
  {
    for(int j=i+1;j<num;j++)
    {
      if(arr[i]>arr[j])
      {
        swap(&arr[i],&arr[j]);
      }
    }
  }

}
