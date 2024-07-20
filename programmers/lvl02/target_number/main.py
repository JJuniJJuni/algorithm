from itertools import product

def solution(numbers, target):
    return sum([1 for digits in product(*[(-x, x) for x in numbers]) if sum(digits) == target])