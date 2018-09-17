#include"head.h"
void main()
{
  printf("\n Enter the number of array element\n");
  int num;
  __fpurge(stdin);
  scanf("%d",&num);
  int arr[num];
  for(int i=0;i<num;i++)
  {
    printf("Enter array element %d\n",i+1);
    __fpurge(stdin);
    scanf("%d",(arr+i));
  }
  printf("\nEnter the number to be searched");
  int s;
  __fpurge(stdin);
  scanf("%d",&s);
  bubblesort(arr,s,0,num-1);
  bsearch(arr,0,n-1);
  printf("\b");
}
