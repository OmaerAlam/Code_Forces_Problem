#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
     int t;
    int n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        char c[]="abcdefghijklmnopqrstuvwxyz";
        string s;
        for(int i=0;i<b;i++){
            s[i]=c[i];
        }
        int cnt=0;
        while(n--){
            cout<<s[cnt];
            cnt++;
            if(cnt==b)
                cnt=0;
        }
        cout<<endl;
    }
    return 0;
}
