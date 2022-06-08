//Brute FORCE
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    vector<pair<int,int>>v;
   
    for(int i=0;i<matrix.size();++i)
    {
        for(int j=0;j<matrix[0].size();++j)
        {
            if(matrix[i][j]==0)
            {
                v.push_back(make_pair(i,j));
               
  
            
            }
            
        }
    }
    for(auto&it:v){
        int x=it.first;
        int y=it.second;
        for(int i=0;i<matrix[0].size();++i)
        {
            matrix[x][i]=0;
        }
        for(int i=0;i<matrix.size();++i)
        {
            matrix[i][y]=0;
        }
    }
    
    
}


/********************Optimal************************/
void setZeros(vector<vector<int>> &matrix)
{
	//
    int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (col0 == 0) matrix[i][0] = 0;
    }
    }
