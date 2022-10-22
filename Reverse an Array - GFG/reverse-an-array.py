#code
n = int(input())
res=[]
for i in range(0,n):
    l=int(input())
    arr=input().split()
    print(" ".join(map(str,arr[::-1])))
    
    