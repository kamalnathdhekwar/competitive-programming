#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans = 0;
    while(t--)
    {
        int arr[3];
        int count = 0;
        for(int i = 0 ; i<3 ; i++)
        {
            cin>>arr[i];
            if(arr[i]==1) count++;
        }

        if(count>=2) ans++;
    }
    cout<<ans<<endl;
}
