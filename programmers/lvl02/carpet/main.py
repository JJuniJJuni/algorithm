def solution(brown, yellow):
    answer = []
    size = brown + yellow
    for row in range(1, size + 1):
       if size % row == 0:
           col = size / row
           if row >= col:
               if brown == row * 2 + col * 2 - 4:
                   return [row, col]
    return answer
