#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
 ll t;
 cin>>t;
while(t--){
    char arr[8][8];
    for(int i = 0 ; i<8 ; i++)
    {
        for(int j = 0 ; j<8 ; j++)
        {
            cin>>arr[i][j];
        }
    }

  int flag =0;
    for(int i = 0 ; i<8 ; i++)
    {   
        int rc=0;
        for(int j = 0 ; j<8 ; j++)
        {
            if(arr[i][j]=='R') rc++;
        }
        if(rc==8) flag = 1;

    }
    if(flag==1) cout<<'R'<<endl;
    else cout<<'B'<<endl;


} 
       
 
return 0;
}