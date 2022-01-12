class Solution{
  public:
    void swap(int a[],int i,int j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    void sort012(int arr[], int n)
    {
        // coode here
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(arr[mid]==0)
            {
                swap(arr,low,mid);
                low++;mid++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else{
                swap(arr,mid,high);
                high--;
            }
        }
    }
};
