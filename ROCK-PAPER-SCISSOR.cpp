#include<iostream>
#include<ctime>
char userChoice();
char computerchoice();
void showchoice(char choice);
void Winner(char player,char computer);
int main(){
    char player;
    char computer;
    player = userChoice();
    std::cout<<"Player choose: ";
    showchoice(player);
    computer = computerchoice();
    std::cout<<"\nComputer choose: ";
    showchoice(computer);
    Winner(player, computer);

}
char userChoice(){
    char choice;
    do{
    std::cout<<"****************************************************\n";
    std::cout<<"Rock-Paper-Scissor\n";
    std::cout<<"For rock choose 'r'\n";
    std::cout<<"For aper choose 'p'\n";
    std::cout<<"For scissor choose 's'\n";
    std::cout<<"Enter you choice:";
    std::cin>>choice;
    }while(choice !='r'&& choice != 'p'&& choice != 's');
    return choice;
}
char computerchoice(){
    int choice;
    srand(time(NULL));
    choice = (rand()%3)+1;
    switch(choice){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showchoice(char choice){
    switch(choice){
        case 'r': std::cout<<"ROCK";
        break;
        case 'p': std::cout<<"PAPER";
        break;
        case 's': std::cout<<"SCISSOR";
        break;
    }
}
void Winner(char player,char computer){
    if(player == 'r'){
        if(computer == 'r'){
            std::cout<<"\n SHEESH! its a tie!";
        }if(computer == 'p'){
            std::cout<<"\n HAHA! You lose!";
        }
        if(computer == 's'){
            std::cout<<"\nURG! You won!";
        }
    }
    if(player == 'p'){
        if(computer == 'p'){
            std::cout<<"\n SHEESH! its a tie!";
        }if(computer == 's'){
            std::cout<<"\n HAHA! You lose!";
        }
        if(computer == 'r'){
            std::cout<<"\nURG! You won!";
        }
    }
    if(player == 's'){
        if(computer == 's'){
            std::cout<<"\n SHEESH! its a tie!";
        }if(computer == 'r'){
            std::cout<<"\n HAHA! You lose!";
        }
        if(computer == 'p'){
            std::cout<<"\nURG! You won!";
        }
    }
}