#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();

    int a,b,cnt,cnt1,cnt2;
    cin>>a>>b;
    cnt = a;
     while(a>=b){
        cnt1=a/b;
        cnt += cnt1;
        cnt2=a%b;
        a=cnt1+cnt2;
     }
     cout<<cnt<<endl;

return 0;
}
