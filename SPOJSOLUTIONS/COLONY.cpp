// Problem: COLONY
// Submission ID: 26592589
// Language: 4824

#include<bits/stdc++.h>
using namespace std;
unsigned long long pow1[64];
int main()
{ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 pow1[0]=1;
 for(int i=1;i<64;i++)
    pow1[i]=(pow1[i-1]*2);
 int yr;
 long long pos;
 cin>>yr>>pos;
 pos++;
 int k=1;
 yr--;
 while(yr>=0)
 { //cout<<yr<<"\n";
     if(pos>pow1[yr])
        {
        pos-=pow1[yr];}
     else
        k*=-1;
     yr--;

 }
 if(k==1)
    cout<<"red";
 else
    cout<<"blue";
 return 0;}
