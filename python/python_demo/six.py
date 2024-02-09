'''first=int(input("A:"))
second=int(input("B:"))
operater=input("Add/Sub/Multi/Divided")
if(operater=="Add"):
    print(first+second)
elif(operater=="Sub"):
    print(first-second)
elif(operater=="Multi"):
    print(first*second)
elif(operater=="Divided"):
    print(first/second)
else:
    print("Invalid operater")'''


print("NESTED IF")

'''age=int(input("Person age"))
mark=int(input("Person mark"))
if(age==18) and (mark>=500):
        
        print("your Eligible for group 4")
if(age>=21) and (mark>=900):
        
        print("your Eligible for group 1")
             

else:
        print("your not Eliglble")'''


print("--------------------------------------------------------------------------")

percentage=int(input("student percentage"))
attendence=int(input("student attendence"))
if(percentage>=90) or (attendence>=95):
    name=(input("student name"))
    details=(input("student full details"))
    print("your selected in first group")
elif(percentage>=75) and (attendence==85):
    print("your selcted in second group")
elif(percentage>=70) and (percentage<75):
    print("your selected in third group")
else:
    print("last group")








