
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()

int minOperations(vector<int>& nums) {
      int n = nums.size();
     int flag=0;
     int ans = 0;
     int ii;
     int jj;
     int count=1;
     sort(nums.begin(),nums.end());
      for(int i = 0 ; i<n-1 ; i++){
       if(nums[i]==nums[i+1])
       {
           count++;
       }
        if(nums[i]!=nums[i+1]){
           ii=i+1;
          if(count%2==0) ans = ans+count/2;
          if(count%3==0) ans = ans+count/3;
          if(count==1) flag =1;
          count=1;
          break;

       }
       i=ii;
      }
      
    //   for(int i = 0 ; i<n ; i++)
    //   {
    //       int count=1;
    //       for(int j = i+1 ; j<n; j++)
    //       {
    //           if(nums[i]==nums[j]) count++;
    //           if(nums[i]!=nums[j]){
    //           ii=i;
    //           jj=j;
    //           break;
    //           }
    //           j=jj;
    //       }
    //       i=ii;
    //       if(count%2==0) ans = ans+count/2;
    //       if(count%3==0) ans = ans+count/3;
          
    //       if(count==1) flag =1;
    //   } 

      if(flag==1) return -1;
      else return ans; 
    }
    

       
int main()
{

vector<int> nums={2,3,3,2,2,4,2,3,4};
cout<<minOperations(nums);

 
 
return 0;
}