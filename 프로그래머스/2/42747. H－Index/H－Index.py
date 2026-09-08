#그냥 이즁  for문으로 구할수도 있을 것 같은데 그건 아닌 것 같단 말이지..음...
# 정렬을 떄리고 -> 그럼 순서대로 나오겠지 -> 그게 각 요소보다 큰가? 라고 했을떄 돌리는 i의 변수가 몇번이상 나왔는지를 물어보는 거겠지 -> 그럼 i가 그 요소의 값도가 작거나 같으면 만족하는 거겠지? 그 값을 계속해서 갱신하면 되는거겠지?
def solution(citations):
    answer = 0
    citations.sort()
    for i in range(len(citations)):
        h = len(citations) - i

        if citations[i] >= h:
            return h

    return answer
