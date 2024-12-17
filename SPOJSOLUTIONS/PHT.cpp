// Problem: PHT
// Submission ID: 25979269
// Language: 4816

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t,i;
	cin>>t;
	long long k,d,s;
	int n;
	for(i=0;i<t;i++)
	{
		cin>>k;
		d=4+4*k;
		s=sqrt(d);
		n = (s-2)/2;
		cout<<"Case "<<i+1<<": "<<n<<"\n";
	}
	return 0;
}