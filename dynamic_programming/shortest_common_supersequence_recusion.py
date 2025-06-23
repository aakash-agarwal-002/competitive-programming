def SCS(x, y, i, j):
    
    if i == len(x)-1:
        return len(y)-j-1
    if j == len(y)-1:
        return len(x)-i-1


    if x[i] == y[j]:
        return 1 + SCS(x, y, i+1, j+1)
    else:
        return 1 + min(SCS(x, y, i, j+1), SCS(x, y, i, j+1))

print("Final result:", SCS("abc", "bcd", 0, 0))
