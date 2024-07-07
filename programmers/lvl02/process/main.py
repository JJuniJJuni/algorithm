
def solution(priorities, location):
    priorities = list(enumerate(priorities))
    queue = sorted(priorities, key=lambda x: x[1])
    turn = 1
    while len(priorities) > 0:
        idx, priority = priorities.pop(0)
        if priority < queue[-1][1]:
            priorities.append((idx, priority))
        else:
            if idx == location:
                return turn
            queue.pop()
            turn += 1
