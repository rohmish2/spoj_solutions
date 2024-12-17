// Problem: BOMARBLE
// Submission ID: 25631641
// Language: 4564

#include <iostream>

using namespace std;
 long long a[1000];
int main()
{  a[0]=5;
    for(int i=1,j=3,k=1;i<=999;i++,j++,k++)
      {
        a[i]=a[i-1]+(j*2)+k;
        //cout<<a[i];
      }
      while(1)
      { int k;
        cin>>k;
        if(k==0)
            return 0;
        cout<<a[k-1]<<endl;

      }
    return 0;
}
