// Problem: INCPOWK
// Submission ID: 26138732
// Language: 7452

for _ in xrange(int(raw_input())):
	k, n = map(int, raw_input().split())
	print int(bin(n)[2:], k)