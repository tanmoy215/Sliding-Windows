#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{2,2,2,1,2,2,1,2,2,2};
    int  k = 2;
     std::ios_base::sync_with_stdio(false);
        std::cout.tie(nullptr);
        std::cin.tie(nullptr);
        queue<int> q;
        int ans=0,c=0,j=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2!=0){ 
                c++;
                q.push(i);
            }
            while(c>k)
            {
                if(v[j]%2!=0) c--;
                j++;
                if(q.front()<j) q.pop();
            }
            if(c==k)
                ans+=(q.front()-j+1);
        }
        cout<<"Final ans is : "<<ans<<endl;
    return 0;
}