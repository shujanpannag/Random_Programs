h, m, b = list(map(int, input().split()))
c = 0
board = []


def chess(b, i, j):
    global c, h, m
    if i <= h-1 and j <= m-1:
        if i+j == 4:
            c += 1

        if (i+1) <= h-1 and j <= m-1:
            if b[i+1][j] == 0:
                chess(b, i+1, j)

    if i <= h-1 and (j+1) <= m-1:
        if b[i][j+1] == 0:
            chess(b, i, j+1)

    return c


for x in range(m):
    board.append([0]*h)

for i in range(b):
    x, y = list(map(int, input().split()))
    board[x][y] = 1

print(chess(board, 0, 0))
