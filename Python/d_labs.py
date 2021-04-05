def choice(a,b):
    res = []
    for _ in range(b):
        x,y = list(map(int, input().split()))
        if(x==y):
            res.append(1)
        elif( x>y and x-y>a and x>a):
            res.append(1)
        else:
            res.append(0)

    if(not sum(res)):
        print("YES")
    else:
        print("NO")

tc = int(input())

for i in range(tc):
    a,b = list(map(int, input().split()))
    choice(a,b)

# 0 1
# 1 2
# 2 3 0 

# 1 2 3 0 1 2
# 2 3 0 1 2 3