def solution(people, limit):
    people = list(sorted(people, reverse=True))
    first_idx = 0
    last_idx = len(people) - 1
    answer = 0
    while first_idx <= last_idx:
        if people[first_idx] + people[last_idx] <= limit:
            answer += 1
            first_idx += 1
            last_idx -= 1
        else:
            first_idx += 1
            answer += 1
    return answer