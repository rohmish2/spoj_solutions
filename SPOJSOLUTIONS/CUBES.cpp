// Problem: CUBES
// Submission ID: 25839931
// Language: 4672

#include<bits/stdc++.h>
using namespace std;
int  main()
{ vector<long int>a;
  vector<tuple<int,int,int,int>>q;
  for(int i=0;i<=100;i++)
     a.push_back(i*i*i);
int ptr1=2,ptr2=3,ptr3=4;//always in ascending order
int p=2;
int cnt=0;
while(ptr1<=70)
{
    if(ptr3>=100)
    { p++;
      ptr1=p;
      ptr2=p+1;
      ptr3=p+2;
    }
  if(ptr2==ptr3)//reset condition
  { ptr3++;
    ptr2=p+1;
    ptr1=p;
  }
  //cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;
   if(ptr1<ptr2&&ptr2<ptr3&&ptr3<=100)
  if(a[lower_bound(a.begin(),a.end(),a[ptr1]+a[ptr2]+a[ptr3])-a.begin()]==a[ptr1]+a[ptr2]+a[ptr3])
     {  //int k=lower_bound(a.begin(),a.end(),a[ptr1]+a[ptr2]+a[ptr3])-a.begin();
         q.push_back(make_tuple(lower_bound(a.begin(),a.end(),a[ptr1]+a[ptr2]+a[ptr3])-a.begin(),ptr1,ptr2,ptr3));}
 ptr2++;
 cnt++;
}
stable_sort(q.begin(),q.end(),[](tuple<int,int,int,int>a,tuple<int,int,int,int>b){return get<0>(a)<get<0>(b);});
for(int i=0;i<q.size();i++)
    cout<<"Cube = "<<get<0>(q[i])<<", Triple = ("<<get<1>(q[i])<<","<<get<2>(q[i])<<","<<get<3>(q[i])<<")"<<endl;
return 0;}
