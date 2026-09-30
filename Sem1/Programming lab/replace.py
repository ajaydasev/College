s=input("Enter a word:")
first=s[0]

result=first+s[1:].replace(first,'$')
print(result)
