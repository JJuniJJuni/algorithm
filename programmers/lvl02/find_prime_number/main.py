def solution(numbers):
    answer = set()
    digits = list(numbers)
    limit = len(digits)
    check = [False] * limit
    def isprime(n):
        if n < 2:
            return False
        i = 2
        while i * i <= n:
            if n % i == 0:
                return False
            i += 1
        return True
    def subset(idx, limit, curr):
        if idx == limit:
            if curr and isprime(int(curr)):
                answer.add(int(curr))
            return
        for i, digit in enumerate(digits):
            if not check[i]:
                check[i] = True
                subset(idx + 1, limit, curr + digit)
                subset(idx + 1, limit, curr)
                check[i] = False
    subset(0, limit, "")

    return len(answer)


