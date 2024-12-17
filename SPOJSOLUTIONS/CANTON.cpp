// Problem: CANTON
// Submission ID: 25475087
// Language: 4816

#include <bits/stdc++.h>

using namespace std;

int main()
{ vector<long long>num,den;
    num.push_back(0);
    den.push_back(0);

    long long mul=1;
    while(num[num.size()-1]<=10000007)
         {   long long tp=(4*(mul++))-3;
             //cout<<tp<<endl;
             num.push_back(num.back()+tp);
         }
         mul=1;
    while(den[den.size()-1]<=10000007)
         {   long long tp=(4*(mul++))-1;

             den.push_back(den.back()+tp);
         }
     int binary(long long key,vector<long long>v);
     int construct(int index,int num,int what);
     int t;
     cin>>t;
     while(t--)
     { long long n;
         cin>>n;
 //cout<<"to send"<<binary(n,num);
     cout<<"TERM "<<n<<" IS "<<construct(binary(n,num),(n-num[binary(n,num)-1]),0)<<"/"<<construct(binary(n,den),(n-den[binary(n,den)-1]),1)<<endl;
     }

    return 0;
}
int binary(long long key,vector<long long>v)
{ int h=v.size()-1,l=0;
  int ans;
  while(h-l>1)
     {
         int  mid=(h+l)>>1;
     //  cout<<h<<" "<<l<<" "<<mid<<endl;
       if(v[mid]==key)
            return mid;
       else if(v[mid]>key)
       {  h=mid;
          ans=mid;
       }
       else
        l=mid;
     }

return ans;
}
int construct(int n,int num,int what)
{   //cout<<"lavda"<<num<<" "<<n<<"sex ";
    if(what==0)//num
    {
    int t=4*n-3;
    //t=(t+1)/2;
    //cout<<(t+1)/2<<endl;
    if(num<=(t+1)/2)
        return num;
    else
        return (2*(t+1)/2)-num;
    }
    else
    { int t=4*n-1;


     if(num<=(t+1)/2)
        return num;
    else
        return (2*(t+1)/2)-num;

    }

}
