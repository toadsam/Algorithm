from collections import Counter

def solution(nums):
    count = len(nums)/2
    c_nums = Counter(nums)

    if len(c_nums) > count:
        return count
    else:
        return len(c_nums)
