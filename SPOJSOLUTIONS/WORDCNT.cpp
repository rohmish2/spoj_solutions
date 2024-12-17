// Problem: WORDCNT
// Submission ID: 25850816
// Language: 4760

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  char s[100000];
  cin>>t;cin.getline(s,10000);

  while(t--)
  {char a[31];
   int n=0;
   vector<int>v;
   cin.getline(s,100000);
		istringstream ISS(s);
		string t;

		while (ISS >> t)
			{v.push_back(t.length());n++;}

   int ans=0;
   int cnt=1;
   for(int i=1;i<n;i++)
    { if(v[i]==v[i-1])
        {cnt++;}
      else
      {
        cnt=1;
      }
      ans=max(cnt,ans);


    }
   printf("%d\n",ans);
  }

 return 0;}
