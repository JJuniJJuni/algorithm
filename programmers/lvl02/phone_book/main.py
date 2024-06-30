def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2
        if arr[mid] != target and arr[mid].startswith(target):
            return 1
        elif arr[mid] > target:
            right = mid - 1
        else:
            left = mid + 1
    return -1


def solution(phone_book):
    phone_book.sort()
    for number in phone_book:
        if binary_search(phone_book, number) > 0:
            return False
    return True