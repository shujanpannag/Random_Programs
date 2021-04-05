class stack:

	def __init__(self):
		self.data = []

	def is_empty(self):
		return len(self.data) == 0

	def push(self,d):
		self.data.append(d)

	def pop(self):
		return self.data.pop()


q = '[{}]'


def check(q):
	l = '([{'
	r = ')]}'
	s = stack()
	for x in q:
		if x in l:
			s.push(x)
		if x in r:
			if s.is_empty():
				return False
			if r.index(x) != l.index(s.pop()):
				return False
	return True

print(check(q))