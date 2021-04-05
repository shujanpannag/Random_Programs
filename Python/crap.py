def word(s,l):
	a = []
	for x in range((len(s)//l)+1):
		a.append(s[x:x+l])

	return a

s = []
for i in range(len('bbbbb')):
	s.extend(word('bbbbb', i+1))

# s = set(s)

s = sorted(s)


s.pop(0)

print(s)
