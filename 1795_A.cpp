#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int arr[10][20];
int main(){
    optimize();
 int t;
 cin>>t;
 while (t--){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    reverse(b.begin(),b.end());
    a=a+b;
    int cnt=0,temp=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==a[i+1])
            cnt++;
            if(cnt>1){
                cout<<"NO"<<endl;
                temp=1;
                break;
            }
}
if(temp==0) cout<<"YES"<<endl;
 }

return 0;
}
