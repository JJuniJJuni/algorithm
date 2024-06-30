

def solution(phone_book):
    phone_book.sort()
    numbers = set()
    for number in phone_book:
        temp = ""
        for digit in number:
            temp += digit
            if temp in numbers and temp != number:
                return False
            numbers.add(number)
    return True