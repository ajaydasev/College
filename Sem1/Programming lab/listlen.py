list1=list(map(int,input("Enter the first list numbers:").split()))
list2=list(map(int,input("Enter the second list numbers:").split()))
print(list1)
print(list2)
if len(list1)==len(list2):
    print("Both lists are same length")
else:
    print("Both lists are of different length")

if sum(list1)==sum(list2):
    print("Both lists have same sum")
else:
    print("Both lists different sum")

if set(list1)& set(list2):
    print("values occurs in both lists")
else:
    print("No common value")
