def perfectnum(num):
  sum=0
  for i in range(1,num+1,1):
    if num%i==0:
      sum+=i
      if sum == num:
        return num
      else: continue
    else: continue
  return 0


range_=int(input("Enter the range: "))
num=1
for i in range(1,range_+1,1):
  x=perfectnum(num)
  if x!=0:
    print(x)
    num+=1
  else:
    num+=1

