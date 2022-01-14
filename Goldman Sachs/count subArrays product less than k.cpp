class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int count=0, start=0, end=0, prod=1;
        while(end<n)
        {
            prod*=a[end];
            while(start<n && prod>=k)
            {
                prod=prod/a[start];
                start++;
            }
            if(prod<k)
            {
                count+=end-start+1;
                end++;
            }
        }
        return count;
    }
};