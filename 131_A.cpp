#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    string s;
    char c;
    bool b=true;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(islower(s[i])){
            b=false;
        }
    }
    if(b==true){
        for(int j=0;j<s.size();j++){
            if(islower(s[j])) c=toupper(s[j]);
            else c=tolower(s[j]);
            cout<<c;
        }
    }
    else cout<<s;
return 0;
}
