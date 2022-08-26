class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        //int max=nums[0];
        int n=nums.size();
        //cout<<n<<endl;
        if(n==1)
            return nums[0];
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum > max)
                max=sum;
             if(sum < 0)
                sum=0;
//              int sum=0;
//             for(int j=i;j<n;j++){
                
//               sum += nums[j];
//                 //int sum=0;
// //                 for(int k=i;k<=j;k++){
// //                     sum +=nums[k];
                   
// //                 }
//                 if(sum > max)
//                     max=sum;
//             }
        }
        return max;
    }
};