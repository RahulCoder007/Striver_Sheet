//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
/**************alternative approaches******************/
        void sortColors(vector<int>& nums) {
        int n= nums.size();
        /************selections sort*****************/
        // for(int i=0;i<n;i++){
        //     int min_pos=i;
        //     for(int j=i+1;j<n;j++){
        //         if(nums[j] < nums[min_pos])
        //             min_pos=j;
        //     }
        //     swap(nums[min_pos],nums[i]);
        // }
        int hsh[3]={0};
        for(int i=0;i<n;i++){
            hsh[nums[i]]++;
        }
        int k=0;
        for(int j=0;j<3;j++){
            
            while(hsh[j]){
                nums[k] = j;
                  k++;
                hsh[j]--;
                  
            }
        }
        
    }
    /*************ends**************/

    void sort012(int a[], int n)
    {
       int low=0;
       int mid=0;
       int high=n-1;
       
       while(mid<=high){
           switch(a[mid]){
                case 0: swap(a[low++],a[mid++]);
                        break;
                case 1: mid++;
                        break;
                case 2: swap(a[mid],a[high--]);
                        break;
           }
       }
       
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends