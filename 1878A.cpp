#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--)
    {
        int n,k,p=0,x;
        cin>>n>>k;
        // unordered_map<int,int> a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==k){
                p=1;
            }
        }
       
        if(p==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
}
}
}