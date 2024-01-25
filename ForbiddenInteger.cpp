// ***  ... जय श्री राम ...  ***//
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
//#define for(i,a,b)    for(ll i = a ; i<b ; i++)
//#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<ll,ll>
#define umps          map<ll,ll>
#define nline         cout<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n, k, x;
        cin >> n >> k >> x;

        if (x != 1)
        {
            cout << "YES\n";
            cout << n << endl;

            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << endl;
        }
        else
        {
            if (k >= 2 and n % 2 == 0)
            {
                cout << "YES\n";
                cout << n / 2 << endl;

                for (int i = 0; i < n / 2; i++)
                    cout << 2 << " ";
                cout << endl;
            }
            else if (k >= 3)
            {
                cout << "YES\n";
                cout << n / 2 << endl << 3 << " ";
                for (int i = 1; i < n / 2; i++)
                    cout << 2 << " ";
                cout << endl;
            }
            else
                cout << "NO\n";
        }
    }
    
    return 0;
}
