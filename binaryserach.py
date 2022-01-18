
a = [1, 2, 3, 4, 5, 8, 6, 8, 9, 10, ]
a.reverse()
print(a)
inp = (int)(input("enter the serach Item : "))


def bin_search(query, a):
    found = False
    i = 0
    mid = -1
    ub = a.__len__()
    lb = 0
    while(lb != ub):
        mid = (int)((ub + lb) / 2)
        print(f" iteration = {i}  mid = {mid}")
        i += 1
        if(a[mid] == query):
            print(f"{query} found at {mid}")
            found = True
            return found
        elif(a[mid] > query):
            lb = mid
        else:
            ub = mid
    return found


if bin_search(inp, a):
    pass
else:
    print("Not Found")
