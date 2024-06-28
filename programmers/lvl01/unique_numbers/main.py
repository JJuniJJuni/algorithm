def solution(arr):
    if not arr:
        return arr
    answer = [arr[0]]
    for num in arr[1:]:
        if answer[-1] != num:
            answer.append(num)
    return answer