// Problem: BROKEN
// Submission ID: 26080741
// Language: 6340

#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{    int s;
     scanf("%d",&s);
     while(s!=0)
        { string aq;
            std::getline(std::cin, aq);
            string st;
        std::getline(std::cin, st);
          //cin>>st;
          int total=0;
          memset(a,0,sizeof(a));
          int pt1=0,pt2=0;

          a[st[pt2]-' ']++;
          int lar=1;
          int cur=1;
          int uniq=1;
          while(pt2>=pt1)
          { if(uniq<=s)
              { lar=max(lar,cur);

                  if(pt2<st.size()-1)
                  { pt2++;
                    a[st[pt2]-' ']++;
                    if(a[st[pt2]-' ']==1)
                     {                     uniq++;}

                  cur++;

                  }
                else
                   break;
              }
            else
           { a[st[pt1]-' ']--;

             if(a[st[pt1]-' ']==0)
                uniq--;

             cur--;
           pt1++;

           }


          }
          printf("%d\n",lar);
          scanf("%d",&s);}
return 0;}
