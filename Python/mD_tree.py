def mergesort(seq):
    mid = len(seq)//2
    lft, rgt = seq[:mid], seq[mid:]
    print(lft, rgt, '1')
    if len(lft) > 1:
        lft = mergesort(lft)
        print(lft)
    if len(rgt) > 1:
        rgt = mergesort(rgt)
        print(rgt)
    res = []

    while lft and rgt:
        if lft[-1] >= rgt[-1]:
            res.append(lft.pop())
            print(res, "2")
        else:
            res.append(rgt.pop())
            print(res, '2')
    res.reverse()
    print((lft or rgt) + res, '3')
    return ((lft or rgt) + res)


x = mergesort([21, 3, 17, 8, 9, 1, 0, 19])
x
