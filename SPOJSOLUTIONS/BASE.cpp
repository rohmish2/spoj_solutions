// Problem: BASE
// Submission ID: 26191031
// Language: 4596

#include<bits/stdc++.h>
using namespace std;
char a2[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int main()
{ string a;
  map<char,int>a1;
  a1['A']=10;
  a1['B']=11;
  a1['C']=12;
  a1['D']=13;
  a1['E']=14;
  a1['F']=15;
  for(char i='0';i<='9';i++)
    a1[i]=i-'0';

 int b1,b2;
    while(cin>>a>>b1>>b2)
    { long long num=0,mul=1;

      reverse(a.begin(),a.end());
      for(int i=0;i<a.size();i++)
        {
            num+=a1[a[i]]*mul;
            mul*=b1;
        }
     //cout<<num;
     if(num==0)
        {cout<<"      0\n";
        continue;}
     string ans;
      while(num!=0)
        { ans=a2[num%b2]+ans;
          num/=b2;
        }
     //cout<<ans<<endl;
      if(ans.size()>7)
        cout<<"  ERROR\n";
      else
      { for(int i=0;i<7-ans.size();i++)
          cout<<" ";
          cout<<ans<<"\n";
      }



     }


return 0;}
