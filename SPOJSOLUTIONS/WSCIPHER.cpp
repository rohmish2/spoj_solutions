// Problem: WSCIPHER
// Submission ID: 26209834
// Language: 4636

#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  string a;
    int k1,k2,k3;
    cin>>k1>>k2>>k3;
    while(k1+k2+k3!=0)
    {cin>>a;
    vector<char>g1,g2,g3;
    for(auto i:a)
    { if(i<='i'&&i!='_')
       g1.push_back(i);
      else if(i<='r'&&i!='_')
       g2.push_back(i);
      else
       g3.push_back(i);
    }
    if(g1.size()>0)
    k1=k1%g1.size();
    if(g2.size()>0)
    k2=k2%g2.size();
    if(g3.size()>0)
    k3=k3%g3.size();
    int i1=0,i2=0,i3=0;
     if(k1>0)
      i1=g1.size()-k1;
     if(k2>0)
      i2=g2.size()-k2;
     if(k3>0)
      i3=g3.size()-k3;


    for(auto i:a)
    {
      if(i<='i'&&i!='_')
         {

          cout<<g1[i1];
          i1=(i1+1)%g1.size();
                   }
       else if(i<='r'&&i!='_')
         {
          cout<<g2[i2];
          i2=(i2+1)%g2.size();
         }
       else
       {
        cout<<g3[i3];
          i3=(i3+1)%g3.size();
       }

    }
  cout<<endl;
  cin>>k1>>k2>>k3;}

 return 0;
}
