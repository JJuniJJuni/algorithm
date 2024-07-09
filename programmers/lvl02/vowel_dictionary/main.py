def solution(word):
    alphabets =  ['A', 'E', 'I', 'O', 'U']
    size = len(alphabets)
    answer = [0]
    def per(idx, limit, curr):
        if len(answer) > 1:
            return
        if curr == word:
            answer.append(answer[0])
            return
        if idx == limit:
            return
        for i in range(limit):
            answer[0] += 1
            per(idx + 1, limit, curr + alphabets[i])
    per(0, size, "")
    return answer[1]
