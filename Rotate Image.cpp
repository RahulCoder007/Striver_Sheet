class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size(); int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=i;j<col;j++){
               swap(matrix[i][j],matrix[j][i]);
            }
            
        }
      for(int i=0;i<row;i++){
           
              reverse(matrix[i].begin(),matrix[i].end());
            
        }
        
        
        /*******with auxiliary matrix**********/
        
        // vector<vector<int>> v=matrix;
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         matrix[i][j]=v[col-1-j][i];
        //     }
        // }
        /**************ends*************/
        
        
        /*********print rotate matrix*********/
        // for(int i=0;i<col;i++){
        //     for(int j=row-1;j>=0;j--){
        //         cout<<matrix[j][i]<<" ";
        //     }
        //     cout<<endl;
        // }
        /************ends***********/
        
    }
};