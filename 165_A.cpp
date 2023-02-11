#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
     int arr[200][2];
     int n,cnt=0;
     cin>>n;
     for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
     }
     for(int i=0;i<n;i++){
        int ri=0,le=0,up=0,lo=0;
        int x=arr[i][0],y=arr[i][1];
        for(int j=0;j<n;j++){
            if(arr[j][0]>x && arr[j][1]==y) ri++;
            if(arr[j][0]<x && arr[j][1]==y) le++;
            if(arr[j][0]==x && arr[j][1]<y) lo++;
            if(arr[j][0]==x && arr[j][1]>y) up++;
            if(ri>0 && le>0 && lo>0 && up>0){
               if((ri+le+lo+up)>=4){
                cnt++;
                break;
               }
            }
        }
     }
     cout<<cnt<<endl;
return 0;
}
