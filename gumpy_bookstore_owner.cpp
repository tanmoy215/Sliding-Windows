#include<bits/stdc++.h>
using namespace std;
int main(){
    int cus[] ={1,0,1,2,1,1,7,5};
    int gm[] ={0,1,0,1,0,1,0,1};
    int min = 3;
    int n = sizeof(cus)/sizeof(int);
    //windows sum
    int sum = 0;
    for(int i=0;i<min;i++){
        sum+=cus[i];
    }
      int i=1;
    int j = min;
    int max = sum;
    int idx = -1;
   while(j<n){
      sum=sum+cus[j]-cus[i-1];
      if(max<sum){
        max = sum;
        idx = i;
      }
      i++;
      j++;
   }
   
for(int i = idx;i<idx+min;i++){
    if(gm[i]==1) gm[i]=0;
}
    //final ans 
    int final =0;
    for(int i=0;i<n;i++){
        if(gm[i]==0){
            final+=cus[i];
        }
    }
    cout<<"Final Ans is : "<<final<<endl;
    return 0;
}