// https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/0

 long long maxElement(int arr[] ,int n){
        long long max = INT_MIN ;
        for( long long i= 0 ;i<n;i++){
            if(arr[i]>max){
                max = arr[i] ;
            }
        }
        return max ;
    }
    
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum = 0;
        long long ans = INT_MIN ;
        for(int  i = 0 ;i<n;i++){
            sum = sum + arr[i] ;
            if(sum > ans){
                ans = sum ;
            }
            if(sum < 0){
                sum = 0 ;
            }
        }
        
        long long max = maxElement(arr,n) ;
       
        if(max > ans)  return max ;
         else return ans ;
        
    }
