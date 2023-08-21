first=0 
second=1 
count=0 
n=int(input("Enter the range: "))
while count<n:
  if count<=1:
    fibo=count
  else:
    fibo=first+second
    first=second
    second=fibo
  print(fibo, end=" ")
  count=count+1     
