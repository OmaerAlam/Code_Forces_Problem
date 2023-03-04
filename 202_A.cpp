#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
  optimize();
         string s,cnt;
         cin>>s;
         char c=s[0];
         for(int i=0;i<s.length();i++){
             c=max(c,s[i]);
         }

         for(int i=0;i<s.length();i++){
            if(s[i]==c){
                cnt+=s[i];
            }
         }
      cout<<cnt<<endl;
    return 0;
}
