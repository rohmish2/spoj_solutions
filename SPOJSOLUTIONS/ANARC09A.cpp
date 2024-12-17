// Problem: ANARC09A
// Submission ID: 25483171
// Language: 4600

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n=0;
    while(1)
    { n++;
        string a;
      int k=0;
      stack<char>st;
     
 cin>>a;
 if(a[0]=='-')
        return 0;
     
      for(auto i:a)
      {
        if(i=='{')
            st.push(i);
        else
        { if(!st.empty())
           st.pop();
          else
          { k++;
            st.push('{');
          }
        }
      }
      cout<<n<<". "<<k+(st.size()/2)<<endl;

    }
return 0;}
