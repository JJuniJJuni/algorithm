def solution(triangle):
    size = len(triangle[-1])
    arr = (size + 1) * [0]
    for i in range(len(arr)):
        arr[i] = [0] * (size + 1)
    for row, nums in enumerate(triangle):
        for idx, num in enumerate(nums):
            arr[row + 1][idx + 1] = num
    for i in range(1, len(arr)):
        for j in range(1, len(arr[i])):
            arr[i][j] = max(arr[i - 1][j - 1], arr[i - 1][j]) + arr[i][j]
    answer = -1
    for nums in arr[1:]:
        for num in nums[1:]:
            answer = max(answer, num)
    return answer