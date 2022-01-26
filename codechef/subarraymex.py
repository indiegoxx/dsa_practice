from random import randint
t = (int)(input())
tests = []

for i in range(t):
    tmp = input()
    tests.append(tmp)


def check_result(str):
    tmp = list(map(int, str.split()))
    n = tmp[0]
    k = tmp[1]
    x = tmp[2]
    if(x > k or n < k):
        print(-1)

    else:
        a = []
        flag = 0
        while(flag == 0):
            for i in range(n):
                ai = randint(0, x-1)
                a.append(ai)
            nList = set(a)
            mex = 0
            while mex in nList:
                mex += 1
            if(mex < x):
                flag = 0
                a = []
            else:
                flag = 1
        print(*a, sep=" ")
        # pass

#


for i in tests:
    check_result(i)
