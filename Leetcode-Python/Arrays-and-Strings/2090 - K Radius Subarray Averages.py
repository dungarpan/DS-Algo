import math

def getAverages(self, nums, k):
    if len(nums)==0:
        return nums

    if (2*k)+1>len(nums):
        for i in range(len(nums)):
            nums[i] = -1
        return nums
    else:
        ans = []
        for i in range(len(nums)):
            ans.append(nums[i])
        sum = 0
        avg = 0
        for i in range((2*k)+1):
            sum += nums[i]
        #print(sum)
        avg = sum/((2*k)+1)
        ans[k] = (int)(math.floor(avg))
        for i in range(k+1,len(nums)-k):
            #print(i)
            #print(nums[i-k-1])
            #print(nums[i+k])
            sum += -nums[i-k-1] + nums[i+k]
            avg = sum/((2*k)+1)
            #print(sum)
            ans[i] = (int)(math.floor(avg))

        for i in range(k):
            ans[i]=-1
        for i in range(len(nums)-k,len(nums)):
            ans[i]=-1
        return ans

def main():
    nums = [7,4,3,9,1,8,5,2,6]
    k=2
    ans = getAverages(nums,k)
    print(ans)

main()