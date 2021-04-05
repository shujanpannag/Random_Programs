def ans(no):
    l = 0
    for i in no:
        l = l + len(str(i))
    r = 0
    while(l != 0):
        temp = [[x*(10**(l - len(str(x)))),x] for x in no]
        r = r + max(temp)[0]
        l = l - len(str(max(temp)[1]))
        no.remove(max(temp)[1])

    return r

print("ENTER THE VARIABLES")
no = list(map(int, input().split()))
# no = [99, 900, 91]
result = ans(no)
print("ANSWER IS ", result)

a = [1,2,3,4,5]
a = a.