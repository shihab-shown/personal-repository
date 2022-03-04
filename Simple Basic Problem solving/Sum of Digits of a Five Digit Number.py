num=int(input())
res=num
sum=0
i=1
while i<=5 :
  rem=res%10
  res/=10
  res=round(res)
  sum+=rem
  i+=1
print(sum)
