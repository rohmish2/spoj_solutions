// Problem: ONP
// Submission ID: 25437677
// Language: 4656

#include <bits/stdc++.h>
using namespace std;
int main()
{ int ti;
cin>>ti;
    while(ti--)
    {string input;
    cin>>input;
    stack<char> op;
    stack<string>oper;
    map<char,int>pr;
    pr['+']=pr['-']=1;
    pr['*']=pr['/']=2;
    pr['^']=3;
    for(auto a:input)
    {   if(isalpha(a))
            oper.push(string(1,a));
        else
            { if(a!=')'&&a!='(')
                { while(!op.empty()&&op.top()!='('&&op.top()!=')'&&pr[a]<pr[op.top()])
                    {
                    string temp=oper.top()+op.top();
                    oper.pop();
                    op.pop();
                    string t=oper.top()+temp;
                    oper.pop();
                    oper.push(t);
                    }
                }
                op.push(a);}
        if(!op.empty()&&op.top()==')')//when closing bracet is encountered
        { op.pop();
            while(op.top()!='(')
            { string temp=oper.top()+op.top();
              oper.pop();
              op.pop();
              string t=oper.top()+temp;
              oper.pop();
              oper.push(t);

            }
            op.pop();
        }



    }
    cout<<oper.top()<<endl;
    }
    return 0;
}
