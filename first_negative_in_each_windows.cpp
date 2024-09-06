#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = {2,-3,4,4,-7,-1,4,-2};
     int n = sizeof(arr)/sizeof(arr[0]);
     int k;
     cout<<"enter the value of k : ";
     cin>>k;
    int posi = 0;
    int p  =-1;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            posi = arr[i];
            p=i;
            break;
        }
    }
      vector<int> brr(n-k+1);
      if(p<0) brr[0] = 1;
      else  brr[0] = posi;
      int i = 1,j=k;
       while(j<n){
        int x =-1;
         if(p>=i) brr[i]=arr[p];
         else{
            
            for(int f=i;f<=j;f++){
                if(arr[f]<0){
                   p=f;
                   x=p;
                   break;
                }
            }
             if(x<0) brr[i]=1;
                else brr[i]=arr[p];
         }
         i++;
         j++;
       }
     //final output
     for(int i : brr){
        cout<<i<<" ";
     }
    return 0;
}