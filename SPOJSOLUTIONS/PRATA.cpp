// Problem: PRATA
// Submission ID: 26046371
// Language: 4816

#include<bits/stdc++.h>
using namespace std;
long long int visit[10];
long long int freq[10];
long long int t[10];//t is for time
int main()
{
    long long int i,no_of_parata,no_of_cook,rank_of_cook,parata_cnt,top,ans,test;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld%lld",&no_of_parata,&no_of_cook);
        for(i=0; i<=9; i++)
        {
            visit[i]=1;
            freq[i]=0;
            t[i]=i;
        }
        parata_cnt=0;
        priority_queue<pair<long long int,long long int>,vector<pair<long long int,long long int> >, greater<pair<long long int,long long int> > > pq;
        for(i=0; i<no_of_cook; i++)
        {
            scanf("%lld",&rank_of_cook);
            freq[rank_of_cook]++;
            if(freq[rank_of_cook]==1)
                pq.push(make_pair((visit[rank_of_cook]*rank_of_cook),rank_of_cook));
        }
        while(!pq.empty())
        {
            top=pq.top().second;
            ans=pq.top().first;
            pq.pop();
            parata_cnt=freq[top]+parata_cnt;
            if(parata_cnt>=no_of_parata)
                break;
            visit[top]++;
            t[top]=t[top]+visit[top]*top;
            pq.push(make_pair(t[top],top));
        }
        if(no_of_parata==0)
        ans--;
        printf("%lld\n",ans);
    }
    return 0;
}
