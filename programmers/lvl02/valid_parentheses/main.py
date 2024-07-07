def solution(s):
    stack = []
    try:
        for paren in s:
            if paren == '(':
                stack.append(paren)
            else:
                stack.pop()
    except Exception as e:
        return False
    return not stack