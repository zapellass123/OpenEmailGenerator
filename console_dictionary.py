import json
from difflib import get_close_matches
data = json.load(open("./data.json"))

run = True
def dictionary(word):
    word = word.lower()
    if word in data:
        return data[word]
    elif len(get_close_matches(word, data.keys()))>0:

        usr = input("Did you mean %s instead. Enter y if yes else n" % get_close_matches(word, data.keys())[0])
        if usr == "y":
            return data[get_close_matches(word, data.keys())[0]]
        elif usr == "n":
            return "Word not found. Check the word."

        else:
            return "We didn't understand your entry."

    else:
        return "Word not found. Check the word."

print("<<<<<<<<<  Console Dictionary using Json module >>>>>>>>")

while run:
    word = input("Enter a word: ")
    print("\n")
    w = dictionary(word)
    for i in w:
        print(i)
    print("\n")
    userinput = int(input("Choose the below option \n 1. For Continue \n 2. For exit press \n "))
    if userinput == 1 :
        run = True
    elif userinput == 2 :
        run = False
    else:
        print("Input is not correct.")
        run = False

print("Exiting....")
