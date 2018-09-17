#include<stdio.h>
void main()
  {
    printf("Enter the number of array elements");
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
      __fpurge(stdin);
      scanf("%d",&arr[i]);
    }
    printf("\nEnter the number to be searched");
    int s;
    __fpurge(stdin);
    scanf("%d",&s);
    int flag=search(arr,s,n);
    if(flag==n)
      printf("\n element not found");
    else
      printf("\n element is found at position %d",flag);

}
