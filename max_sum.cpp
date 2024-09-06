// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{2,1,3,4,1,4,6,4,4,8,4,7,1};
//     int n = arr.size();
//       int k;
//       cout<<"enter value of k : ";
//       cin>>k;
//       int max_sum = 0;
//       int idx = -1;
//       for(int i=0;i<=n-k;i++){
//         int sum = 0;                  brutes force
//         for(int j=i;j<i+k;j++){
//             sum+=arr[j];
//         }
//         if(max_sum<=sum) {
//             max_sum = sum;
//             idx = i;
//         }
//       }
//       cout<<"Final ans is : "<<max_sum<<endl<<"And the index is : "<<idx<<endl;
//     return 0;
// }

//sliding windows
 #include<iostream>
 using namespace std;
 int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(int);
     int k;
     cout<<"enter k value : ";
     cin>>k;
     int i=0,j=k-1;
      int sum = 0;
      for(int y=0;y<k;y++){
        sum+=arr[y];
      }
      int max = 0;
      int idx = -1;
      for(int p=1;p<=n-k;p++){
          i++;
          j++;
          sum+=arr[j]-arr[i-1];
          if(max<sum){
            max=sum;
            idx = p;
          }
          
      }
      cout<<"Final ans is : "<<max<<endl<<"And index number : "<<idx<<endl;
    return 0;
 }
