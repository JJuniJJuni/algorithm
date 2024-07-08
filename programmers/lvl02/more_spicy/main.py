import heapq

def solution(scoville, K):
  heapq.heapify(scoville)
  answer = 0
  while scoville:
    first = heapq.heappop(scoville)
    if first >= K:
      break
    if not scoville:
      return -1
    second = heapq.heappop(scoville)
    new_thing = first + second * 2
    heapq.heappush(scoville, new_thing)
    answer += 1
  return answer