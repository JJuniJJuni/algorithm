def solution(sizes):
    max_width = -1
    max_height = -1
    for size in sizes:
        width, height = max(size), min(size)
        max_width = max(max_width, width)
        max_height = max(max_height, height)
    return max_height * max_width
