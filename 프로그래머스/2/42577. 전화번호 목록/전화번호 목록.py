#정렬을 하면 제일 앞에 있는 순서대로 해서 startswith라는 메서드를 활용해서 만들기
def solution(phone_book):

    phone_book.sort()
    answer = True
    for i in range(len(phone_book)-1):
        if phone_book[i+1].startswith(phone_book[i]):
            return False

    return answer
