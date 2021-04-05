from math import sin,cos,pi,log2
import numpy as np
import copy	

j = complex(0,1)

def NPDFT(mat,N):
	if len(mat) < N:
		mat.extend([0]*(N-len(mat)))
	k = -(2*pi)/N
	wmat = [[0 for x in range(N)] for y in range(N)]
	step1 = [[x, complex(float('{0:10.3f}'.format(cos(k*x))), float('{0:10.3f}'.format(sin(k*x))))] for x in range(N*N) if -k*x < 2*pi]

	for x in range(N):
		for y in range(N):
			a,b = cos(k*x*y), sin(k*y*x)
			a,b = float('{0:10.3f}'.format(a)), float('{0:10.3f}'.format(b))
			wmat[x][y] = complex(a,b)
	
	step2 = np.array(wmat)
	res = np.dot(mat,wmat)
	print('----------STEP1----------', step1, sep = '\n')
	print('----------STEP2----------', step2, sep = '\n')
	print('----------RESULT-----------',*res, sep = '\n')


def NPIDFT(mat,N):
	if len(mat) < N:
		mat.extend([0]*(N-len(mat)))
	k = (2*pi)/N
	wmat = [[0 for x in range(N)] for y in range(N)]

	for x in range(N):
		for y in range(N):
			a,b = cos(k*x*y), sin(k*y*x)
			a,b = float('{0:10.3f}'.format(a)), float('{0:10.3f}'.format(b))
			wmat[x][y] = complex(a,b)
	
	res = np.dot(mat,wmat)
	res = res/4
	print('----------RESULT-----------',*res, sep = '\n')


def CCONV(m1,m2):
	m2 = np.transpose(m2)
	mat = [m1]
	m = copy.deepcopy(m1)
	for x in range(len(m1)-1):
		m = copy.deepcopy(m)
		m.insert(0,m.pop())
		mat.append(m)
	mat = np.array(mat)
	mat = np.transpose(mat)
	print('----------STEP1-----------',mat, sep = '\n')
	rv = np.dot(mat,m2)
	print('----------RESULT-----------',rv, sep = '\n')

def TIMEC(N):
	print('COMPLEX MULTIPLICATION: ', N**2)
	print('COMPLEX ADDITION      : ', (N**2) - (2*N))
	print('REAL MULTIPLICATION   : ', (2*N)**2)
	print('REAL ADDITION         : ', ((2*N)**2) - (2*(2*N)))
	print(f'FFT MULTIPLICATION	  :  {(N/2)*log2(N):.2f}')
	print(f'FFT ADDITION      	  :  {(N)*log2(N):.2f}')
	print('TRIGNOMETRIC FUNCTION : ' , (2)*N**2)
'''---------------------------------------DSP--------------------------------'''
