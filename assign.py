print("lol")

board = [["",""],["",""],["",""],["",""]]

rows = 5
col = 5
dash = "+----"

def printBoard():
    for x in range (rows):
        for y in range (col):
            print("+----", end ="")
        for i in range(4):
            for a in range(rows):
                print("k")
        print("\n") 
        print("\n")

        
printBoard()