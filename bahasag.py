x = input() 
  
print(x) 
print("translation =") 
 
for i in range(len(x)): 
    if x[i] in ["A", "I", "U", "E", "O", "a", "i", "u", "e", "o"] : 
        print(x[i] + "g" + x[i], end="") 
    else: 
        print(x[i], end="")
