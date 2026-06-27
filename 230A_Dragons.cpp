#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    int a=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(s>arr[i].first){
            s+=arr[i].second;
        } else {
            a=1;
            break;
        }
    }
    if(a==0){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}