
           // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
int main()
{
    string s;
    long int t,n;
    cin >> t;
    while (t--)
    {
        int c=0;
        cin>>n>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+'){
                c++;
            }
            else{
                c--;
            }
        }
        cout<<abs(c)<<endl;
    }
}