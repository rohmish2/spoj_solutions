// Problem: FAKETSP
// Submission ID: 26173854
// Language: 4728

#include <bits/stdc++.h>
using namespace std;
double dis(pair<double,double>a1,pair<double,double>b1)
{ double q=abs(a1.first-b1.first),w=abs(a1.second-b1.second);
  return  sqrt((q*q)+(w*w));}
int main()
   { double f,s,ff,ss;
     double qq=0;    
string a;
    int cnt=0;
   while(getline(cin,a))
   {   if(a.size()==0)
        return 0;
       int i=0;
       while(a[i]!='(')
             i++;  
             i++;
       //main kaam
       string f1;
       while(a[i]!=','){f1+=a[i];i++;}
       ff= stod(f1);
      i++;
       f1.clear();
       while(a[i]!=')'){f1+=a[i];i++;}
       ss=stod(f1);
        
if(cnt>0)
         {qq+=dis({ff,ss},{f,s});
          printf("The salesman has traveled a total of %.3lf kilometers.\n",qq);   
         }
        f=ff;
        s=ss;  
      cnt++; 
   }
    return 0;
   }
