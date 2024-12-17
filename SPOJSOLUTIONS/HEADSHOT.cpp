// Problem: HEADSHOT
// Submission ID: 26036227
// Language: 4840

#include <bits/stdc++.h>
using namespace std;

int main (  ) {

	int i = 0;
	char str[1024];

	scanf("%s" , str );

	int len = strlen(str);

	int lc = 0 , dc = 0;

	if ( str[0] == '0' && str[len-1] == '0' ) lc ++;
	if ( str[0] == '0' && str[len-1] == '1' ) dc ++;

	i = 1;

	while ( str[i] != '\0' ) {

		if ( str[i] == '0' && str[i-1] == '0' ) lc ++;
		if ( str[i] == '0' && str[i-1] == '1' ) dc ++;
		i++;
	}
  // printf("%d %d",lc,dc);
	if ( lc == len || lc == dc ) {
		printf("EQUAL\n");
	}
	else if ( lc > dc ) {
		printf("SHOOT\n");
	}
	else if ( lc < dc ) {
		printf("ROTATE\n");
	}

	return 0;
}
