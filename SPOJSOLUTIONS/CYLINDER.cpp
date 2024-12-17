// Problem: CYLINDER
// Submission ID: 26196014
// Language: 4780

#include<bits/stdc++.h>

using namespace std;
using namespace std;

int main()
{
	double w, h, r, res1, res2, pi = acos(-1.0), eps = 1e-9;
	while(scanf("%lf %lf",&w,&h)==2 && (w + h)>0.0)
	{
		r = min(w/2.0, h/(2.0*pi+2.0));
		res1 = pi*r*r*w;
		r = w / (2.0*pi);
		res2 = pi*r*r*(h-2.0*r);
		printf("%.3f\n", max(res1, res2) + eps);
	}
	return 0;
}