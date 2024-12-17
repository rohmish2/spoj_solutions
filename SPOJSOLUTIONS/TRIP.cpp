// Problem: TRIP
// Submission ID: 26050608
// Language: 9292

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

int dp[85][85];
set<string> strings[85][85];

string a, b;
map<string,bool> processed[85][85];

void findseq(int i, int j,set<string>& sequences,string word)
{
	if(processed[i][j].find(word)!=processed[i][j].end())
		return;
	if(i==0||j==0)
	{
		sequences.insert(word);
	}
	else if(a[i-1]==b[j-1])
	{
		word = a[i-1] + word;
		findseq(i-1,j-1,sequences,word);
	}
	else if(dp[i][j-1]>dp[i-1][j])
	{
		findseq(i,j-1,sequences,word);
	}
	else if(dp[i-1][j]>dp[i][j-1])
	{
		findseq(i-1,j,sequences,word);
	}
	else
	{
		findseq(i,j-1,sequences,word);
		findseq(i-1,j,sequences,word);
	}
	processed[i][j][word] = true;
}

int main()
{
	int t;
	scanf("%d", &t);
	set<string> sequences;
	while(t--)
	{
		cin>>a>>b;
		FOR(i,0,85)
		{
			FOR(j,0,85)
			{
				dp[i][j] = 0;
				strings[i][j].clear();
			}
		}
		FOR(i,1,a.size()+1)
		{
			FOR(j,1,b.size()+1)
			{
				if(a[i-1]==b[j-1]){dp[i][j] = 1+ dp[i-1][j-1];}
				else
				{
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		sequences.clear();
  		findseq(a.size(),b.size(),sequences,"");

		for(set<string>::iterator k=sequences.begin();k!=sequences.end();++k)
		{
			cout<<*k<<endl;
		}
		cout<<endl;
	}
}