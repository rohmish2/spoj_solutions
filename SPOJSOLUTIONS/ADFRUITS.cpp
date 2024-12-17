// Problem: ADFRUITS
// Submission ID: 25880696
// Language: 4656

#include<bits/stdc++.h>
using namespace std;

string printinglcs(string a,string b)
{ vector<vector<int>>lcs(a.size()+1,vector<int>(b.size()+1,0));

 for(int i=1;i<=a.size();i++)
    for(int j=1;j<=b.size();j++)
    { if(a[i-1]==b[j-1])
         lcs[i][j]=lcs[i-1][j-1]+1;
      else
        lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
    }
 int i=a.size(),j=b.size();
 string qa=a;
 string s;
 int q=b.size();
 while(i>0&&j>0)
 { if(a[i-1]==b[j-1])
     {s=b[j-1]+s;
      if(j!=q)
       {qa=qa.substr(0,i)+b.substr(j,q-j)+qa.substr(i,qa.size()-i);}
     q=j-1;
     i--;
     j--;
     }
   else
   { if(lcs[i][j-1]>lcs[i-1][j])
     j--;
     else
     i--;
   }
 }
//cout<<s<<"  "<<qa<<endl;
 if(q!=0)
   qa=b.substr(0,q)+qa;

return qa;
}
int main()
{
  string a,b;
   while(cin>>a>>b)
   { cout<<printinglcs(a,b)<<endl;

   }
return 0;}
