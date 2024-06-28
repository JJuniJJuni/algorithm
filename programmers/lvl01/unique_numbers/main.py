def solution(arr):
    answer = []
    if not arr:
        return arr
    ex = arr.pop(0)
    answer.append(ex)
    for num in arr:
        current = num
        if ex != current:
            answer.append(current)
        ex = current
    return answer