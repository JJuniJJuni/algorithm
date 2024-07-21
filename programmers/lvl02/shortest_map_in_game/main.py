from collections import deque
def solution(maps):
    answer = -1
    row_limit = len(maps)
    col_limit = len(maps[0])
    arrows = [(0, 1), (0, -1), (-1, 0), (1, 0)]
    check = [[False] * col_limit for _ in range(row_limit)]
    check[0][0] = True
    queue = deque([([0, 0], 1)])

    while queue:
        position, cnt = queue.popleft()
        if position[0] == row_limit - 1 and position[1] == col_limit - 1:
            if answer == -1:
                answer = cnt
            else:
                answer = min(cnt, answer)
            continue
        for arrow in arrows:
            next_position = position[0] + arrow[0], position[1] + arrow[1]
            if next_position[0] < 0 or next_position[0] >= row_limit or next_position[1] < 0 or next_position[1] >= col_limit:
                continue
            if check[next_position[0]][next_position[1]] or maps[next_position[0]][next_position[1]] == 0:
                continue
            check[next_position[0]][next_position[1]] = True
            queue.append((next_position, cnt + 1))
    return answer

