// Problem: CPCRC1C
// Submission ID: 25899870
// Language: 4696

#include<bits/stdc++.h>
using namespace std;
long long a[11][10];
long long int sum[10]={45,0,1,3,6,10,15,21,28,36};
long long p[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
long long cnt(string b)
{ if(b=="0")
  return 0;
    int k=b.size();
  int c=0;
  long long t=0,add=0;
  while(k!=0)
  { t+=a[k][b[c]-'0'];
    t+=add*(b[c]-'0')*p[k-1];

    add+=b[c]-'0';
    k--;
    c++;
  }
return t;
}

int main()
{//long long int x;
       for(int i=1;i<=10;i++)
          for(int j=1;j<=9;j++)
             { if(i==1)
                 a[i][j]=sum[j]+j;
                 else
                 { long long mul=j*p[i-2],m2=p[i-1];

                     a[i][j]=(sum[j]*(m2))+((i-1)*45*mul)+j;}}


string a1,b1;
cin>>a1>>b1;
while(a1!="-1"&&b1!="-1")
{

 long long int k=0;
 for(auto i:a1)
    k+=i-'0';
 cout<<cnt(b1)-cnt(a1)+k<<endl;
cin>>a1>>b1;

}
return 0;}
