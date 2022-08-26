class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        fill_n(arr,n,0);
        for(int i=0;i<n;i++){
            if(arr[nums[i]]==0){
                 arr[nums[i]]++;
            }else{
                return nums[i];
            }
           
        }
        // return 0;
        
        /********either/or*********/
        
        // for(int i=0;i<n;i++){
        //     arr[nums[i]]++;
        // }
        // int value;
        // for(int i=0;i<n;i++){
        //     if(arr[i]>1){
        //         value=i;
        //         break;
        //     }
        // }
        // return value;
        
        
        /**************best approach***********/
        int slow=nums[0];
        int fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
        
        
    }
};