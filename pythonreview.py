#if statements and input/output---------------------------------
#RANK: 5

gainz = int(input("How much can you bench,homie?"))

if gainz < 10:
    print("Keep practicing, youll get swol in no time")
elif gainz <= 50:
    print("You're pretty good!")
elif gainz > 50:
    print("You're mega swol!")
    

#for loops-----------------------------------------------------------
#RANK: 4.5 (got help from jesse with the numbers)
for i in range (20,52,2):
    print(i)
    
    
#while loops--------------------------------------------------------
#RANK: 4.5 (got help from jesse AGAIN)
input1 = input("Enter any amphibian:")
while input1 != 'frog':
    print("Ribbit!")
    input1 = input("Enter any amphibian:")


#functions---------------------------------------------------------
#RANK: 3
def AvgTwoNums(x, y):
    z= (x+y)/2
    return z
print(AvgTwoNums(8,4))    
    

#lists----------------------------------------------------------------
#RANK: 2

marbles = [4, 6, 2, 9]
print(marbles[1])
for i in range (len(marbles)):
    print(marbles[i]*5)

#classes-------------------------------------------------------------
class Fruit:
    def __init__(self, t, w):
        self.Type = Type
        self.weight = weight
        self.isFresh = True
    def PrintInfo(self):
        print("Hi I am a", self.Type, ". I weigh", self.weight)
        self.isFresh = False
        
cherry = Fruit("Cherry")
apple = Fruit("Apple")

while True:
    cherry.PrintInfo()
    apple.PrintInfo()
