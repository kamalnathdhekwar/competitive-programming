#include <bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int k;
   int count = 0;
   int arr[100] ;
    string s;
    cin >> k;
    while (k--)
    { 
        cin>>s;
        int n= stoi(s);
        arr[3]=n%10;
        if(arr[3]==0)
        {
            arr[3]=10;
        }
        n=n/10;
        arr[2]=n%10;
        if(arr[2]==0)
        {
            arr[2]=10;
        }
        n=n/10;
        arr[1]=n%10;
        if(arr[1]==0)
        {
            arr[1]=10;
        }
        n=n/10;
        arr[0]=n%10;
        if(arr[0]==0)
        {
            arr[0]=10;
        }
        cout<<(arr[0]+(abs(arr[1]-arr[0])+1)+(abs(arr[2]-arr[1])+1)+(abs(arr[3]-arr[2])+1))<<endl;
        }
}