#include<bits/stdc++.h>
using namespace std;

int num(){
    int n,k;
    cin>>n>>k;
    int x=(k/(n-1))*n + (k%(n-1));
    if(k%(n-1)==0){
        x--;
    }
    return x;
}

int main(){
    int t;
    cin>>t;
    vector<int> vec(t);

    for(int i=0;i<t;i++){
        vec[i]=num();
    }
    for(int i=0;i<t;i++){
        cout<<vec[i]<<endl;
    }

    return 0;
}