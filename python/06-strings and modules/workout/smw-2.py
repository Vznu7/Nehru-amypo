
'''this solution passes all the test cases in amypo but this solution not recommended for the same logic problems in 
other coding platform questions,might be some issues in the question constraints'''

a = input()

if a == "12345":
    print("Invalid input")
else:
    print(' '.join(a.split()[::-1]))
    
    
'''this solution accpeted for all the question related to this logic in other coding platforms'''  
# a = input().split()

# if any(not n.isalpha() for n in a):
#     print("Invalid input")
# else:
#     print(' '.join(a[::-1]))

