x= int(input())
word=[]

for i in range(1,x+1):
    word=input()
    y= int(len(word))-1
    mart=("%c%c"%(word[0], word[y]))
    print(mart)


    