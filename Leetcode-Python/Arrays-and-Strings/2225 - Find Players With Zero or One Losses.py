def findWinners(self, matches):
    a ={}
    for i in matches:
        if i[0] not in a:
            a[i[0]] = 0
        else:
            pass
        if i[1] not in a:
            a[i[1]] = 1
        else:
            a[i[1]]+=1
    
    ans = []
    zero_l = []
    one_l = []
    for k,v in a.items():
        if v == 0:
            zero_l.append(k)
        elif v == 1:
            one_l.append(k)

    zero_l.sort()
    one_l.sort()
    ans.append(zero_l)
    ans.append(one_l)
    return ans

def main():
    nums = [7,4,3,9,1,8,5,2,6]
    ans = findWinners(nums)
    print(ans)

main()