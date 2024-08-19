#include<iostream>
#include<ctime>
int main()
{
    int num, guess;
    int tries = 0;
    srand(time(NULL));
    num = (rand()%100)+1;
    do{
       std::cout<<"Enter the num by guessing:";
       std::cin>>guess;
       tries++;
       if(guess>num){
        std::cout<<"Hint: The number is smaller\n";
       } 
       if(guess<num){
        std::cout<<"Hint: The number is greater\n";
       }
    }while (guess != num);
    std::cout<<"Congratulation you guess the number "<<num<<" in "<<tries;
    return 0;
}
