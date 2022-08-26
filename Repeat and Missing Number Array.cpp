vector<int> Solution::repeatedNumber(const vector<int> &A) {
    /************approach1***********/
    vector<int>rslt(2);
   long long int n=A.size();
    // int arr[n+1]={0};
    // for(int i=0;i<n;i++){
    //     arr[A[i]]++;
    // }
   
    // for(int i=1;i<n+1;i++){
    //      if(arr[i]>1){
    //         rslt[0]=i;
    //         //cout<<i<<endl;
    //      }
    //     if(arr[i]==0){
    //           rslt[1]=i;
    //          //cout<<i<<endl;
    //     }
    // }
    // return rslt;
    
    /**********approach2*************/
    
//     long long sum=n*(n+1);
//     sum/=2;
//     long long sq_sum=n*(n+1)*(2*n+1);
//     sq_sum/=6;
    
//     for(int i=0;i<n;i++){
//         sum -=(long long)A[i];
//         sq_sum -=(long long)A[i]*(long long)A[i];
//     }
//      long long int missing_no=0, repeat_no=0;
//    missing_no= (sum + sq_sum/sum)/2;
//    repeat_no=missing_no-sum;
//    rslt[1]=missing_no;
//    rslt[0]=repeat_no;
//    return rslt;
   
    /*************approach3************/
    int num=0;
    for(int i=0;i<n;i++){
        num ^= A[i] ^ (i+1); //7
    }
    int bkt1=0,bkt2=0;
    
    for(int j=0;j<n;j++){
        
    }
    
    
    
    
    
}
