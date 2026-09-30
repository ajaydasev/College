list1=input("Enter the color:").split()
list2=input("Enter the color:").split()
for c in list1:
    if c not in list2:
        print(c)
