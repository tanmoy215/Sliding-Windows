#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,0,1,1,0,1,0,1,1,1};
    int n = sizeof(arr)/sizeof(int);
    int k;
    cout<<"enter k : ";
    cin>>k;
    int i=0,j=0;
    int product  = 1;
    int count = 0; 
    while(j<n){
        product*=arr[j];
        while(product>=k){
            count+=(j-i);
            product/=arr[i];
            i++;
        }
        j++;
    }
     while(i<n){
            count+=(j-i);
            product/=arr[i];
            i++;
        }
        cout<<"Final ans is : "<<count<<endl;
    return 0;
}