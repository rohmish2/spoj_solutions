// Problem: TOHU2
// Submission ID: 26641310
// Language: 4836

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("op.txt","w",stdout);
	#endif 
    int t;
    cin>>t;
    while(t--)
    {char ky='#';
     bool ans=true;
       for(int i=1;i<100;i++)
       {  int k;
       	  char q;
       	  cin>>k>>q;
          if(i==9)
          	{ky=q;
            continue;}          
          if(i%9==0&&i<90)
            if(ky!=q)
             {ans=false;} 
         
       }
       if(ans)
       	cout<<"YES\n";
       else 
       	cout<<"NO\n";
    }
	return 0;}