def longestOnes(nums, k):
    l=0
    for r,val in enumerate(nums):
        k -= (1-val)
        if k<0:
            k += (1-nums[l])
            l+=1

    return r-l+1
    """
    :type nums: List[int]
    :type k: int
    :rtype: int
    """

def main():
    nums = [1,1,1,0,0,0,1,1,1,1,0]
    nums_fail = [0,0,1,1,1,0,0]
    k = 2
    k_fail=0
    ans = longestOnes(nums_fail,k_fail)
    print(ans)

main()

