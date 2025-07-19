#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n ;
     vector<int> v(n);

     for(int i = 0 ; i<n ; i++){
        cin>>v[i];
     }

     int sum = v[0] + v[1];
     int t = 0;
     t = sum;
     for(int i = 2 ; i<n ; i++){
        sum+=v[i];
        t+=sum;
     }

    cout<<t<<endl;

}