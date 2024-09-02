def solution(friends, gifts):
    friends_size = len(friends)
    gift_graph = [[0] * friends_size for _ in friends_size * [0]]
    for gift in gifts:
        sender, receiver = gift.split(' ')
        gift_graph[friends.index(sender)][friends.index(receiver)] += 1

    senders = [0] * friends_size
    gift_idxes = [0] * friends_size
    for sender_idx, receivers in enumerate(gift_graph):
        gift_idxes[sender_idx] = sum(receivers) - sum(gift_graph[i][sender_idx] for i in range(friends_size))


    for sender_idx, receivers in enumerate(gift_graph):
        for receiver_idx, gift_cnt in enumerate(receivers):
            if sender_idx != receiver_idx:
                if gift_cnt > gift_graph[receiver_idx][sender_idx]:
                    senders[sender_idx] += 1
                elif (gift_cnt == 0 and gift_graph[receiver_idx][sender_idx] == 0) or (gift_cnt == gift_graph[receiver_idx][sender_idx]):
                    if gift_idxes[sender_idx] > gift_idxes[receiver_idx]:
                        senders[sender_idx] += 1


    answer = max(senders)
    return answer