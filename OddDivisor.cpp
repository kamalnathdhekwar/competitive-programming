#include<bits/stdc++.h>
using namespace std;
#define ll long long

// bool ans(int n)
// {
//     if(n==0) return true;
//     if((n/2)%2==1) return false;
//     return ans(n/2);
// }

int main()
{
 ll t;
 cin>>t;
 
//  bool key = ans(t);
//  cout<<key<<endl;

while(t--){
    ll n;
    cin>>n;
     while(true){
    int rem=n%2;
    if(rem==1 ){
        cout<<"YES"<<endl;
        break;
    }
    n=n/2;
    if(n==0 || n==1) {
        cout<<"NO"<<endl;
        break;
    }
 }

}
 
return 0;
}