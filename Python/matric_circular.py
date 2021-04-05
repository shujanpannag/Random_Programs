# # from math import ceil 

# # a = [[1,2,3,4], [5,6,7,8], [9,10,11,12], [13,14,15,16]]
# # b = [[x for x in range(y,y+5)] for y in range(1,26,5)]
# # c = [[x for x in range(y,y+3)] for y in range(1,10,3)]

# # n = len(c)

# # indices = []
# # for x in range(ceil(n/2)):
# # 	indices.append([x,n-1-x])

# # matd = {}

# # def circular(mat,*args):
# # 	global n
# # 	global matd
# # 	a,b = args
# # 	if a==b:
# # 		print(mat[a][b])
# # 		matd[(a,b)] = mat[a][b]
# # 		return
# # 	for x in range(a,b):
# # 		print(mat[a][x])
# # 		matd[(a,x)] = mat[a][x]
# # 	for x in range(a,b):
# # 		print(mat[x][b])
# # 		matd[(x,b)] = mat[x][b]
# # 	for x in range(-(a+1),-b-1,-1):
# # 		print(mat[b][x])
# # 		matd[(b,n+x)] = mat[b][x]
# # 	for x in range(-(a+1),-b-1,-1):
# # 		print(mat[x][a])
# # 		matd[(n+x,a)] = mat[x][a]

# # def rcircular(mat,*args):
# # 	global n
# # 	global matd
# # 	a,b = args
# # 	if a==b:
# # 		print(mat[a][b])
# # 		matd[(a,b)] = mat[a][b]
# # 		return
# # 	for x in range(a,b):
# # 		print(mat[x][a])
# # 	for x in range(a,b):
# # 		print(mat[b][x])
# # 	for x in range(-(a+1),-b-1,-1):
# # 		print(mat[x][b])
# # 	for x in range(-(a+1),-b-1,-1):
# # 		print(mat[a][x])


# # for x in indices:
# # 	circular(c,*x)
# # print(matd)

# # for x in indices:
# # 	rcircular(c,*x)
# # print(matd)

# from math import ceil 

# c = [[x for x in range(y,y+3)] for y in range(1,10,3)]
# n = len(c)
  
# matd = [[0]*n for x in range(n)]

# # indices = [[x,n-1-x] for x in range(ceil(n/2))]

# def circular(mat,*args):
# 	global n
# 	global matd
# 	a,b = args
# 	if a==b:
# 		matd[a][b] = mat[a][b]
# 		return
# 	for x in range(a,b):
# 		matd[a][x+1] = mat[a][x]
# 		matd[x+1][b] = mat[x][b]
# 		matd[b][n-x-2] = mat[b][-x-1]
# 		matd[n-x-2][a] = mat[-x-1][a]
# 	return

# # for x in indices:
# # 	circular(c,*x)

# for x in range(ceil(n/2)):
# 	circular(c,x,n-1-x)

# print(matd)


n = 123

def repeat(n):
	if n>10:
		n = sum(list(map(int, list(str(n)))))
		repeat(n)
	else:
		print(n)
  
repeat(n)