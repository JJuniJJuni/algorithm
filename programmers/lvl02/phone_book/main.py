def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        # 타겟 값을 찾은 경우
        if arr[mid] != target and arr[mid].startswith(target):
            return 1
        # 타겟 값이 중간 값보다 작은 경우
        elif arr[mid] > target:
            right = mid - 1
        # 타겟 값이 중간 값보다 큰 경우
        else:
            left = mid + 1

    # 타겟 값을 찾지 못한 경우
    return -1


def solution(phone_book):
    phone_book.sort()
    numbers = dict()
    for number in phone_book:
        current = numbers.get(number[0], [])
        current.append(number[1:])
        numbers[number[0]] = current
    for number in phone_book:
        current = numbers.get(number[0], [])
        if binary_search(current, number[1:]) > 0:
            return False
    return True