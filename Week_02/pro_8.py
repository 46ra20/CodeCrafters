n = int(input())
numbers = list(map(int,input().split()))
# print(numbers)
for i in range(n):
    if(numbers[i]<0):
        numbers[i]=2
    elif(numbers[i]>0):
        numbers[i]=1

print(numbers)