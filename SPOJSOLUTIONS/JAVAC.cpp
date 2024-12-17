// Problem: JAVAC
// Submission ID: 25516263
// Language: 4572

#include<bits/stdc++.h>
using namespace std;
int main()
{
  while(1)
  {string a;
   cin>>a;
   if(a=="")
    return 0;
    bool l=true,under=false,e=false;//l for lower case presence ans under for underscore presence
    char pr=' ';
   for(auto i:a)
   {
       if(isalpha(i)&&!islower(i))
        {l=false;
        }
       if(i=='_')
        {under=true;
         if(pr=='_')
            {
                e=true;
            }


        }
    pr=i;
    }
   string sol;
   if(isupper(a.front())||a.front()=='_'||a.back()=='_'||((!l)&&under)||e)
    { //cout<<l<<" "<<under<<" "<<e<<" ";
        cout<<"Error!\n";
    continue;}

   else if(l&&under)
   { sol+=a[0];
    for(int i=1;i<a.size();i++)
    {  if(a[i]!='_')
         { if(a[i-1]=='_')
            sol+=toupper(a[i]);
           else
            sol+=a[i];
         }
    }

   }
  else
  {
    sol+=a[0];
    for(int i=1;i<a.size();i++)
    {
       if(isupper(a[i]))
          {
              sol+='_';
              sol+=tolower(a[i]);
          }
       else
           sol+=a[i];
    }
    }
  cout<<sol<<endl;

  }

return 0;
}
