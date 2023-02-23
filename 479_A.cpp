#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int a,b,c,cnt;
    while(cin>>a>>b>>c){
       cnt=a+b+c;
    cnt=max(cnt,a+(b+c));
    cnt=max(cnt,a*(b+c));
    cnt=max(cnt,a*b*c);
    cnt=max(cnt,(a+b)*c);
    cnt=max(cnt,(a*b)+c);
    cout<<cnt<<endl;
    }
return 0;
}
