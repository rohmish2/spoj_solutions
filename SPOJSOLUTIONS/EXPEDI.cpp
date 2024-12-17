// Problem: EXPEDI
// Submission ID: 26060688
// Language: 4680

#include<bits/stdc++.h>
using namespace std;
struct stops{
int pos,fuel;
};
struct cmp{
 bool operator()(stops a,stops b)
  {
      return a.fuel<b.fuel;
  }
};
int main()
{ int t;
 scanf("%d",&t);
 while(t--)
  { int s;
   scanf("%d",&s);
   s++;
   vector<stops>a(s);
   for(int i=0;i<s;i++)
    scanf("%d%d",&a[i].pos,&a[i].fuel);
   sort(a.begin(),a.end(),[](stops a1,stops a2){return a1.pos>a2.pos;});
   int dis=a[0].pos;
   for(int i=0;i<s;i++)
    a[i].pos=dis-a[i].pos;
   //for(int i=0;i<s;i++)
   //cout<<a[i].pos<<" "<<a[i].fuel<<endl;
   int i=1;
   priority_queue<stops,vector<stops>,cmp>pr;
   while(a[i].pos<=a[0].fuel)
            {pr.push(a[i]);
            i++;}
   //i--;
   int cur=a[0].fuel;
   int ans=0;
   while(!pr.empty()&&cur<dis)
     { stops maxi=pr.top();
       pr.pop();
       ans++;
       cur+=maxi.fuel;
       //cout<<"cur"<<cur<<endl;
       while(i<s&&a[i].pos<=cur)
            pr.push(a[i++]);


     }
     if(cur>=dis)
printf("%d\n",ans);
     else
printf("-1\n");
  }
return 0;}
