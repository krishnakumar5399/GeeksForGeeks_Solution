 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>ans ;
        int left = 0 , right = c-1 ;
        int top = 0 , bottom = r-1;
        int d = 0 ;
        while(left<=right && top <=bottom){
            if(d==0){
                for(int i = left ; i<=right ; i++){
                    ans.push_back(matrix[top][i]) ;
                }
                top++;
                d=1;
            }
            else if(d==1){
                for(int i = top ; i<=bottom ;i++){
                    ans.push_back(matrix[i][right]) ;
                    
                }
                right--;
                d=2;
            }
            else if(d==2){
                for(int i = right; i>=left;i--){
                    ans.push_back(matrix[bottom][i]) ;
                }
                bottom--;
                d=3;
            }
            else if (d==3){
                for(int i = bottom ;i>=top ;i--){
                    ans.push_back(matrix[i][left]) ;
                }
                left++;
                d=0 ;
            }
            
        }
        return ans;
    }
