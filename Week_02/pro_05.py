n = input()
x = (list(str(n)))

if(int(x[0])%int(x[1])==0 or int(x[1])%int(x[0])==0):
    print("Yes")
else:
    print("No")