          
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl

int main()
{
   string s;
   cin>>s;
   ll n = s.length();
   ll flag = 0;
     bool onlyVowels = true;
  for (i,0,n) {
        char ch = s[i];
        if (!(s[i]=='1' || s[i]=='2' ||s[i]=='3' ||s[i]=='4' ||s[i]=='5' ||s[i]=='6' ||s[i]=='7' ||s[i]=='8' ||s[i]=='9' || s[i]=='0' )) {
            onlyVowels = false;
            break;
        }
    }



    if (onlyVowels) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}