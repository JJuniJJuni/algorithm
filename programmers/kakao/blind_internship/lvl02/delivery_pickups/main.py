def solution(cap, n, deliveries, pickups):
    answer = 0
    deliveries = deliveries[::-1]
    pickups = pickups[::-1]
    delivery_sum = 0
    pickup_sum = 0
    for idx, (delivery, pickup) in enumerate(zip(deliveries, pickups)):
        delivery_sum += delivery
        pickup_sum += pickup
        while delivery_sum > 0 or pickup_sum > 0:
            delivery_sum -= cap
            pickup_sum -= cap
            answer += (n - idx) * 2
    return answer