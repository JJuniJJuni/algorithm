import heapq

def solution(n, edge):
    distances = [20000] * (n + 1)
    graph = [[] for _ in range(n + 1)]
    check = [False] * (n + 1)
    for e in edge:
        graph[e[0]].append(e[1])
        graph[e[1]].append(e[0])

    def bfs():
        queue = [(0, 1)]
        heapq.heapify(queue)
        while queue:
            distance, current_node = heapq.heappop(queue)
            distances[current_node] = min(distance, distances[current_node])
            for neighbor in graph[current_node]:
                if not check[neighbor]:
                    check[neighbor] = True
                    heapq.heappush(queue, (distance + 1, neighbor))
    bfs()
    max_distance = max(distances[1:])
    answer = sum([1 for distance in distances[1:] if distance == max_distance])
    return answer