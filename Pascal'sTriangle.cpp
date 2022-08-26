#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas(numRows);
        for(int i=0;i<numRows;i++){
        	pas[i].resize(i+1);// declaring size of each row
        	pas[i][0]=pas[i][i]=1;//1st and last row gets "1"
        	for(int j=1;j<i;j++){
        		pas[i][j]=pas[i-1][j-1]+pas[i-1][j];
        	}
        	
        }
        return pas;
    }

int main() {
	int num;
	cin>>num;
	vector<vector<int>>v=generate(num);

	 for (int i = 0; i < num; i++) {
    	for (int j = 0; j < v[i].size(); j++) {
	      cout << v[i][j] << " ";
	    }
    	cout << "\n";
  	}
}