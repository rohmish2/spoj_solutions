// Problem: IITKWPCA
// Submission ID: 26082603
// Language: 4788

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  string b;
  getline(cin,b);
  while(t--)
   { string a;
     getline(cin,a);
      set<string>ss;
      string cur;
      for(int i=0;i<a.size();i++)
       { if(((a[i]==' '))&&cur.size()>0)
            {ss.insert(cur);
           //cout<<"s"<<cur<<endl;    
        cur.clear();}
         else
            { if(a[i]!=' ')
            cur+=a[i];}
       }
       if(cur.size()>0)
          ss.insert(cur);
   
    
       printf("%ld\n",ss.size());
  }

return 0;}
