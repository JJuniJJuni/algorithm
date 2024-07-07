def solution(clothes):
    from collections import defaultdict

    clothes_dict = defaultdict(int)
    for item, category in clothes:
        clothes_dict[category] += 1

    combinations = 1
    for count in clothes_dict.values():
        combinations *= (count + 1)  # 각 카테고리에서 옷을 선택하지 않는 경우를 포함

    return combinations - 1  # 모든 카테고리를 선택하지 않는 경우를 제외
