#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
      int t,x,y,cnt=0,cnt1=0;
      cin>>t;
      while(t--){
        cin>>x>>y;
        cnt -= x;
        cnt += y;
        if(cnt1<cnt){
            cnt1=cnt;
        }
      }
      cout<<cnt1<<endl;
return 0;
}
