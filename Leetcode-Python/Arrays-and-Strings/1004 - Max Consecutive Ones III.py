def longestOnes(nums, k):
    # maintain start and end pointer
    start = end = 0
    # maintain max length of 1's and current length of 1s
    max_l = curr_l = 0
    kc = k
    while end<len(nums):
        curr_l=0
        zc = 0
        kc=k
        # set start pointer to next index of start 0 if we run out of k
        if end!=0:
            if ns+1<len(nums):
                start = ns+1
                end = ns+1
        while end<len(nums) and (nums[end]==1 or kc>=0):
            if nums[end]==0:
                if kc == k:
                    ns = end
                if kc==0:
                    break
                else:
                    kc = kc - 1
                    curr_l = curr_l + 1
            else:
                curr_l = curr_l + 1
            end = end + 1

        max_l = max(curr_l, max_l)
    return max_l
    """
    :type nums: List[int]
    :type k: int
    :rtype: int
    """

def main():
    nums = [1,1,1,0,0,0,1,1,1,1,0]
    k = 2
    ans = longestOnes(nums,k)
    print(ans)

main()

