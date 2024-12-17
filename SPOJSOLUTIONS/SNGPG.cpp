// Problem: SNGPG
// Submission ID: 26151317
// Language: 4632

#include <iostream>

using namespace std;

int main()
{
    int t;
     cin>>t;
     while(t--)
     { int a,b;
      cin>>a>>b;
       if(b<a)
         swap(a,b);
       if(a==0||a==1||a==2||a==3)
        {  if(a==0)
            { if(b>3)
              cout<<4<<endl;
               else
              cout<<b+1<<endl;
            }
           else if(a==1)
            { if(b>3)
              cout<<3<<endl;
               else
              cout<<b;
            }
           else if(a==2)
            { if(b>3)
              cout<<2<<endl;
              else
              cout<<b-1<<endl;
            }
            else
            {//if(b>3)
              cout<<1<<endl;

            }
       }
        else
            cout<<0<<endl;
     }
    return 0;
}
