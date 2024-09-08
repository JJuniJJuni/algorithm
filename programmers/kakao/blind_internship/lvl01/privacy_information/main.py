def to_days(duration, privacy_date):
    duration = int(duration)
    y, m, d = (int(element) for element in privacy_date.split("."))
    result = compute_date(d, m + duration, y)
    return result

def compute_date(d, m, y):
    return d + (m * 28) + (y * 12 * 28)

def solution(today, terms, privacies):
    terms_map = dict()
    for term in terms:
        type, duration = term.split(' ')
        terms_map[type] = duration
    added_privacies = []
    for privacy in privacies:
        privacy_date, type = privacy.split(' ')
        duration = terms_map[type]
        added_privacies.append(to_days(duration, privacy_date))
    answer = []
    for idx, added_privacy in enumerate(added_privacies):
        y, m, d = (int(element) for element in today.split("."))
        computed_today = compute_date(d, m, y)
        if added_privacy <= computed_today:
            answer.append(idx + 1)
    return answer