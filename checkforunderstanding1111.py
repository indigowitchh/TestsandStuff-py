import random

candy = [0, 0, 0, 0, 0, 0]

num = random.randrange(0,100)

def candies():
    if num < 15:
        candy[0] = random.randrange(1,4)
        print("You got", candy[0], "butterfingers!")
    elif num < 35:
        candy[1] = random.randrange(1,4)
        print("You got", candy[1], "hersheys!")
    elif num < 70:
        candy[2] = random.randrange(1,4)
        print("You got", candy[2], "PB cups!")
    elif num < 80:
        candy[3] = random.randrange(1,4)
        print("You got", candy[3], "mnms!")
    elif num < 98:
        candy[4] = random.randrange(1,4)
        print("You got", candy[4], "sour patch kids!")
    else:
        candy[5] = random.randrange(1,4)
        print("You got a rock.")
    

candies()
candies()        
candies()        
candies()
candies()

print("Final candy count for each kind:", candy)
