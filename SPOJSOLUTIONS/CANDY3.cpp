// Problem: CANDY3
// Submission ID: 25464346
// Language: 9292

t=int(input())
for i in range(t):
    a1=input()
    n=int(input())
    sum=0
    for j in range(n):
        k=int(input())
        sum+=k
    if(sum%n==0):
        print("YES")
    else:
        print("NO")

