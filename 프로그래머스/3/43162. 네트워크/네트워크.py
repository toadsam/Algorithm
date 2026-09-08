#bfs로 푸는 게 맞는 것 같은데...
#visited로 해서 각 값을 만들고 이동하면 True로 바꾸고 가는 게 맞는 방향인 것 같은데...
#하나의 노드르 선택해서 들어가 -> 만약 1이다? 근데 방문을 아직 안 했다? 그럼 따라 들어가 계속 따라들어가 ->
#answer에 1을 언제 추가할까? ->
def solution(n, computers):

    visited = [False]*n
    answer = 0
    def dfs(cur_computer):
        for i in range(len(cur_computer)):
            if visited[i] == False and cur_computer[i] == 1:
                visited[i] = True
                dfs(computers[i])
    for i in range(len(computers)):
        if visited[i] == False:
            visited[i] = True
            answer+=1
            dfs(computers[i])
    return answer
