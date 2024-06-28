'''
단 한 명의 선수를 제외하고는 모든 선수가 마라톤을 완주하였습니다.
'''
from collections import Counter


def solution(participant, completion):
    participants = Counter(participant)
    completions = Counter(completion)
    for key in completions:
        if key in participants:
            participants[key] = participants[key] - completions[key]
    for key in participants:
        if participants[key] > 0:
            return key