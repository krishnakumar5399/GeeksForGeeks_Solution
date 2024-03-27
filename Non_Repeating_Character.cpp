    char nonrepeatingCharacter(string S)
    {
       //Your code here
       // create mapping
       map<char,int>mapping ;
       for(int i = 0 ;i<S.length();i++ ){
           mapping[S[i]]++;
       }
       
       for(int i = 0 ;i < S.length() ;i++){
           if(mapping[S[i]] == 1){
               return S[i] ;
           }
       }
       return '$' ;
       
    }
