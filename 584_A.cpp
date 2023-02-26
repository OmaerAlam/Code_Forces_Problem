#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();

    long int n,t;
    while(cin>>n>>t){
        if(n==1 && t==10) cout<<"-1\n";
        else if(n>=2 && t==10){
            for(int i=1;i<n;i++){
                cout<<"1";
            }
            cout<<"0\n";
        }
        else{
            for(int i=0;i<n;i++){
                cout<<t;
            }
            cout<<endl;
        }
    }

return 0;
}
