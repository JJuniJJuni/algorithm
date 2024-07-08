def solution(numbers):
  numbers = sorted(map(lambda x: str(x), numbers), reverse=True)
  limit = len(''.join(numbers))
  check = [False] * len(numbers)
  answer = [""]

  def per(idx, limit, curr, result, check):
    if idx == limit:
      result[0] = max(result[0], curr)
      return
    if result[0] > curr + ('0' * (limit - idx)):
      return
    for i in range(limit):
      if not check[i]:
        check[i] = True
        per(idx + 1, limit, curr + numbers[i], result, check)
        check[i] = False
  per(0, limit, "", answer, check)
  return answer[0]

