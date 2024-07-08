def solution(prices):
  answer = [0] * len(prices)
  stack = []

  for i in range(len(prices)):
    # 현재 가격이 스택의 마지막 가격보다 작으면 가격이 떨어진 것
    while stack and prices[i] < prices[stack[-1]]:
      idx = stack.pop()
      answer[idx] = i - idx
    stack.append(i)

  # 스택에 남아있는 인덱스는 끝까지 가격이 떨어지지 않은 경우
  while stack:
    idx = stack.pop()
    answer[idx] = len(prices) - 1 - idx

  return answer
