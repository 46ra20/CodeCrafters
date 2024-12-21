n = int(input())
numbers = list(map(int,input().split()))

for i in range(n):
    if(numbers[i]<11):
        print('A[',i,']=',numbers[i])