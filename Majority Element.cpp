class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /***********nlogn*************/
        int n=nums.size();
       // map<long,long> m;
       //  for(int i=0;i<n;i++)
       //      m[nums[i]]++;
       //  int val=0;
       //  for(auto it:m)
       //      //cout<<it.first<<" "<<it.second<<endl;
       //  if(it.second>(n/2))
       //      val=it.first;
       //  return val;
        
        /****************n**************/
        int ct=0, el=0;
        for(int i=0;i<n;i++){
            if(ct==0){
                el=nums[i];
            }
            if(el==nums[i]){
                ct++;
            }else{
                ct--;
            }
            
        }
        return el;
    }
};