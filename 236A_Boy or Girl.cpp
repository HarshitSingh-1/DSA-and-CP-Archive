#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    int k=s1.size();
    for(int i=1;i<s1.size();i++){
        for(int j=0;j<i;j++){
            if(s1[i]==s1[j]){
                k--;
                break;
            }
        }
    }
    if(k%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}