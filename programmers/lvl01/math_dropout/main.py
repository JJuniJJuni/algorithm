'''
수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 수학 문제를 전부 찍으려 합니다. 수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.

1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

정답이 순서대로 들은 배열 answers가 주어졌을 때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution 함수를 작성해주세요.
'''

def solution(answers):
    result = []
    score, score2, score3 = 0, 0, 0
    dropout = [1, 2, 3, 4, 5]
    dropout2 = [2, 1, 2, 3, 2, 4, 2, 5]
    dropout3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    for idx, answer in enumerate(answers):
        if dropout[idx % len(dropout)] == answer:
            score += 1
        if dropout2[idx % len(dropout2)] == answer:
            score2 += 1
        if dropout3[idx % len(dropout3)] == answer:
            score3 += 1
    max_score = max(score, score2, score3)
    for idx, current in enumerate([score, score2, score3]):
        if current == max_score:
            result.append(idx + 1)
    return result