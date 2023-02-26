#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();

    long long t,x,y,a,b,n,cnt=0,cnt1=0;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        if(x>y) swap(x,y);
        cnt=x*a+y*a;
        n=y-x;
        cnt1=n*a+x*b;

        cout<<min(cnt,cnt1)<<endl;
    }

return 0;
}
