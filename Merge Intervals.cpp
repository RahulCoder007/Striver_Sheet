class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int ind=0;
        for(int i=1;i<n;i++){
            if(intervals[ind][1]>=intervals[i][0]){
             //if(intervals[ind][1]<intervals[i][1]){
                intervals[ind][1]=max(intervals[i][1],intervals[ind][1]);
            // }
                
            }else{
                ind++;
                intervals[ind][0]=intervals[i][0];
                intervals[ind][1]=intervals[i][1];
            }
        }
        for(int k=ind+1;k<n;k++){
            intervals.pop_back();
        }
        return intervals;
    }
};