def alpha_distance(curr_char, target_char):
    curr_alphabet = ord(curr_char)
    dest_alphabet = ord(target_char)
    return min(abs(curr_alphabet - dest_alphabet), 26 - abs(curr_alphabet - dest_alphabet))


def solution(name):
    n = len(name)
    answer = 0

    # 1. 알파벳을 변경하는 최소 횟수 계산
    for char in name:
        answer += alpha_distance('A', char)

    # 2. 커서 이동 최소 횟수 계산
    move = n - 1
    for i in range(n):
        next_i = i + 1
        while next_i < n and name[next_i] == 'A':
            next_i += 1
        distance = i + n - next_i + min(i, n - next_i)
        move = min(move, distance)

    answer += move
    return answer
