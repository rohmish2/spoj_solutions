// Problem: ACODE
// Submission ID: 25464128
// Language: 4468

#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        string in;
        cin>>in;
        if(in=="0")
            return 0;
        vector<unsigned long long>store;
        store.push_back(1);//0 digit
        store.push_back(1);//1 digit
        for(auto il=1;il<in.size();il++)
        {
         string a= in.substr(il-1,2);
         int i=stoi(a);
       //cout<<"i"<<i<<endl;
     int k=0;
         if(i<27&&i>=10)
         { unsigned long long num=store[store.size()-2];
             store.push_back(num);
           k=1;         
}
         if(a[1]!='0')
         {  
           if(k==1) 
         store[store.size()-1]+=store[store.size()-2];
          else
         store.push_back(store[store.size()-1]);
         }
        }
        cout<<store[store.size()-1]<<endl;
    }
    return 0;
}
