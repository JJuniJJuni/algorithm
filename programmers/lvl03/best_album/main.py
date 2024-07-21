from functools import cmp_to_key
'''
스트리밍 사이트에서 장르 별로 가장 많이 재생된 노래를 두 개씩 모아 베스트 앨범을 출시하려 합니다.
노래는 고유 번호로 구분하며, 노래를 수록하는 기준은 다음과 같습니다.
1. 속한 노래가 많이 재생된 장르를 먼저 수록합니다.
2. 장르 내에서 많이 재생된 노래를 먼저 수록합니다.
3. 장르 내에서 재생 횟수가 같은 노래 중에서는 고유 번호가 낮은 노래를 먼저 수록합니다.
노래의 장르를 나타내는 문자열 배열 genres와 노래별 재생 횟수를 나타내는 정수 배열 plays가 주어질 때,
베스트 앨범에 들어갈 노래의 고유 번호를 순서대로 return 하도록 solution 함수를 완성하세요.
'''

def solution(genres, plays):
    answer = []
    def compare(x, y):
        if x[1] == y[1]:
            return x[0] - y[0]
        else:
            return -(x[1] - y[1])
    genres_map = dict()
    genres_counts = dict()
    for idx, (genre, play) in enumerate(zip(genres, plays)):
        genres_map[genre] = genres_map.get(genre, []) + [(idx, play)]
        genres_counts[genre] = genres_counts.get(genre, 0) + play
    genres_counts_items = sorted(genres_counts.items(), key=lambda x: x[1], reverse=True)
    for key in genres_map.keys():
        genres_map[key] = sorted(genres_map[key], key=cmp_to_key(compare))
    for genres_counts_item in genres_counts_items:
        plays = genres_map.get(genres_counts_item[0])
        answer.extend([play[0] for play in plays[:2]])
    return answer