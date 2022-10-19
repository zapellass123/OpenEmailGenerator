n = int(input())
arr = list(map(int,input().split()))[:n]
x = 0 
y = 0
for i in range(0,n):
    if arr[i]%2==0:
        x += 1
    else:
        y += 1 
if x > y:
    print("READY FOR BATTLE")
else:
    print("NOT READY")
