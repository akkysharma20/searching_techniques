#include"heap.h"
void main()
{
  printf("Enter the number of array elements");
  int n,i;
  scanf("%d",&n);
  int arr[n+1];
  for(i=1;i<=n;i++)
  {
    __fpurge(stdin);
    scanf("%d",&arr[i]);
  }
  for(i=1;i<=n;i++)
  {
    printf("%d\t",arr[i]);
  }
  printf("\n");
  heapsort(arr,n);
  for(i=1;i<=n;i++)
  {
    printf("%d\t",arr[i]);
  }

}
