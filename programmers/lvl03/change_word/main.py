def one_distance(curr_string, word):
    distance = 0
    for curr_alphabet, word_alphabet in zip(curr_string, word):
        distance += 1 if curr_alphabet != word_alphabet else 0
    return distance == 1


def solution(begin, target, words):
    answer = [0]
    check = [False] * len(words)

    def dfs(curr_string, step):
        if curr_string == target:
            answer[0] = min(answer[0], step) if answer[0] != 0 else step
            return
        for idx, word in enumerate(words):
            if not check[idx] and one_distance(curr_string, word):
                check[idx] = True
                dfs(word, step + 1)
                check[idx] = False

    dfs(begin, 0)
    return answer[0]