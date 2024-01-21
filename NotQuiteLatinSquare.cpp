#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    
    int key = 0;
    char ans;

    char str[3];
    for(int i = 0 ; i<3 ; i++)
    {
        cin>>str[i];
    }
     char str1[3];
    for(int i = 0 ; i<3 ; i++)
    {
        cin>>str1[i];
    }
     char str2[3];
    for(int i = 0 ; i<3 ; i++)
    {
        cin>>str2[i];
    }

     sort(str,str+3); 
     sort(str1,str1+3);
     sort(str2,str2+3);
    if(str[0]=='?') key=1;
    else if(str1[0]=='?') key =2;
    else key = 3;

   if(key==1)
   {
            if(  (str[1]=='A' && str[2]=='B') ) {
                ans = 'C';
               
            }
            else if( (str[1]=='B' && str[2]=='C')) {
                ans = 'A';
                
            }

            else ans = 'B';
   }
   else if(key==2){
     if( str1[1]=='A' && str1[2]=='B') {
                ans = 'C';
               
            }
            else if( str1[1]=='B' && str1[2]=='C') {
                ans = 'A';
                
            }

            else ans = 'B';
   }
   else {
     if(  str2[1]=='A' && str2[2]=='B') {
                ans = 'C';
               
            }
            else if(  (str2[1]=='B' && str2[2]=='C')) {
                ans = 'A';
                
            }

            else ans = 'B';
   }

    cout<<ans<<endl;
   

//     for(int i = 0 ; i<3 ; i++)
//     {
//         for(int j = 0 ; j<3 ; j++)
//         {
//             cin>>mat[i][j];
//             if(mat[i][j]=='?') key=j;

//         }
//     }
//      for(int i = 0 ; i<3 ; i++)
//     {
//         for(int j = 0 ; j<3 ; j++)
//         {
//             if(key==0 ){

            
//             if(  (key+1=='A' && key+2=='B') || (key+1=='B' && key+2=='A')) {
//                 ans = 'C';
//                 break;
//             }
//               if(  (key+1=='A' && key+2=='C') || (key+1=='C' && key+2=='A')) {
//                 ans = 'B';
//                 break;
//             }
//               if( (key+1=='C' && key+2=='B') || (key+1=='B' && key+2=='C')) {
//                 ans = 'A';
//                 break;
//             }
//             }

//             else if(key==1){
//               if((j=='A' && key+2=='B') || (key=='B' && key+2=='A')) {
//                 ans = 'C';
//                 break;
//             }
//               if((j=='A' && j+2=='C') || (j=='C' && j+2=='A')) {
//                 ans = 'B';
//                 break;
//             }
//               if( (j=='C' && j+2=='B') || (j=='B' && j+2=='C')) {
//                 ans = 'A';
//                 break;
//             }
//             }

//             //
           
//    //

//             else {
//                 if((j=='A' && j+1=='B') || (j=='B' && j+1=='A')) {
//                 ans = 'C';
//                 break;
//             }
//               if((j=='A' && j+1=='C') || (j=='C' && j+1=='A')) {
//                 ans = 'B';
//                 break;
//             }
//               if((j=='C' && j+1=='B') || (j=='B' && j+1=='C')) {
//                 ans = 'A';
//                 break;
//             }
//             }

//         }
//     }
   
 }
return 0;
}