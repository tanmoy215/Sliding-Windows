#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> nums = {2,-3,4,4,-7,-1,4,-2,6};
     int n = nums.size();
     int  k = 3;
     int m = nums[0];
     for(int i=1;i<k;i++){
        m =min(m,nums[i]);
     }
      int i=1;
      int j=k;
      vector<int> ans;
      ans.push_back(m);
      int p = 0;
      while(j<n){
         if(ans[p]>nums[j]){
            m = nums[j];
         }
         ans.push_back(m);
         i++;
         j++;
         p++;
      }
      //check
      for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
      }
    return 0;
}