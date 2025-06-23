x = "abc"
y = "bcd"
m = len(x)
n = len(y)

array = [[-1 for _ in range(n)] for _ in range(m)]

def SCS(x, y, i, j):
    if i == len(x):
        return len(y) - j
    if j == len(y):
        return len(x) - i

    if array[i][j] != -1:
        return array[i][j]

    if x[i] == y[j]:
        array[i][j] = 1 + SCS(x, y, i+1, j+1)
    else:
        array[i][j] = 1 + min(SCS(x, y, i+1, j), SCS(x, y, i, j+1))

    return array[i][j]

print("Final result:", SCS(x, y, 0, 0))
for row in array:
    print(row)