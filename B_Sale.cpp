#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n , k;
    cin>>n>>k;
    int arr[100];
    int sum =0;
    for(int i=0; i<n ; i++ )
    {
        cin>>arr[i];
        
    }
    sort(arr,arr+n);
     for(int i=0; i<k ; i++ )
    {
        if(arr[i]<0) 
        { 
            sum = sum+(-(arr[i]));
        }
    
}
   cout<<sum<<endl;
}