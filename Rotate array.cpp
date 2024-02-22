    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        
        // code here
        // for clockwise rotation 
        if(d>n){
          d = d % n ;  
        }
        int k = abs(n-d) ;
        int ans [n] ;
        for(int i = 0 ;i<n ; i++){
        
            ans[(i+k)%n] = arr[i] ;
            
        }
        for(int i = 0 ;i<n;i++){
            arr[i] = ans[i] ;
        }
        
    }
