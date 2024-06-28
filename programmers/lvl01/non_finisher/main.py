'''
단 한 명의 선수를 제외하고는 모든 선수가 마라톤을 완주하였습니다.
'''
from collections import Counter

def solution(participant, completion):
    answer = Counter(participant) - Counter(completion)
    return list(answer.keys())[0]