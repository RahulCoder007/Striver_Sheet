
#include <bits/stdc++.h>

using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /**********my solution************/
       /* if(m==0)
            nums1 = nums2;
        
        else if( n!=0){
        // for(int i=0;i<m+n;i++){
        //     if(nums1[i]==0)
        //         nums1[i]=INT_MAX;
        // }
        int k=0;
        for(int i=0;i<m;i++){
            if(nums1[i] > nums2[k]){
                //cout<<nums1[i]<<endl;
                swap(nums1[i], nums2[k]);
                sort(nums2.begin(),nums2.end());
            }
        }
        int x=m;
        for(int j=0;j<n;j++){
            nums1[x+j]=nums2[j];
        }
        }*/
        
       /*******GAP solution***********/
      
         if(m==0)
            nums1=nums2;
        else if(n != 0){
            float gap =  ceil((n+m)/2);
            for(int i=0;i<n;i++){
                nums1[m+i] = nums2[i];
            }
            while(gap){
               
                for(int i=0;i+gap<n+m;i++){
                    //if(i+gap>n+m) break;
                    if((nums1[i]>nums1[i+gap])){
                        swap(nums1[i],nums1[i+gap]);
                        
                    }
                   
                }
                if(gap==1)
                gap=0;
                else
                gap=ceil(gap/2);
               
            }
        }
    }

int main()
{
   vector<int> v1={1,2,4,5,6,0};
   int m=5;
   vector<int> v2={3};
   int n=1;
   merge (v1,m,v2,n);
   for(auto it : v1)
   cout<< it<< " ";

    return 0;
}