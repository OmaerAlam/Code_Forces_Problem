#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int n,cnt=0;
    char ch;
    cin>>n;
    string s;
    cin>>s;
    int d=s.size();
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
       if(i%n==0) ch=s[i];
       if(s[i]==ch) cnt++;
    }
    if(d==cnt && cnt%n==0){
        for(int i=0;i<n;i++){
            for(int d=0;d<s.size();d+=n){
                cout<<s[d];
            }
        }
    }
    else cout<<"-1";
return 0;
}
