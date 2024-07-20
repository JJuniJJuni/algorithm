def solution(number, k):
    stack = []
    for digit in number:
        while k > 0 and stack and stack[-1] < digit:
            k -= 1
            stack.pop()
        stack.append(digit)
    if k > 0:
        stack = stack[:-k]
    return ''.join(stack)