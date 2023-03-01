#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int main(){
    optimize();
    int t,n,cnt[5]={0};
    cin>>t;
    while(t--){
       cin>>n;    // 1 2 4 3 3
       cnt[n]+=1;
    }
    int tl=cnt[4]+cnt[3]+cnt[2]/2;// 3
    cnt[1]-=cnt[3];
    if(cnt[2]%2==1){
        tl+=1;
        //cnt[1]-=2;
    }// 4
    if(cnt[1]>0){
        tl+=(cnt[1]+3)/4;
    }
    cout<<tl<<endl;//4
    return 0;
}
