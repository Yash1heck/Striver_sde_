long long maxSubarraySum(int arr[], int n)
{   
    
    long long sum=0;
    long long max_till=0;
        for(int i=0;i<n;++i)
        {
            if(sum+arr[i]>max_till)
            { 
             
                max_till=sum+arr[i];
                
            }
               sum+=arr[i];
            if(sum<0)
                sum=0;
        }
    return max_till;
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
}
/********LEETCODE VARIATION***********/
int maxSubArray(vector<int>& nums) {
        
    int sum=0;
    int max_till=0;
        for(int i=0;i<nums.size();++i)
        {
            if(sum+nums[i]>max_till)
            { 
             
                max_till=sum+nums[i];
                
            }
               sum+=nums[i];
            if(sum<0)
                sum=0;
        }
        if(max_till==0)
            return *max_element(nums.begin(),nums.end());
            
    return max_till;
   
}
