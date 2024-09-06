#include<bits/stdc++.h>
using namespace std;
int main(){
      int arr[] = {2,3,1,2,4,3};
      int n = sizeof(arr)/sizeof(arr[0]);
      int target;
      cout<<"enter taget value : ";
      cin>>target;
       int len = -1;
       int i=0,j=0;
       int sum =0;
       int minlen = INT_MAX;
       while(j<n){
         sum+=arr[j];
            while(sum>=target){
               len = j-i+1;
               minlen = min(len,minlen);
               sum-=arr[i];
               i++;
            }
         j++;
       }
       cout<<"Final ans is : "<<minlen<<endl;
    return 0;
}