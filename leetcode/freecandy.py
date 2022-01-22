

def minimumCost(cost) -> int:
    mincost = 0
    cost.sort(reverse=True)
    # print(cost)
    for idx, price in enumerate(cost):
        index = idx + 1
        if(index % 3 != 0):
            mincost = mincost + price
    print(mincost)


minimumCost([6])
