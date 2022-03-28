n = 18
x = 9
print("Guess the Number.\n")
print("You've 9 chances to guess the number.\n")

a = int(input("Enter The Number :-\n"))
while (a != 18):
    if a < 18:
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\nWrong!!\nEnter a Greater Number.")
    elif a > 18:
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\nWrong!!\nEnter a Smaller Number.")
    print("You are left with", x-1 , "chances.")
    a = int(input("Enter Again:\n"))
    x = x-1
    if x==1:
        print("Game Over.\n press Enter to Exit.")
        exit = input()
    continue
    
if a==18:
    print("Congratulations!!!\nYou've Guessed the correct number.")

if a < 18:
    print("Wrong!!\nEnter a Greater Number.")
    

elif a > 18:
    print("Wrong!!\nEnter a Smaller Number.")
    
