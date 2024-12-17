// Problem: CODCHESS
// Submission ID: 26077401
// Language: 4752

#include<iostream>
using namespace std;
int main()
{
    long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
    }
    return 0;
}