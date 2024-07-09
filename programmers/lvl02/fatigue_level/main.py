def solution(k, dungeons):
    limit = len(dungeons)
    check = limit * [False]
    answer = [-1]

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

    def pen(idx, limit, k, curr):
        if idx == limit:
            cnt = get_cnt(curr, k)
            answer[0] = max(answer[0], cnt)
            return
        for i in range(limit):
            if not check[i]:
                check[i] = True
                pen(idx + 1, limit, k, curr + [i])
                check[i] = False
    pen(0, limit, k, [])
    return answer[0]