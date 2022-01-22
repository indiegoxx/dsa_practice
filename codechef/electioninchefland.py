# from unittest import TestCase


t = (int)(input())
tests = []
for i in range(t):
    tmp = input()
    tests.append(tmp)


test = ['12 51 16', '15 15 15']

a = ['A', 'B', 'C', 'NOTA']


def check_result(str):
    tmp = list(map(int, i.split()))
    flag = 3
    for idx, j in enumerate(tmp):
        if j > 50:
            flag = idx
            return a[flag]
    return a[flag]


for i in tests:
    print(check_result(i))
