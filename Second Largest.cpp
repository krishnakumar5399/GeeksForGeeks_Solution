	int print2largest(int arr[], int n) {
	    // code here
	    if(n==1){
	        return -1 ;
	    }
	    
	    auto maxv1 = max_element(arr , arr + n) ;
	    int firstMax = *maxv1 ;
	    int index = maxv1 - arr ;
	    
	    for(int i = 0 ;i<n ;i++){
	        if(arr[i] == firstMax){
	            arr[i] = -1 ;
	        }
	    }
	  
	    //arr[index] = INT_MIN ;
	   // cout<<firstMax<<endl;
	   // cout<<arr[index]<<endl;
	   // cout<<arr[index-1]<<endl;
	   // cout<<arr[index + 1]<<endl;
	    
	    auto maxv2 = max_element(arr , arr + n) ;
	    int secondMax = *maxv2 ;
	    
	    return secondMax ;
