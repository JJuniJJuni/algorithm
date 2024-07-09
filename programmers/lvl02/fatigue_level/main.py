from itertools import permutations


def solution(k, dungeons):
    limit = len(dungeons)
    answer = -1

    def get_cnt(curr, k):
        cnt = 0
        for idx in curr:
            if k >= dungeons[idx][0]:
                k -= dungeons[idx][1]
                if k >= 0:
                    cnt += 1
            else:
                break
        return cnt

    for order in permutations(range(limit)):
        answer = max(answer, get_cnt(order, k))
    return answer