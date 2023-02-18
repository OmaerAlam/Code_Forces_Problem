#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
      int t;
      cin>>t;
      while(t--){
        int one=0,zero=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') one++;
            else zero++;
        }
        int alice=min(zero,one) ;
        if(alice==0 || alice%2==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
      }
return 0;
}
