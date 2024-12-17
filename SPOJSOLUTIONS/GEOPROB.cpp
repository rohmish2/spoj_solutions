// Problem: GEOPROB
// Submission ID: 26009923
// Language: 7436

t=int(input())
while t>0 :
	t-=1
	a,b,c= map(int, raw_input().split())
	print(str(2*b-a-c))