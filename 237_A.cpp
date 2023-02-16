#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int arr[25][60];
int main(){
    optimize();

    int n,cnt=0;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        arr[a][b]++;
        if(arr[a][b]>cnt){
            cnt=arr[a][b];
        }
    }
   cout<<cnt<<endl;
return 0;
}
