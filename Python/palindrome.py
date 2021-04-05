def pal(n):
    n = str(n)
    l = len(n)
    if l % 2 == 0:
        a = list(n[:l//2])
        b = list(n[l//2:])
        b = list(reversed(b))
    else:
        a = list(n[:l//2])
        b = list(n[l//2+1:])
        b = list(reversed(b))

    if a == b:
        return True
    else:
        return False
