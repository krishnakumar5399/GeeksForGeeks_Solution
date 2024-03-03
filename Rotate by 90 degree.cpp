    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // firstly reverse. for anti clock-wise
        for(int i = 0 ; i < n  ; i++){
            reverse(matrix[i].begin(),matrix[i].end()) ;
        }
        
        // tranpose of a matrix  kyuki anti clock wise rotate karna hai.
        for(int i = 0 ; i<n;i++){
            for(int j = i ; j <n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    } 
