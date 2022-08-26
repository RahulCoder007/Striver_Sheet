#include <bits/stdc++.h> 
long long merge(long long arr[], int l, int m, int r){
    long long ct=0;
    int n1=m-l+2;
    int n2=r-m+1;
    long long L[n1], R[n2];
     L[n1-1]=INT_MAX; R[n2-1]= INT_MAX;
    for(int i=0;i<(n1-1);i++)
        L[i]=arr[l+i];
    for(int j=0;j<(n2-1);j++)
        R[j]=arr[m+1+j];
   
    int x=0,y=0;
    for(int k=l;k<=r;k++){
        if(L[x]<=R[y]){
            arr[k]=L[x++];
        }
        else{
            arr[k]=R[y++];
            ct += (n1-1)-x;
        }
    }
    return ct;
}
long long merge_sort(long long arr[],int l, int r){
     long long ct=0;
    int m;
    if(l<r){
          m=(l+r)/2;
        ct += merge_sort(arr,l,m);
        ct += merge_sort(arr,m+1,r);
        ct += merge(arr,l,m,r);
    }
    return ct;
}
long long getInversions(long long *arr, int n){
    long long ct=0;
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(arr[i]>arr[j]){
//                ct++;
//            }
//        }
//    }
//     return ct;
    
    /********merge approach**********/
    int low=0;
    int high=n-1;
    ct = merge_sort(arr,low,high);
    return ct;
}