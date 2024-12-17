// Problem: CENCRY
// Submission ID: 26200788
// Language: 4644

#include<bits/stdc++.h>
using namespace std;
char vowel[5]={'a','e','i','o','u'};
char conso[21]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
int main()
{ map<char,int>cp,vp;
  vp['a']=0;
  vp['e']=1;
  vp['i']=2;
  vp['o']=3;
  vp['u']=4;
  int cnt=0;
  for(char i='a';i<='z';i++)
    if(i!='a'&&i!='e'&&i!='i'&&i!='o'&&i!='u')
     cp[i]=cnt++;
 int t;
  scanf("%d",&t);
  while(t--)
  {
      string q;
      cin>>q;
      map<char,int>counter;
     for(auto i:q)
      {
        if(i!='a'&&i!='e'&&i!='i'&&i!='o'&&i!='u')
            { //int tgt=cp[i];
              int tgt=(cp[i]%5+(counter[i]%5))%5;
               //cout<<i<<" "<<tgt<<endl;
              printf("%c",vowel[tgt]);
            }
        else
          {// int tgt=vp[i];
              int tgt=(vp[i]+((counter[i]%21)*5))%21;
              printf("%c",conso[tgt]);

          }
      counter[i]++;
      }
  printf("\n");
  }


  return 0;}
