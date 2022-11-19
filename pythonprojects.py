import tabulate
userinput=input('''Enter 3 to create a new directory''')
t=[]
userinput=int(userinput)
no_of_contacts=int(input('''
Enter the number of contacts 
you want to enter!'''))                           
i=0
while i<no_of_contacts:
    i=i+1
    if userinput==1:
        name=input('''Enter the name:''')
        c=input('''Enter the number:''')
        adress=input('''Enter the adress:''')
    if userinput==2:
        name=input('''Enter the name:''')
        c=input('''Enter the number:''')
        adress=input('''Enter the adress:''')
        
    if userinput==3:
        di=input('''Enter the directory name:''')
        name=input('''Enter the name:''')
        c=input('''Enter the number:''')
        adress=input('''Enter the adress:''')  
        li=[di,name,c,adress]
        t.append(li)
print(t)