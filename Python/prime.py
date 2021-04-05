from math import sqrt

start = 0
end = 2000000
r = 0

for val in range(start, end + 1): 
    if val > 1: 
        for n in range(2, int(sqrt(val)):
            if (val % n) == 0: 
                break
        else: 
            r += val
 
print(r)