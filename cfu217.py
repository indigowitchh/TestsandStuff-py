def targetScore (hit):
    if hit == 1:
        print("Bullseye!")
        return 50
    elif hit == 2:
        return 40
    elif hit == 3:
        return 30
    elif hit == 4:
        return 20
    elif hit == 5:
        return 10
    else:
        print("Sorry not an option!")
    
score = (int(input("Enter is your level 1-5?")))
print("Your score is:", targetScore(score))
