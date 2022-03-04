def fizz_buzz(num):
  if num%3==0 and num%5==0:
    return "fizz_buzz"
  elif num%3==0:
    return "fizz"
  elif num%5==0:
    return "buzz"
  return num

num=int(input("Enter any number: "))
print(fizz_buzz(num))