import random

def playGame():

    choices = ["rock", "paper", "scissors"]

    max = int(input("Select the total points (5, 10 or 20)? "))

    scoreComputer = 0
    scorePlayer = 0

    while scoreComputer < max and scorePlayer < max:

        computer = random.choice(choices)
    
        player = input("rock, paper or scissors?: ").lower()

        if player == computer:
            print("computer: ", computer)
            print("player: ", player)
            print("Tie!")
            print("Computer: " + str(scoreComputer) + "\nYou: " + str(scorePlayer))

        elif player == "rock":
            if computer == "paper":
                print("computer: ", computer)
                print("player: ", player)
                print("You lose!")
                scoreComputer += 1
                print("Computer: "+ str(scoreComputer) + "\nYou: " + str(scorePlayer))

            if computer == "scissors":
                print("computer: ", computer)
                print("player: ", player)
                print("You win!")
                scorePlayer += 1
                print("Computer: "+ str(scoreComputer) + "\nYou: " + str(scorePlayer))

        elif player == "scissors":
            if computer == "paper":
                print("computer: ", computer)
                print("player: ", player)
                print("You win!")
                scorePlayer += 1
                print("Computer: "+ str(scoreComputer) + "\nYou: " + str(scorePlayer))

            if computer == "rock":
                print("computer: ", computer)
                print("player: ", player)
                print("You lose!")
                scoreComputer += 1
                print("Computer: "+ str(scoreComputer) + "\nYou: " + str(scorePlayer))

        elif player == "paper":
            if computer == "rock":
                print("computer: ", computer)
                print("player: ", player)
                print("You win!")
                scorePlayer += 1
                print("Computer: "+ str(scoreComputer) + "\nYou: " + str(scorePlayer))

            if computer == "scissors":
                print("computer: ", computer)
                print("player: ", player)
                print("You lose!")
                scoreComputer += 1
                print("Computer: "+ str(scoreComputer) + "\nYou: " + str(scorePlayer))

    if scoreComputer > scorePlayer:
        print("Computer wins the game!")
        print("Computer: "+ str(scoreComputer) + "\nYou: " + str(scorePlayer))
    else:
        print("You won the game!")
        print("Computer: "+ str(scoreComputer) + "\nYou: " + str(scorePlayer))

    response = input("\n----- Play again? (y/n) -----: ").lower()

    if response == "y":
        scoreComputer = 0
        scorePlayer = 0
        playGame()
    else:
        print("Bye!")


response = input("Do you want to play Rock, Paper & Scissors? (y/n): ").lower()
if response == "y":
    playGame()
else:
    print("Ok bye!")

