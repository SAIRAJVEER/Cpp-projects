#include<iostream>
double showBalance(double balance){
    std::cout<<"The remaining balance in you account is $"<<balance;
    return balance;
}
double deposit(){
    double amount = 0;
    std::cout<<"Enter deposit money:";
    std::cin>>amount;
    return amount;
}
double withdraw(double balance){
    double amount = 0;
    std::cout<<"Enter withdraw money:";
    std::cin>>amount;
    return amount;
}
int main(){
    double balance;
    std::cout<<"Enter your balance money:";
    std::cin>>balance;
    int choice;
    std::cout<<"************Bank*************\n";
    std::cout<<"Select the option given below:\n";
    std::cout<<"1. Show balance\n";
    std::cout<<"2. Deposit money\n";
    std::cout<<"3. Withdraw money\n";
    std::cout<<"4. Exit\n";
    do{
    std::cout<<"\nEnter your choice:";
    std::cin>>choice;
    switch(choice){
        case 1: showBalance(balance);
        break;
        case 2: balance += deposit();
        showBalance(balance);
        break;
        case 3: balance -= withdraw(balance);
        showBalance(balance);
        break;
        case 4: std::cout<<"Thankyou for visiting";
    }
    }while(choice != 4);
    return 0;

}