def merge_sort(s):
    l = s[:len(s)//2]
    r = s[len(s)//2:]
    print(l,r)
    if len(l) > 1:
        l = merge_sort(l)
    if len(r) > 1:
        r = merge_sort(r)

    s = []

    while l and r:
        if l[-1] >= r[-1]:
            s.append(l.pop())
        else:
            s.append(r.pop())

    s.reverse()
    return (l or r) + s


x = merge_sort([1, 22, 6, 23, 47, 2, 6])

print(x)

# def insertion_sort(s, i):
#     if i == 0:
#         return
#     insertion_sort(s, i-1)
#     j = i
#     while j > 0 and s[j-1] > s[j]:
#         s[j-1], s[j] = s[j], s[j-1]
#         j -= 1
#     return s


# s = [1010, 2, 3, 4, 2, 4, 3, 3, 400, 1, 23, 532]
# x = insertion_sort(s, len(s)-1)
# print(x)
