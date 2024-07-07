from queue import Queue


def solution(progresses, speeds):
    queue = Queue()
    answer = []
    for progress, speed in zip(progresses, speeds):
        queue.put((progress, speed))
    while not queue.empty():
        cnt = 0
        current_queue = Queue()
        while not queue.empty():
            progress, speed = queue.get()
            current_queue.put((progress, speed))
        while not current_queue.empty():
            progress, speed = current_queue.get()
            progress += speed
            if progress >= 100 and queue.empty():
                cnt += 1
            else:
                queue.put((progress, speed))
        if cnt > 0:
            answer.append(cnt)
    return answer