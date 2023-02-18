#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
     int n,m,cnt=0;
     cin>>n>>m;
     if(n==m) cout<<0<<endl;
     else if(m%n != 0) cout<<-1<<endl;
     else{
        int t=m/n;
        while(t%2==0){
            t/=2;
            cnt++;
        }
        while(t%3==0){
            t/=3;
            cnt++;
        }
        if(t != 1) cnt=-1;
        cout<<cnt<<endl;
     }
return 0;
}
