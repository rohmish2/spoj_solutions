// Problem: ANARC08B
// Submission ID: 25873185
// Language: 4692

#include<bits/stdc++.h>
using namespace std;
int main()
{map<int,string>mp;
 mp[0]="063";
 mp[1]="010";
 mp[2]="093";
 mp[3]="079";
 mp[4]="106";
 mp[5]="103";
 mp[6]="119";
 mp[7]="011";
 mp[8]="127";
 mp[9]="107";
 map<string,int>mp2;
 for(int i=0;i<=9;i++)
 mp2[mp[i]]=i;
 string c;
 cin>>c;
 while(c!="BYE")
 { int i;
   long n1=0,n2=0;
 for( i=0;c[i]!='+';i+=3)
     { n1=n1*10+mp2[c.substr(i,3)];}
i++;
 for(;i<c.size()-1;i+=3)
 {n2=n2*10+mp2[c.substr(i,3)];}

 long n3=n1+n2;
 string ans;
 while(n3>0)
 { int c=n3%10;
   ans=mp[c]+ans;
   n3/=10;
 }

 cout<<c+ans<<endl;
 cin>>c;
 }



 return 0;
}
