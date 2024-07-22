import heapq

'''
1. 먼저 시작 시점을 기준으로 작업 리스트를 정렬한다
2. 작업 index를 처음부터 돌면서, 지금 시간 이내로 시작할 수 있는 작업을 찾는다
2-1) 이때 우선순위 큐에 작업 진행 시간을 기준으로 넣는다
3. 가장 빨리 끝낼 수 있는 작업부터 실행한다
3-1) 만약에 큐에 존재하면, 지금 시간 이내에 실행할 수 있는게 존재한다는 의미니깐 실행
3-2) 큐가 비어있으면 지금까지 실행할 수 있는게 없으니 다음 작업 실행 가능한 시점으로 Jump!
'''
def solution(jobs):
    pq = []
    # 1
    jobs.sort(key=lambda x: x[0])
    current_time = 0
    total_time = 0
    idx = 0
    size = len(jobs)
    while idx < size or pq:
        # 2
        while idx < size and jobs[idx][0] <= current_time:
            # 2-1
            heapq.heappush(pq, (jobs[idx][1], jobs[idx][0]))
            idx += 1
        # 3
        if pq:
            # 3-1
            job_duration, job_start = heapq.heappop(pq)
            current_time += job_duration
            total_time += current_time - job_start
        else:
            # 3-2
            current_time = jobs[idx][0]
    return total_time // size
