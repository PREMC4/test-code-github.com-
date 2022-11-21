def base(n):
    l=[]
    while(n>0):
        rem=n%3
        l.append(rem)
        n=n//3
    for i in range(len(l)-1,-1,-1):
        print(l[i],end="")

n=int(input())
base(n)
