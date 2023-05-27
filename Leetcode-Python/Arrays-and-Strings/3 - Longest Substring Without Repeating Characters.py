def lengthOfLongestSubstring(s: str) -> int:
    myset = set()
    x = y = 0
    val=0
    mval=-1
    for i in range(len(s)):
        y=i

        if s[i] not in myset:
            #print("added")
            #print(s[i])
            myset.add(s[i])
            val = y-x+1
            mval = max(val,mval)
        else:
            while x<y:
                if s[x] is s[y]:
                    #print(i)
                    #print(s[x],s[y])
                    x+=1
                    break
                else:
                    #print(i)
                    #print(s[x],s[y])
                    myset.remove(s[x])
                    x+=1
        #print(x,y)
        #print(myset)
        #print("**********")
    return mval

def main():
    s = "aaxyabcad" 
    ans = lengthOfLongestSubstring(s)
    print(ans)

main()