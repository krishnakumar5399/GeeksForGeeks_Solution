int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	    int ans = 0;
	    int row = -1 ;
	    for(int i = 0;i<n;i++){
	        int zero = 0 ;
	        int one = 0 ;
	        for(int j = 0;j<m;j++){
	            if(arr[i][j] == 0){
	                zero++;
	            }
	            else{
	                one = m-zero ;
	                if(one>ans){
	                    ans = one ;
	                    row = i ;
	                    break;
	                }
	                
	            }
	        }
	    }
	    return row;
	}
