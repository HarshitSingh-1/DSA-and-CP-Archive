#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>'4'){
            int n=s[i]-'0';
            int new_n=9-n;
            s[i]=new_n+'0';
        }
    }
    if(s[0]=='0'){
        s[0]='9';
    }
    cout<<s;
    return 0;
}