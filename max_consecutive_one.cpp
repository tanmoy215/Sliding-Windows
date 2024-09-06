#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={1,0,1,1,0,1,1,1,0,1,0,1,1,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter the value of k : ";
    cin>>k;
    int maxlen = INT_MIN,len = INT_MIN;
    int i=0,j=0,flips=0;
    while(j<n){
        if(arr[j]==1) j++;
        else{
            if(flips<k){
                flips++;
                j++;
            } 
            else{
                len = j-i;
                maxlen = max(maxlen,len);
                while(arr[i]==1) i++;
                i++;
                j++;
            }
        }
        len = j-i;
      maxlen = max(maxlen,len);
    }
    cout<<"Final ans is : "<<maxlen<<endl;
     
    return 0;
}