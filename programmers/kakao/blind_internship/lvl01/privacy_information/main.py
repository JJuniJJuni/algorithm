def add_term_to_privacy(duration, privacy_date):
    duration = int(duration)
    y, m, d = (int(element) for element in privacy_date.split("."))
    d = d - 1 if d != 1 else 28
    if d == 28:
        if m != 1:
            m = m - 1
        else:
            m = 12
            y -= 1
    divided, rest = divmod(m + duration, 12)
    if rest == 0:
        y += (divided - 1)
        m = 12
    else:
        y += divided
        m = rest
    result = str(y) + "." + add_zero(m) + "." + add_zero(d)
    return result

def add_zero(num):
    return "0" + str(num) if len(str(num)) == 1 else str(num)

def solution(today, terms, privacies):
    terms_map = dict()
    for term in terms:
        type, duration = term.split(' ')
        terms_map[type] = duration
    added_privacies = []
    for privacy in privacies:
        privacy_date, type = privacy.split(' ')
        duration = terms_map[type]
        added_privacies.append(add_term_to_privacy(duration, privacy_date))
    answer = []
    for idx, added_privacy in enumerate(added_privacies):
        if added_privacy < today:
            answer.append(idx + 1)
    return answer