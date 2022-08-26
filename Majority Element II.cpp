class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int ct1=0, ct2=0;
        int n1=-1, n2=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==n1)
                ct1++;
            else if(nums[i]==n2)
                ct2++;
            else if(ct1==0){
                n1=nums[i];
                ct1=1;
            }
            else if(ct2==0){
                n2=nums[i];
                ct2=1;
            }
            else{
                ct1--;
                ct2--;
            }
        }
        int ct3=0, ct4=0;
        for(int i=0;i<n;i++){
            if(n1==nums[i])
                ct3++;
            if(n2==nums[i])
                ct4++;
        }
       // cout<<ct3<<" "<<ct4;
        if(ct3>(n/3))
            ans.push_back(n1); 
        if(ct4>(n/3))
            ans.push_back(n2);
        if(n1==n2)
            ans.pop_back();
        return ans;
    }
};