#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n][7];
    int sol[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        sort(arr[i],arr[i]+7);
    }
    for(int i=0;i<n;i++){
        sol[i]=-arr[i][0]-arr[i][1]-arr[i][2]-arr[i][3]-arr[i][4]-arr[i][5]+arr[i][6];
    }
    for(int i=0;i<n;i++){
        cout<<sol[i]<<endl;
    }
    return 0;
}