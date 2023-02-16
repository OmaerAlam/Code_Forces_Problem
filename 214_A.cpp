#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=0;i*i<=n && i<=m;i++){
        int j=n-i*i;
        if(i+j*j==m){
            cnt += 1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
