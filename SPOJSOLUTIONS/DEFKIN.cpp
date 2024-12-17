// Problem: DEFKIN
// Submission ID: 25981584
// Language: 4684

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
scanf("%d",&t);
while(t--)
{ int h,n,to;
  scanf("%d %d %d",&h,&n,&to);

vector<int>row(h+1,0),col(n+1,0);
  while(to--)
  { //cout<<to<<endl;
      int a,b;
    scanf("%d%d",&a,&b);
    row[a]=col[b]=1;
  }
  int a1=0,a2=0;
  int tmp=0;
  for(int i=1;i<row.size();i++)
  {
      if(row[i]==0)
      tmp++;
    else
      {
      tmp=0;}
a1=max(tmp,a1);
  }
  tmp=0;
  for(int i=1;i<col.size();i++)
  { if(col[i]==0)
      tmp++;
    else
      {
      tmp=0;}
      a2=max(tmp,a2);
  //cout<<"row"<<tmp<<"  ";
  }
printf("%d\n",a1*a2);
}

return 0;}
