// Problem: ACPC11B
// Submission ID: 25509273
// Language: 4616

//SPOJ submission 15808646 (C++ 4.3.2) plaintext list. Status: AC, problem ACPC11B, contest SPOJ. By hmp_ism (hmp), 2015-12-08 10:30:26.
#include<climits>
#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n1;
        scanf("%d",&n1);
        int arr1[n1];
        for(int i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
        //sort(arr1,arr1+n1);
        int n2;
        scanf("%d",&n2);
        int arr2[n2];
        for(int i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
        //sort(arr2,arr2+n2);
        int ans=INT_MAX;
        for(int i=0;i<n1;i++)
        for(int j=0;j<n2;j++)
        {
        if(ans>abs(arr1[i]-arr2[j]))
        ans=abs(arr1[i]-arr2[j]);
        }
        printf("%d\n",ans);
    }
	// your code goes here
	return 0;
}