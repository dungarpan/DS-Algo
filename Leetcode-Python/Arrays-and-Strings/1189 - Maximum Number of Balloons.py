def maxNumberOfBalloons(self, text):
    d={}
    for i in text:
        if i not in d:
            d[i] = 1
        else:
            d[i]+=1

    min1=10000
    min2=10000
    for i in "balloon":
        if i in d and i in ['b','a','n']:
            min1 = min(d[i],min1)
        if i in d and i in ['l','o']:
            min2 = min(d[i],min2)
        if i not in d:
            return 0

    min2 = min2//2
    return min(min1,min2)

def main():
    text = "loonbalxballpoon"
    ans = maxNumberOfBalloons(text)
    print(ans)

main()