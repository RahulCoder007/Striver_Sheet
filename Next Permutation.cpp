class Solution {
public:
    
    void nextPermutation(vector<int>& nums) {
        //next_permutation(nums.begin(),nums.end());
         int i,j;
        int n=nums.size();
        for(i=n-2 ;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
              
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }else{
        for(j=n-1;j>i;j--){
            if(nums[j]>nums[i]){
                break;
            }
        }
        swap(nums[i],nums[j]);      
        reverse(nums.begin()+i+1,nums.end());
        }
        
    }
        
//         for(int i=0;i<ans.size();i++){
//             int ct=0;
//             for(int j=0;j<ans[i].size();j++){
//             if(ans[i][j]==nums[j]){
//                 //cout<<ans[i]<<endl;
//                ct++;
//             }
//                 if(ct==nums.size()){
//                     for(int k=0;k<nums.size();k++)
//                         nums[k]=ans[i+1][k];
//                     return;
//                 }
                   
//             }
//         }
        //     for(int j=0;j<ans[i].size();j++){
        //     cout<<ans[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
       
    
};