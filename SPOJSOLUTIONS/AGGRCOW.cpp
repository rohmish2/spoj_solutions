// Problem: AGGRCOW
// Submission ID: 25469134
// Language: 5152

#include<bits/stdc++.h>
#define scan(a) scanf("%lld",&a)
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { long long int r,c;
      scan(r);
      scan(c);
      vector<long long>ranches;
      for(long i=0;i<r;i++)
      { long long int temp;
         scan(temp);
          ranches.push_back(temp);}
    sort(ranches.begin(),ranches.end());
   long long sp=0,endp=ranches[r-1]-sp;
    bool fun(long long mid,vector<long long>&v,int cow);

    while(endp-sp>1)
    {
    long long mid=(sp+endp+1)>>1;
    //cout<<sp<<" "<<mid<<" "<<endp<<endl;
    (fun(mid,ranches,c)?sp:endp)=mid;


    }

  cout<<sp<<endl;
    }

return 0;}
bool fun(long long mid,vector<long long>&v,int cow)
{ long long c=1,lp=0;
  for(int i=1;i<v.size();i++)
    {
        if(v[i]-v[lp]>=mid)
        {
            c++;
            lp=i;
            if(c==cow)
                return true;
        }
    }
return false;}
