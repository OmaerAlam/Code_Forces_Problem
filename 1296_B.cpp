#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int main(){
    optimize();
    int t,s,cnt,d,k;
    cin>>t;
    while(t--){
        cin>>s;//1 10 19 9876 12345 1000000000
        cnt=0;
        while(1){
            d=(s/10)*10;
            cnt+=d;
            k=s-d;
            s=(s/10)+k;
            if(s<10){
                cnt+=s;
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
