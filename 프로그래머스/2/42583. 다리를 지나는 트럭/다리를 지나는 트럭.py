from collections import deque

def solution(bridge_length, weight, truck_weights):
    time = 0
    bridge = deque([0] * bridge_length)
    trucks = deque(truck_weights)

    while trucks or sum(bridge) > 0:
        time += 1

        # 1초가 지나면 맨 앞 칸은 다리를 빠져나감
        bridge.popleft()

        # 아직 기다리는 트럭이 있다면
        if trucks:
            # 다음 트럭을 올릴 수 있는지 확인
            if sum(bridge) + trucks[0] <= weight:
                bridge.append(trucks.popleft())
            else:
                bridge.append(0)

        # 기다리는 트럭이 더 없으면 빈 칸만 넣음
        else:
            bridge.append(0)

    return time
