#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m;
    string s,t;
    cin>>s;
    cin>>n;
    cin>>t;
    
    int c = 0;
    for(int i = 0 ; i<=m-n; i++){
        if(s.substr(i,n)==t) {
            c++;
        }

        cout<<s.substr(i,n)<<endl;
    }

    cout<<c<<endl;

}