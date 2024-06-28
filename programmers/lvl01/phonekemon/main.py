'''
홍 박사님은 당신에게 자신의 연구실에 있는 총 N 마리의 폰켓몬 중에서 N/2마리를 가져가도 좋다고 했습니다.
홍 박사님 연구실의 폰켓몬은 종류에 따라 번호를 붙여 구분합니다. 따라서 같은 종류의 폰켓몬은 같은 번호를 가지고 있습니다
예를 들어 연구실에 총 4마리의 폰켓몬이 있고, 각 폰켓몬의 종류 번호가 [3번, 1번, 2번, 3번]이라면
이는 3번 폰켓몬 두 마리, 1번 폰켓몬 한 마리, 2번 폰켓몬 한 마리가 있음을 나타냅니다.
이때, 4마리의 폰켓몬 중 2마리를 고르는 방법은 다음과 같이 6가지
'''
def solution(nums):
    size = len(nums)
    phonekemon_types = set()
    for num in nums:
        phonekemon_types.add(num)
    answer = min(size, len(phonekemon_types))
    if answer > size / 2:
        answer = int(size / 2)
    return answer