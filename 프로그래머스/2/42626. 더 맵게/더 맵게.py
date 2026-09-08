import heapq

def solution(scoville, k):
    answer = 0
    heapq.heapify(scoville)
    #일단 heapq를 사용해서 앞에 최솟값이 오도록 만들기
    #첫번째 값이 k보다 작으면 첫번째, 두번쨰 값을 넣고 만들기

    while True:

        if scoville[0] >= k:
            return answer

        if scoville[0] < k:
            if len(scoville) < 2:
                return -1

        first = heapq.heappop(scoville)
        second = heapq.heappop(scoville)

        new_num = first + (second*2)

        heapq.heappush(scoville,new_num)

        answer+=1
