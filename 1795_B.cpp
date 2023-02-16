#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        int cnt=0,cnt1=0;
        for (int i=0;i<n;i++){
            long long a,b;
            cin>>a>>b;
            if(a==k) cnt++;
            if(b==k) cnt1++;
        }
        if(cnt>0 && cnt1>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

return 0;
}
