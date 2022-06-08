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
