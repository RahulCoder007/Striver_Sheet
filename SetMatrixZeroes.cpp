#include<bits/stdc++.h>
using namespace std;
/**********bruteforce approach*************/
 void setZeroes3(vector < vector < int >> & matrix) {
  int rows = matrix.size(), cols = matrix[0].size();
  vector<vector<bool>> isZero(rows, vector<bool>(cols));
   //since matrix contains negative nos also that's why boolean matrix used
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == 0) {
        //corner case to avoid replacing original second zero
    // otherwise it'll not change that row/col to zero(which had second zero but replaced)
        cout<<"yes\n";
        int ind = i - 1;
        while (ind >= 0) {
          if (matrix[ind][j] != 0) {
            isZero[ind][j] = 1;
          }
          ind--;
        }
        ind = i + 1;
        while (ind < rows) {
          if (matrix[ind][j] != 0) {
             isZero[ind][j] = 1;
          }
          ind++;
        }
        ind = j - 1;
        while (ind >= 0) {
          if (matrix[i][ind] != 0) {
              isZero[i][ind] = 1;

          }
          ind--;
        }
        ind = j + 1;
        while (ind < cols) {
          if (matrix[i][ind] != 0) {
             isZero[i][ind] = 1;

          }
          ind++;
        }
      }
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        cout<<isZero[i][j]<<" ";
    }
    cout<<endl;
}
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (isZero[i][j] == 1) {
        matrix[i][j] = 0;
      }
    }
  }

}
/***********ends***********/
/********optimized approach**********/
void setZeroes2(vector<vector<int>> &matrix)
{
    int rows=matrix.size(), cols=matrix[0].size();
    vector<int> rowDummy(rows,-1), colDummy(cols,-1);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==0){
                rowDummy[i]=0;
                colDummy[j]=0;
            }
        }
    }
   for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(rowDummy[i]==0 || colDummy[j]==0){
                matrix[i][j]=0;
            }
        }
   }
}
    /**********end***********/
/*********better optimized approach**********/
 void setZeroes1(vector < vector < int >> & matrix) {
       int col0 = 1;
       int rows = matrix.size(), cols = matrix[0].size();
       for(int i=0;i<rows;i++){
           if(matrix[i][0]==0){ col0 = 0; }
           for(int j=1;j<cols;j++){
               if(matrix[i][j]==0){
                   matrix[i][0]=0;
                   matrix[0][j]=0;
               }
           }
       }
       for(int i=rows-1;i>=0;i--){
           for(int j=cols-1;j>=1;j--){
               if(matrix[i][0]==0 || matrix[0][j]==0){
                   matrix[i][j]=0;
               }
           }
            if(col0 == 0){
                matrix[i][0]=0;
             }
       }
      
   }
   /**********end************/
int main() {
  vector < vector < int >> arr;
  arr = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
  //arr= {{-1,2,3}};
  //arr={{1,1,1},{1,0,1},{1,1,1}};
//   for (int i = 0; i < arr.size(); i++) {
//     for (int j = 0; j < arr[0].size(); j++) {
//       cin >> arr[i][j];
//     }
// }
  setZeroes1(arr);
  cout << "The Final Matrix is " << endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}