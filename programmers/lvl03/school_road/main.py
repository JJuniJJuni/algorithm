def solution(m, n, puddles):
    arr = [[0] * (m + 1) for _ in [0] * (n + 1)]
    arr[1][1] = 1
    for puddle in puddles:
        arr[puddle[1]][puddle[0]] = -1
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if i == 1 and j == 1:
                continue
            if arr[i][j] == -1:
                arr[i][j] = 0
            else:
                arr[i][j] = arr[i][j - 1] + arr[i - 1][j]
    return arr[n][m] % 1000000007