def solution(n, computers):
    networks = [0] * n
    graph = [[] for _ in range(n)]
    for current, computer in enumerate(computers):
        for other, edge in enumerate(computer):
            if current != other and edge == 1:
                graph[current].append(other)
                graph[other].append(current)
    def dfs(current):
        for neighbor in graph[current]:
            if networks[neighbor] == 0:
                networks[neighbor] = 1
                dfs(neighbor)
    answer = 0

    for idx in range(n):
        if networks[idx] == 0:
            networks[idx] = 1
            answer += 1
            dfs(idx)

    return answer