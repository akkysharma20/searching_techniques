void bsearch(int arr[],int s,int start, int end);
{
  int mid= (start+end)/2;
  if(arr[mid]==s)
  {
    printf("\n Element found at position %d",mid);
    return;
  }
  else if (star==end)
  {
      printf("\n element not found");
      return;
  }
  else if(arr[mid]> s)
  {
        bsearch(arr,s,mid+1,end);
  }
  else
          bsearch(arr,s,start,mid-1);
}
