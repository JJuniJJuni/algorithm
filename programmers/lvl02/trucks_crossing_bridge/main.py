def solution(bridge_length, weight, truck_weights):
    bridge_queue = []
    current_weight = weight
    answer = 0
    while bridge_queue or truck_weights:
        answer += 1
        for idx, (truck, time) in enumerate(bridge_queue):
            time += 1
            bridge_queue[idx] = (truck, time)
        if bridge_queue and bridge_queue[0][1] > bridge_length:
            truck, time = bridge_queue.pop(0)
            current_weight += truck
        if truck_weights and truck_weights[0] <= current_weight:
            truck = truck_weights.pop(0)
            if truck <= current_weight:
                current_weight -= truck
                bridge_queue.append((truck, 1))
    return answer
