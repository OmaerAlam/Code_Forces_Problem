#include<bits/stdc++.h>
using namespace std;
int main()
{
    int omaer,nasim,sohan,google[200],tasla=0;
    cin>>omaer>>nasim;
    for(int i=0;i<nasim;i++){
        cin>>google[i];
    }
    cin>>sohan;
    for(int i=nasim;i<nasim+sohan;i++){
        cin>>google[i];
    }
    sort(google,google+(nasim+sohan));
    for(int i=0;i<nasim+sohan;i++){
        if(google[i] != google[i+1]){
            tasla++;
        }
    }
    if(omaer == (tasla))cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
