// Problem: MKJUMPS
// Submission ID: 26190469
// Language: 4816

#include<bits/stdc++.h>
using namespace std;
int cont;
void fun(int i,int j,vector<vector<bool>>&a,int cnt)
{ //cout<<i<<"  "<<j<<endl;
    int k=0;
    if(i+1<10)
    { if(j+2<10&&!a[i+1][j+2])
       {   k=1;
           a[i+1][j+2]=true;
            cnt--;
           fun(i+1,j+2,a,cnt);
            cnt++;
            a[i+1][j+2]=false;
       }
      if(j-2>=0&&!a[i+1][j-2])
       {   a[i+1][j-2]=true;
           k=1;
           cnt--;
           fun(i+1,j-2,a,cnt);
           cnt++;
            a[i+1][j-2]=false;
       }
      }
  if(i-1>=0)
    { if(j+2<10&&!a[i-1][j+2])
       {a[i-1][j+2]=true;
          k=1;
          cnt--;
          fun(i-1,j+2,a,cnt);
          cnt++;
          a[i-1][j+2]=false;
       }
      if(j-2>=0&&!a[i-1][j-2])
       {a[i-1][j-2]=true;
          k=1;
          cnt--;
          fun(i-1,j-2,a,cnt);
          cnt++;
         a[i-1][j-2]=false;
       }
    }
  if(j+1<10)
    { if(i+2<10&&!a[i+2][j+1])
        { a[i+2][j+1]=true;
            k=1;
            cnt--;
            fun(i+2,j+1,a,cnt);
            cnt++;
           a[i+2][j+1]=false;
        }
      if(i-2>=0&&!a[i-2][j+1])
       { a[i-2][j+1]=true;
           cnt--;
           k=1;
           fun(i-2,j+1,a,cnt);
           cnt++;
            a[i-2][j+1]=false;
       }

     }
  if(j-1>=0)
    { if(i+2<10&&!a[i+2][j-1])
       {a[i+2][j-1]=true;
            k=1;
            cnt--;
           fun(i+2,j-1,a,cnt);
            cnt++;
            a[i+2][j-1]=false;
       }
      if(i-2>=0&&!a[i-2][j-1])
       {a[i-2][j-1]=true;
           cnt--;
           k=1;
           fun(i-2,j-1,a,cnt);
           cnt++;
            a[i-2][j-1]=false;
       }
    }
if(k==0)
 cont=min(cont,cnt);

}
int main()
{ int s;
   scanf("%d",&s);
   int cnt=0;
   while(s)
   { vector<vector<bool>>a(10,vector<bool>(10,true));
     int ct=0;
     cnt++;
     int sj;
     for(int i=0;i<s;i++)
        {int sk,col;
        scanf("%d%d",&sk,&col);
        if(i==0)
            sj=sk;
        ct+=col;
        for(int j=0;j<col&&sk+j<10;j++)
            a[i][sk+j]=false;
        }

        a[0][sj]=true;
        ct--;
        cont=ct;
  fun( 0,sj,a,ct);
   printf("Case %d, ",cnt);
   if(cont==1)
    printf("1 square can not be reached.\n");
   else
    printf("%d squares can not be reached.\n",cont);
   //printf("%d\n",cont);
   scanf("%d",&s);}

return 0;}
