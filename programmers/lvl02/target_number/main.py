def solution(numbers, target):
    limit = len(numbers)
    answer = [0]
    def dfs(curr_idx, curr_value):
        if curr_idx == limit:
            if curr_value == target:
                answer[0] += 1
            return
        dfs(curr_idx + 1, curr_value + numbers[curr_idx])
        dfs(curr_idx + 1, curr_value - numbers[curr_idx])

    dfs(0, 0)
    return answer[0]