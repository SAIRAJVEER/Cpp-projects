#include<iostream>
int main(){
    std::string array[] = {"1. What is your Name?","2.What is your age?","3.What is your height?", "4. Do you have a girlfriend?"};
    std::string option[][4] ={{"A.SAI\n", "B.Pratap\n", "3.Rajveer\n", "4.None\n"},
    {"A.18\n", "B.19\n", "C.20\n", "D.21\n"}, {"A.108\n", "B.110\n", "C.120\n","D.None\n"},
    {"A.Yes\n", "B.No\n", "C.Never will\n", "D.fortune like popatlal\n"}};
    char choice;
    int score = 0;
    char correctOption[] = {'A', 'C', 'D', 'D'};
    int size1 = sizeof(array)/sizeof(array[0]);
    int size2 = sizeof(option)/sizeof(option[0]);
    for(int i=0; i<size1; i++){
        std::cout<<"\n**************************************\n";
        std::cout<<array[i];
        std::cout<<"\n***************************************\n";
        for(int j =0; j<size2; j++){
            std::cout<<option[i][j];
        }
        std::cout<<"Enter your choice: ";
        std::cin>>choice;
        if(choice == correctOption[i]){
            std::cout<<"\nYou choose correct option\n";
            score += 5;
        }
        else{
            std::cout<<"\n You choose wrong option\n";
            std::cout<<"You score: "<<score;
            return 0;
        }
    }
    std::cout<<"You score: "<<score;
}