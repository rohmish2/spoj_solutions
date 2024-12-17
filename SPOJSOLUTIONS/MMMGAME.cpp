// Problem: MMMGAME
// Submission ID: 26067709
// Language: 4660

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d", &t);
	while (t--) {
		int z = 0;
		int cnt = 0,x,n;
		
scanf("%d", &n);
		for (int i=1; i<=n; i++) {
			scanf("%d", &x);
			if (x == 1) cnt++;
			z = z ^ x;
		}
		if (cnt == n) {
			if (n%2 == 0)
				printf("John\n");
			else
				printf("Brother\n");
		} else {
			if (z > 0)
				printf("John\n");
			else
				printf("Brother\n");
		}
	}

	return 0;
}
