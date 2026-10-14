s=input("Enter a string:")
s=s.lower()
for ch in set(s):
    print(ch,":",s.count(ch))
    
