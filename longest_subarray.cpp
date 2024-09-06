#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,1,1,0,1,0,1,0,1,1,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
     int maxlen = INT_MIN,len=INT_MIN;
     int i=0,j=0,flips=0;
     while(j<n){
        if(arr[j]==1) j++;
        else{
            if(flips<1){
                flips++;
                j++;
            }
            else{
                len = j-i-1;
                maxlen = max(maxlen,len);
                while(arr[i]==1) i++;
                i++;
                j++;
            }
        }
        len = j-i-1;
        maxlen=max(maxlen,len);
     }
     cout<<"Final ans is : "<<maxlen<<endl;
    return 0;
}