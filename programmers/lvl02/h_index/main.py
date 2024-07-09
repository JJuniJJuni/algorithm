def solution(citations):
    answer = 0
    citations = sorted(citations, reverse=True)
    for idx, citation in enumerate(citations):
        if citation >= idx + 1:
            answer = idx + 1
        else:
            break
    return answer