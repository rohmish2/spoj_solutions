// Problem: STPAR
// Submission ID: 25469957
// Language: 4780

#include<bits/stdc++.h>
using namespace std;
int main()
{

    while(1)
    { long s;
     cin>>s;
     if(s==0)
        return 0;
     vector<long long>q;
     long rem=0;
     for(int i=0;i<s;i++)
     { long temp;
       cin>>temp;
       q.push_back(temp);
     }
     stack<long long>st;

     for(auto i=q.begin();i<q.end()-1;i++)
     {
      while(!st.empty()&&rem+1==st.top())
              {

                    rem=st.top();
                    st.pop();

              }
 //cout<<rem<<" "<<st.size() <<endl;
      if(*i>*(i+1))
     { while(!st.empty()&&st.top()<*i)
        {
        if(rem+1==st.top())
                    {rem=st.top();
                    st.pop();}
                  else
                     goto l3;
              }
              st.push(*i);
           }
     else
        {
            if((*i)==rem+1)
                (rem=(*i));
            else
            goto l3;

        }
     }
    cout<<"yes"<<endl;
    goto l4;
 l3:cout<<"no"<<endl;
 l4:continue;
    }
return 0;}
