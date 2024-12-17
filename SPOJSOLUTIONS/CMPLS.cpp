// Problem: CMPLS
// Submission ID: 25453586
// Language: 4560

#include<bits/stdc++.h>
#define scan(a) scanf("%lld",&a)
#define range(q,a,b) for(int q=a;q<b;q++)
using namespace std;
int main()
{ long long  t;
  scan(t);
  while(t--)
  { long long s,c;
  scan(s);
  scan(c);
  vector<long long>a;
  vector<vector<long long>>b;
  range(i,0,s)
  { long long t;
    cin>>t;
  a.push_back(t);}
  int i;
  b.push_back(a);
  for( i=0;i<s-1;i++)
  { vector<long long>temp;
     for(int j=1;j<s-i;j++)
     {temp.push_back(b[b.size()-1][j]-b[b.size()-1][j-1]);}
    b.push_back(temp);
    int key=0;
   for(int k=1;k<temp.size();k++)
    if(temp[k]!=temp[k-1])
        {key=1;
        break;}
     if(key==0)
            break;
  }
  vector<long long>table;
  for(auto i:b)
    {table.push_back(i[i.size()-1]);}
  vector<long long>ans;
  range(i,0,c)
  { long long ta=0;
    range(j,0,table.size())
      {ta+=table[j];}
      ans.push_back(ta);
      long long prevint=table[0];
      table[0]=ta;
     range(j,1,table.size()-1)
      { long long sex=table[j];
       table[j]=table[j-1]-prevint;
       prevint=sex;
      }


  }
  for(auto i:ans)
    cout<<i<<" ";
  cout<<endl;
  }

 return 0;
}
