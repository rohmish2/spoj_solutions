// Problem: GUESSTHE
// Submission ID: 25860007
// Language: 4696

#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
  if(b==0)
    return a;
  return gcd(b,a%b);
}
int main()
{  vector<vector<int>>a(21);
    a[20]={1,2,4,5,10};
    a[19]={1};
    a[18]={1,2,9,3,6};
    a[17]={1};
    a[16]={1,2,4,8};
    a[15]={1,3,5};
    a[14]={1,2,7};
    a[13]={1};
    a[12]={1,2,6,3,4};
    a[11]={1};
    a[10]={1,2,5};
    a[9]={1,3};
    a[8]={1,2,4};
    a[7]={1};
    a[6]={1,2,3};
    a[5]={1};
    a[4]={1,2};
    a[3]={1};
    a[2]={1};
    a[1]={1};
    string b;
    cin>>b;
    while(b!="*")
    { long long ans=1;
      long long key=0;
      for(int i=0;i<b.size()&&key==0;i++)
      {  if(b[i]=='Y')
         {for(auto j:a[i+1])
           { if(b[j-1]!='Y')
               {
                key=1;
                break;
               }
           }


         //cout<<ans<<" "<<i+1<<" "<<gcd(ans,i+1)<<"    "<<(ans*(i+1))/gcd(ans,i+1)<<endl;
         ans=(ans*(i+1))/gcd(ans,i+1);
         }
         }
      for(int i=0;i<b.size()&&key==0;i++)
      { if(b[i]=='N'&&ans%(i+1)==0)
        {key=1;
        break;}

      }
     if(key==1)
        cout<<-1<<endl;
     else
       cout<<ans<<endl;
     cin>>b;
     }
 return 0;}
