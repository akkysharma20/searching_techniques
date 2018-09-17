int search(int arr[], int s, int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(arr[i]==s)
      break;
  }
  return i;
}
