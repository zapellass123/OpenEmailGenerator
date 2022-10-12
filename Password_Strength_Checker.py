Upper_Case_Count = 0
Lower_Case_Count = 0
Digit_Count = 0 
Special_Character_Count = 0

PSWD = input("ENTER PASSWORD : ")

if len(PSWD) < 6 or len(PSWD) > 16:
    print("Weak Password !!!")
else:
    for i in PSWD:
        if i.isalpha():
            if i.isupper():
                Upper_Case_Count +=1
            elif i.islower():
                Lower_Case_Count += 1
        elif i.isdigit():
            Digit_Count +=1
        else:
            Special_Character_Count += 1

    if Upper_Case_Count == 0 or Lower_Case_Count == 0 or Digit_Count == 0 or Special_Character_Count == 0:
        print("Weak Password !!!")
    else:
        print("Strong Password :)")
        