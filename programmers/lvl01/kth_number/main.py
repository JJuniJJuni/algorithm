def solution(array, commands):
    answer = []
    if not array:
        return answer
    for command in commands:
        start = command[0] - 1
        end = command[1]
        idx = command[2] - 1
        sublist = array[start] if start == end else sorted(array[start:end])
        answer.append(sublist[idx])
    return answer