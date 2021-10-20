#include <iostream>
#include <string>
#include <ctime>

void Introduction(){
    std::cout << "\n\n\n\n   ____________________________________________________________________________________________________________________________________________\n";
    std::cout << "\n  | Hi, You are Mr X. TelecomInternational has hired you to crack the servers of an under cover company who have " << "5 High " << "Level secure servers     | \n";
    std::cout << "  | Boss: Mr X go to the airport, into the tarmack, there would be a private jet ready for you.                                                |  \n  | It will take you to the desired location. There are some servers to crack which have a three digit code.";
    std::cout << "\n  | Any Time you sense danger press Ctr+C to exit. You would be safe.                                                                          |";
    std::cout << "\n\n  | Best of Luck                                                                                                                               |\n  |____________________________________________________________________________________________________________________________________________|";
    // Print welcome messages to the terminal
    std::cout << "\n\n░█████╗███████╗░█████╗░░█████╗░██╗░░██╗  ████████╗██╗░░██╗███████╗\n";
    std::cout << "██╔══██╗██╔══██╗██╔══██╗██╔══██╗██║░██╔╝  ╚══██╔══╝██║░░██║██╔════╝\n";
    std::cout << "██║░░╚═╝██████╔╝███████║██║░░╚═╝█████═╝░  ░░░██║░░░███████║█████╗░░\n";
    std::cout << "██║░░██╗██╔══██╗██╔══██║██║░░██╗██╔═██╗░  ░░░██║░░░██╔══██║██╔══╝░░\n";
    std::cout << "╚█████╔╝██║░░██║██║░░██║╚█████╔╝██║░╚██╗  ░░░██║░░░██║░░██║███████╗\n";
    std::cout << "░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝  ░░░╚═╝░░░╚═╝░░╚═╝╚══════╝\n";

    std::cout<<"░██████╗███████╗██████╗░██╗░░░██╗███████╗██████╗░\n";
    std::cout<<"██╔════╝██╔════╝██╔══██╗██║░░░██║██╔════╝██╔══██╗\n";
    std::cout<<"╚█████╗░█████╗░░██████╔╝╚██╗░██╔╝█████╗░░██████╔╝\n";
    std::cout<<"░╚═══██╗██╔══╝░░██╔══██╗░╚████╔╝░██╔══╝░░██╔══██╗\n";
    std::cout<<"██████╔╝███████╗██║░░██║░░╚██╔╝░░███████╗██║░░██║\n";
    std::cout<<"╚═════╝░╚══════╝╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚═╝░░╚═╝\n\n\n";

}

bool PlayGame(int Difficulty)
{

    std::cout << "Boss : Breaking into a level  " << Difficulty << " secure server \n";
    std::cout << "Boss : Enter the code with spaces between each digit\n";
    std::cout << "Enter the correct code to continue...\n";


    //Declare 3 number code
    const int CodeA = rand()%Difficulty+Difficulty;
    const int CodeB = rand()%Difficulty+Difficulty;
    const int CodeC = rand()%Difficulty+Difficulty;

    const int CodeSum = CodeA+CodeB+CodeC;
    const int CodeProduct = CodeA*CodeB*CodeC;

    //Pint sum and product
    std::cout << std::endl;
    std::cout << " + There are three numbers in the code: \n";
    std::cout << " \n + The sum of the numbers are : " << CodeSum << std::endl;
    std::cout << " + The product of the numbers are :" << CodeProduct << std::endl;
    std::cout << std::endl;

    int GuessA,GuessB,GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessProduct = GuessA*GuessB*GuessC;
    int GuessSum = GuessA+GuessB+GuessC;

    // Seeing if the guess was right
    if ( GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "\n***Boss : Well Done Mr X you have cracked a server ***\n" << "\n *Now go for the next one!!**\n";
        return true;
    }else{
        std::cout << "\n***Boss : Error Wrong Code!! Be Careful Mr X, Try Again!!!***\n\n";
        return false;
    }
}

int main() 
{   
    Introduction();

    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxLevelDifficulty = 5;
    while(LevelDifficulty <= MaxLevelDifficulty)
    {
        bool bLevelFinished = PlayGame(LevelDifficulty);
        if (bLevelFinished)
        {
            ++LevelDifficulty;
        }
        std::cin.clear();
        std::cin.ignore();
    }
    std::cout << "\n\nCongratets! You Successfully Cracked the Servers... Mission Accomplished\n";
    return 0;
}