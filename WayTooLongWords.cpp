#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string str;
        cin>>str;
        int n = str.length();
        if(n<=10) cout<<str<<endl;
        else {
         int count = 0;
        for(int i = 0 ; i<n-1 ;i++)
        {
            count++;
        }
        cout<<str[0]<<count-1<<str[n-1]<<endl;
        } 

    }
}