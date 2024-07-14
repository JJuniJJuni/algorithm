from itertools import combinations

def solution(number, k):
    subsets = combinations(range(len(number)), k)
    min_value = 1000000
    min_subset = set()
    for subset in subsets:
        curr = int(''.join([number[idx] for idx in subset]))
        if min_value > curr:
            min_value = curr
            min_subset = subset
    return ''.join([item for idx, item in enumerate(number) if idx not in min_subset])