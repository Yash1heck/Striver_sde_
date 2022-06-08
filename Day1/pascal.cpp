vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>>x;
     vector<long long int>P;
    P.push_back(1);
    x.push_back(P);
 
    for(int i=2;i<=n;++i)
    { vector<long long int>v;
     v.push_back(1);
     for(int j=1;j<x[i-2].size();++j)
     {
         v.push_back(x[i-2][j-1]+x[i-2][j]);
     }
     v.push_back(1);
     x.push_back(v);
         
     
     
    }
    return x;
    
}
