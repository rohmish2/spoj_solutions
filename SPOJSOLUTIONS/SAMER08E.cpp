// Problem: SAMER08E
// Submission ID: 26645890
// Language: 4736

#include<bits/stdc++.h>
using namespace std;
inline bool isleap(int year)
{return  (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0));}
int main()
{  
	#ifndef ONLINE_JUDGE
      freopen("in.txt","r",stdin);
      freopen("op.txt","w",stdout);
    #endif
  
int a[13]={1,31,28,31,30,31,30,31,31,30,31,30,31};
int n;
cin>>n;
while(n)
{ long long  int ans=0;
  int cnt=0;
 int p1,p2,p3,p4;
 cin>>p1>>p2>>p3>>p4;
 for(int i=1;i<n;i++) 
  { int c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4;
    if(c2==p2&&p3==c3)//basic case
    { if(c1==p1+1)//just check if days are consequtive
        {ans+=c4-p4;cnt++;}
    }
   else if(p3==c3&&c2==p2+1) //yrs same month cinseq
    { 
       if(p2==2)//if feb
       	 { 
           if(isleap(p3))//check if leap
           { if(p1==(29)&&c1==1)
             {ans+=(c4-p4);cnt++;}
         
           }
           else 
           { if(p1==28&&c1==1)
             {ans+=(c4-p4);cnt++;}

           }	
       	 }
       else
       { 
         if(p1==a[p2]&&c1==1)
            {ans+=(c4-p4);cnt++;}
       }
    
    }
   else if(c3==p3+1&&c2==1&&p2==12&&c1==1&&p1==a[12])
       {ans+=(c4-p4);cnt++;}

    p1=c1;p2=c2;p3=c3;p4=c4;
  }
 
 cout<<cnt<<" "<<ans<<endl;
cin>>n;}

 

 return 0;}