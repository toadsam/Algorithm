def solution(operations):
    queue = []

    for operation in operations:
        command, number = operation.split()
        number = int(number)

        if command == 'I':
            queue.append(number)

        elif command == 'D' and queue:
            if number == 1:
                queue.remove(max(queue))
            else:
                queue.remove(min(queue))

    if not queue:
        return [0,0]
    return [max(queue), min(queue)]
