def search(nums, target: int) -> int:
    lb = 0
    ub = len(nums)
    i = 0
    mid = 0
    while(lb == mid):
        print(f"i ={i} lb ={lb} ub={ub}")
        mid = (int)((lb+ub)/2)
        if(nums[mid] == target):
            return mid
        elif(target > nums[mid]):
            lb = mid
        else:
            ub = mid
    return -1


print(search([-1, 0, 3, 5, 9, 12], 9))
