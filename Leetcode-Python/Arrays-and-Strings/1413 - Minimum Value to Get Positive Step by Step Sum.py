def minStartValue(self, nums):
    if len(nums)==1:
        if(abs(nums[0])==nums[0]):
            return 1
        else:
            return abs(nums[0])+1
    
    mini=1
    for i in range(0,len(nums)):
        if i==0:
            sum=nums[i]
        else:
            sum+=nums[i]
        mini = min(mini,sum)
    if mini<=0:
        return abs(mini)+1
    else:
        return 1
    """
    :type nums: List[int]
    :rtype: int
    """

def main():
    nums = [-3,2,-3,4,2]
    ans = minStartValue(nums)
    print(ans)

main()