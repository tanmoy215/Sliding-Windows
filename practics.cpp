#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,1,3,1,2,3,4,5,6,4,1,8};
    int n = sizeof(arr)/sizeof(int);
    int target = 9;
    int i=0,j=0;
    int minlen=INT_MAX;
    int len = INT_MAX;
     int sum =0;
    while(j<n){
        sum+=arr[j];
        while(sum>=target){
            len = j-i+1;
            minlen = min(minlen,len);
            sum-=arr[i];
            i++;
        }
        j++;
    }
    cout<<"Final ans is : "<<minlen<<endl;
}