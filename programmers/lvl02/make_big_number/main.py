def largest_idx(curr_idx, limit, reversed_number):
    result = -1
    max_number = -1
    for idx, number in enumerate(reversed_number[curr_idx:limit]):
        if max_number <= ord(number):
            result = idx
            max_number = ord(number)
    return curr_idx + result


def solution(number, k):
    reversed_number = number[::-1]
    idxes = list(range(len(number) - k))
    result = []
    last_idx = len(number)
    while idxes:
        idx = idxes.pop()
        next_idx = largest_idx(idx, last_idx, reversed_number)
        result.append(reversed_number[next_idx])
        last_idx = next_idx
    return ''.join(result)