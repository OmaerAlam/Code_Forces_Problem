#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int t,d[12],k=0,sum=0,m=0;
    cin>>t;
    for(int i=0;i<12;i++){
        cin>>d[i];
        k+=d[i];
    }
    if(k>=t){
        sort(d,d+sizeof(d)/sizeof(d[0]),greater<int>());
        while(sum<t){
            sum+=d[m];
            m+=1;
        }
        cout<<m<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}
