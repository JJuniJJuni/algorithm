from functools import cmp_to_key


def solution(numbers):
  # 숫자 배열을 문자열 배열로 변환
  str_numbers = list(map(str, numbers))

  # 커스텀 비교 함수 정의
  def compare(x, y):
    if x + y > y + x:
      return -1
    elif x + y < y + x:
      return 1
    else:
      return 0

  # 문자열 배열을 커스텀 비교 함수로 정렬
  str_numbers.sort(key=cmp_to_key(compare))

  # 정렬된 문자열을 이어 붙여서 결과 반환
  largest_num = ''.join(str_numbers)

  # 숫자로 변환 후 문자열로 변환 (앞에 불필요한 0 제거)
  return str(int(largest_num))

