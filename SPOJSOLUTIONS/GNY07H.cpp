// Problem: GNY07H
// Submission ID: 25826601
// Language: 4652

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

int T[50];
int h[50];
int g[50];

int main()
{

	T[1] = 1;
	T[2] = 5;
	g[1] = 1;
	g[2] = 6;
	h[1] = 2;
	h[2] = 7;

	FOR(k,3,23)
	{
		T[k] = T[k-1] + T[k-2] + g[k-2] + 2*h[k-2];
		g[k] = T[k] + g[k-2];
		h[k] = T[k] + h[k-1];
	}

	int t,count=1;
	scanf("%d", &t);
	while(t--)
	{
		int w;
		scanf("%d", &w);
		cout<<count++<<" "<<T[w]<<endl;
	}
}
