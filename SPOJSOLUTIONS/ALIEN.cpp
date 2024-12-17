// Problem: ALIEN
// Submission ID: 25608440
// Language: 4680

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 { long long int p1=0,p2=0;
   long long limit,s;
   cin>>s>>limit;
   vector<long long>arr(s);
   for(int i=0;i<s;i++)
        cin>>arr[i];
  long  long maxi=arr[0],n=1,ans=999999999999;

  while(p1<=p2&&p2<s)
  { //cout<<p1<<" "<<p2<<" "<<maxi<<endl;

      if(maxi<=limit)
      {if(p2-p1+1>n)
         {n=p2-p1+1;
          ans=maxi;
          }
       else if(p2-p1+1==n)
          ans=min(ans,maxi);

        p2++;
        maxi+=arr[p2];
        //n++;
      }
      else
      { maxi-=arr[p1];
        p1++;
       if(p1>p2)
        {p2=p1;
        maxi=arr[p1];}
      }
}

cout<<ans<<" "<<n<<endl;
 }
return 0;
}
