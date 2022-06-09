int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    vector<int>v(n,0);
    for(int i=0;i<n;++i)
    {
        v[arr[i]]+=1;
    }
    for(int i=0;i<n;++i)
        if(v[i]>1)
        {
            return i;
        }
    
}
