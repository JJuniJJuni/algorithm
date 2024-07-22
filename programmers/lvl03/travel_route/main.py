def solution(tickets):
    routes = dict()
    check = dict()
    for idx, (start, end) in enumerate(tickets):
        check[(start, end, idx)] = False
        routes[start] = routes.get(start, []) + [(end, idx)]
    answer = [['ZZZZZZ'] * len(check.keys())]

    def dfs(curr_idx, curr_airport, curr_route):
        if curr_idx == len(check.keys()):
            answer[0] = min(answer[0], curr_route)
            return
        if not curr_airport in routes.keys():
            return
        for airport, idx in routes[curr_airport]:
            if not check[(curr_airport, airport, idx)]:
                check[(curr_airport, airport, idx)] = True
                dfs(curr_idx + 1, airport, curr_route + [airport])
                check[(curr_airport, airport, idx)] = False
    dfs(0, 'ICN', ['ICN'])
    return sorted(answer)[0]