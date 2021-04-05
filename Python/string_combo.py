s = 'shreesh'

l = len(s)

b = []

for x in range(2**l):
    b.append(list(bin(x))[2:])

for x in b:
    f = len(x)
    z = -(f-l)
    for y in range(0, z):
        x.insert(0, '0')

for x in b:
    for y in range(l):
        if x[y] == '1':
            x[y] = s[y]
        else:
            x[y] = ''

a = []

for x in b:
    a.append(''.join(x))

print(a)
