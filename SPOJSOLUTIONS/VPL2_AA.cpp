// Problem: VPL2_AA
// Submission ID: 26063245
// Language: 4836

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
for(int tt=0;tt<t;tt++)
	{
		int p0,p1,t1,p2;
		cin>>p0>>p1>>t1>>p2;
		printf("Scenario #%d: ",tt+1);
		float t2;
		if(p1==p2)
		t2=t1;
		else
		t2=t1*(log(p2)-log(p0))/(log(p1)-log(p0));
		printf("%.2f\n",t2);
	}
return 0;}