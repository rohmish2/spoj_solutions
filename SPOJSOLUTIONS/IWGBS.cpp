// Problem: IWGBS
// Submission ID: 25873577
// Language: 9376

a=int(input())
a1=2
a2=3
for i in range(3,a+1):
    b=a2
    a2=a1+a2
    a1=b
if(a>=2):
    print(a2)
else:
    print(a1)
