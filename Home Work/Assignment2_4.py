x=int(input("Enter the value of x: "))
n=int(input("Enter the value of n: "))
fact=1
c=1
sum=1
for i in range(1,n+1,1):
  fact=fact*i
  c=c*x
  sum=sum+(c/fact)
print(sum)