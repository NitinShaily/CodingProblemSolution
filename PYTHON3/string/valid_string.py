#quetion: Sherlock and the Valid String in hackerrank

from collections import Counter
# Complete the isValid function below.
def isValid(s):
    fre = {}
    flag = 0
    maxi=0
    
    
    #creating dictionary with char as key and their frequencies as value
    for i in s:                             
        if i not in fre.keys():
            fre[i]=1
        else:
            fre[i]+=1
    
    freq = fre.values()   #list of frequencies
    occurence_count = Counter(freq) 
    maxi = occurence_count.most_common(1)[0][0]       #highest frequency
    
    for val in freq:
        if val == maxi:
            pass
        else:
            if flag == 0:
                val-=1
                if val == 0:
                    pass 
                    
                elif val != maxi:
                    return 'NO'
                flag = 1
            else:
                return 'NO'
                    
    return 'YES'
