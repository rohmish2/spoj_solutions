// Problem: MAYA
// Submission ID: 25812320
// Language: 4688

#include<bits/stdc++.h>
using namespace std;
long int a[7]={1,20,360,7200,144000,144000*20,144000*20*20};
int main()
{ int s;
  scanf("%d",&s);
  while(s!=0)
    {
   //cin>>s;

      long ans=0;
      while(s--)
      { char q[11];
        long int k=0;
        scanf("\n%[^\n]%*c", q);
        //fgets(q,11, stdin);

         for(int i=0;i<strlen(q);i++)
         { if(q[i]=='.')
            k++;
           if(q[i]=='-')
            k+=5;
         }
              //cout<<k<<" "<<s<<" "<<a[s]<<" "<<a[s]*k<<endl;
              ans+=k*a[s];
      }
    cout<<ans<<"\n\n";
    scanf("%d",&s);

    }
return 0;}
