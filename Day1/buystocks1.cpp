int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
        int ls=INT_MAX;
    int ov=0;
    for(int i=0;i<n;++i)
    {
        if(prices[i]<ls)
            ls=prices[i];
        int k=prices[i]-ls;
        if(k>ov)
            ov=k;
    }
    return ov;
    
    
}
