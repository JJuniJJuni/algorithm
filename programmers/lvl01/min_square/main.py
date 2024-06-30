def solution(sizes):
    seconds = []
    for size in sizes:
        seconds.append([size[1], size[0]])
    sizes.extend(seconds)
    result = square(sizes)
    return result


def square(sizes):
    max_width = -1
    max_height = -1
    sizes = sorted(sizes, key=lambda size: size[0], reverse=True)
    for width, height in sizes:
        if height <= max_width and width <= max_height:
            temp = width
            width = height
            height = temp
        max_width = max(max_width, width)
        max_height = max(max_height, height)
    return max_height * max_width