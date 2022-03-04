salary=int(input("Enter the salary: "))

if salary>=0 and salary<=400 :
  earned=salary*(15.0/100.0)
  newsalary=salary+earned
  print("New Salary: ",newsalary)
  print("Money earned: ",earned)
  print("In percentage: 15")

elif salary>=400.01 and salary<=800 :
  earned=salary*(12.0/100.0)
  newsalary=salary+earned
  print("New Salary: ",newsalary)
  print("Money earned: ",earned)
  print("In percentage: 12")

elif salary>=800.01 and salary<=1200 :
  earned=salary*(10.0/100.0)
  newsalary=salary+earned
  print("New Salary: ",newsalary)
  print("Money earned: ",earned)
  print("In percentage: 10")

elif salary>=1200.01 and salary<=2000 :
  earned=salary*(7.0/100.0)
  newsalary=salary+earned
  print("New Salary: ",newsalary)
  print("Money earned: ",earned)
  print("In percentage: 7")
