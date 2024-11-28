#include <iostream>
#include <chrono>
#include <thread>


int main() {

    std::cout << "Welcome to the number guess game!" << std::endl;
    std::chrono::seconds dura( 2 );
    std::this_thread::sleep_for( dura );
    std::cout << "You will have to pick a number between 1 and 10" << std::endl;
    std::this_thread::sleep_for( dura );
    std::cout << "If you guess right you win!" << std::endl;
    std::this_thread::sleep_for( dura );

    int randomNumber = rand() % 10 + 1;

    

    bool Guessing = true;
    while (Guessing) {
        int number;
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> number;
        bool guessing = false;
        if (number == randomNumber) {
            std::cout << "You win!" << std::endl;
            Guessing = false;
        } else {
            std::cout << "You lose!" << std::endl;
        }
    }


   
}