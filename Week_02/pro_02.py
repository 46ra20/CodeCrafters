import random
a,b,c,d = map(int,input().split())

operation = ['a+b+c','a+b*c','a+b-c','a-b+c','a-b*c','a-b-c','a*b+c','a*b*c','	a*b-c']
flg = False
for i in range(9):
    if(eval(operation[i])==d):
        flg=True
if flg:
    print("Yes")
else:
    print("No")
# print(eval(operation[0]))
# if(a+b+c==d):
#     print("Yes")

# elif(a+b-c==d):
#     print("Yes")
# elif(a-b-c==d):
#     print("Yes")
# elif(a+b*c==d):
#     print("Yes")
# elif(a-b+c==d):
#     print("Yes")
# elif(a-b*c==d):
#     print("Yes")
# elif(a-b-c==d):
#     print("Yes")
# elif(a*b+c==d):
#     print("Yes")
# elif(a*b*c==d):
#     print("Yes")
# elif(a*b-c==d):
#     print("Yes")
# else:
#     print("No")				