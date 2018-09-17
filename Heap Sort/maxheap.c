void maxheap(int arr[],int n)
{
  int max,left,right,i;
  for(i=n/2;i>=1;i--)
  {
    max=i;
    left=2*i;
    right=left+1;
    if(arr[left]>arr[max])
      max=left;
    if((arr[right]>arr[max])&&(right<=n))
      max=right;
    if(max!=i)
      swap(&arr[i],&arr[max]);

  }
}
