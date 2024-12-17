// Problem: NITT2
// Submission ID: 26055979
// Language: 4640

#include <bits/stdc++.h>

using namespace std;
bool divby7(string a)
{ int ar[6]={1,3,2,6,4,5};
  //int ptr=0;
  int num=0;
  for(int i=a.size()-1,ptr=0;i>=0;i--,ptr=(ptr+1)%6)
      num+=(a[i]-'0')*ar[ptr];
 if(num%7==0)
 return true;
 return false;

}
bool divby9(string a)
{ int sum=0;
 for(int i=0;i<a.size();i++)
    sum+=(a[i]-'0');
 if(sum%9==0)
    return true;
    return false;
}
bool divby3(string a)
{int sum=0;
 for(int i=0;i<a.size();i++)
    sum+=(a[i]-'0');
 if(sum%3==0)
    return true;
    return false;

}
bool divby4(string a)
{ int num;
    if(a.size()==1)
  { num=a[0]-'0';
    if(num%4==0)
         return true;
         return false;}
  num=(a[a.size()-2]-'0')*10 + (a[a.size()-1]-'0');
  //cout<<"num="<<num<<endl;
  if(num%4==0)
         return true;
         return false;
}
bool divby25(string a)
{ int num;
    if(a.size()==1)
  { num=a[0]-'0';
    if(num%25==0)
         return true;
         return false;}
  num=((a[a.size()-2]-'0')*10 + (a[a.size()-1]-'0'));
  if(num%25==0)
         return true;
         return false;
}

int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   { string a;
     cin>>a;
     //cout<<divby4(a)<<" "<<divby7(a)<<" "<<divby9(a)<<" \n";
     if(divby4(a)&&divby7(a)&&divby9(a))
        cout<<"Yes ";
     else
        cout<<"No ";
     if(divby3(a)&&divby25(a)&&divby7(a))
        cout<<"Yes\n";
     else
        cout<<"No\n";
   }
    return 0;
}
