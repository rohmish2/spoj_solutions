// Problem: ABSYS
// Submission ID: 25470250
// Language: 9312

t=int(input())
for i in  range(t):

    s = input()
    while(s==""):
        s = input()
    l=["","",""]
    index=0
    for j in s:
        if(j==' '):
            continue
        if(j!='=' and j!='+'):
            l[index]+=j
        else:
            index+=1
    if(l[0].isnumeric() and l[1].isnumeric()):
        l[2]=str(int(l[0])+int(l[1]))
    elif (l[1].isnumeric() and l[2].isnumeric()):
        l[0] = str(int(l[2]) - int(l[1]))
    else:
        l[1] = str(int(l[2]) - int(l[0]))
    print(l[0]+" "+'+'+" "+l[1]+" "+'='+" "+l[2])