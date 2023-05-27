def canConstruct(self, ransomNote: str, magazine: str) -> bool:
    md = {}

    for i in magazine:
        if i not in md:
            md[i] = 1
        else:
            md[i]+=1

    for i in ransomNote:
        if i in md:
            if md[i]>0:
                md[i]-=1
                if md[i]==0:
                    md.pop(i)
        else:
            return 0

    return 1

def main():
    ransomNote = "aa" 
    magazine = "ab"
    ans = canConstruct(ransomNote,magazine)
    print(ans)

main()