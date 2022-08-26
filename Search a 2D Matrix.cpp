
/***********(nlogn)***********/
class Solution {
public:
    bool binary_search(vector<int>& mat, int target, int l, int h){
        
        bool ans;
        if(l<=h){
        int m=(l+h)/2;
        if(target==mat[m])
            return true;
        else if(target<mat[m])
          return binary_search(mat,target,l,m-1);
                else if(target>mat[m])
               return  binary_search(mat,target,m+1,h);
        }
        return false;
    }
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
             int l,h;
        l=0;
        h=matrix[i].size()-1;
        bool val=binary_search(matrix[i],target,l,h);
            if(val==true)
               return true;
        }
        return false;
       
    }
};
/***************O(n+m)*******************/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public: 
    int matSearch (vector <vector <int>> &mat, int N, int M, int X)
    {
        int i=0, j=M-1;
        while(i<N && j>=0){
            if(X==mat[i][j])
            return true;
            else if(X<mat[i][j])
            j--;
            else
            i++;
        }
        return false;
    }
};

/***************O(log(n*m))*******************/



bool bin_search(vector<vector<int>>& mat, int l, int h, int target){
    if(l<=h){
        int m=(l+h)/2;
        int i=m/mat[0].size();
        int j=m%mat[0].size();
        if(target==mat[i][j])
            return true;
        else if(target<mat[i][j])
            return bin_search(mat,l,m-1,target);
        else
            return bin_search(mat,m+1,h,target);
    }
    return false;
}
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
   int low=0;
   int high=(m*n)-1;
   bool val=bin_search(mat,low,high,target); 
    if(val)
        return true;
    else
        return false;
}
/*********ends***********/
//{ Driver Code Starts.
#include <bits/stdc++.h> 
int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends