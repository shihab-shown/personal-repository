# This is a quiz problem from a different section of CSE115
# But in Python
N=int(input("Enter the amount you want to withdraw: "))
if N>=500:
  if N%500==0:
    if N<=20000:
      if N%50==0:
        print("TRANSICTION SUCCESSFUL")
      else: print("Error")
    else: print("EXCEEDED AMOUNT") 
  else: print("INVALID VALUE")  
else: print("INVALID AMOUNT")