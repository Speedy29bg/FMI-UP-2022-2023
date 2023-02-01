#include <iostream>
#include <cmath>
#include <string>


void welcome(){
    std::cout << "Welcome to the program!" << std::endl;
}

void help(){
    std::cout << "Welcome to the program!" << std::endl;
    std::cout << "1. Welcome - prints a welcome message" << std::endl;
    std::cout << "2. Help - prints the program's functionalities" << std::endl;
    std::cout << "3. Square - reads a number in the interval [-10; 10] from the standard input and prints its square" << std::endl;
    std::cout << "4. Factorial - reads a number in the interval [0; 20] and prints its factorial" << std::endl;
    std::cout << "5. Primes - reads a number in the interval [1; 100] and finds all prime numbers smaller than it" << std::endl;
    std::cout << "6. Exit - terminates the program" << std::endl;
}

int square(int n){
    return n * n;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

bool isPrime (int n){
    if (n == 1){
        return false;
    }
    int temp = sqrt(n);
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

void primes(int n){
    for (int i = 1; i < n; i++){
        if (isPrime(i)){
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main(){
    int n;
    std::string command;
    while (true){
        std::cin >> command;
        if (command == "Welcome"){
            welcome();
        }
        else if (command == "Help"){
            help();
        }
        else if (command == "Square"){
            std::cin >> n;
            if (n >= -10 && n <= 10){
                std::cout << square(n) << std::endl;
            }
            else{
                std::cout << "Invalid input!" << std::endl;
            }
        }
        else if (command == "Factorial"){
            std::cin >> n;
            if (n >= 0 && n <= 20){
                std::cout << factorial(n) << std::endl;
            }
            else{
                std::cout << "Invalid input!" << std::endl;
            }
        }
        else if (command == "Primes"){
            std::cin >> n;
            if (n >= 1 && n <= 100){
                primes(n);
            }
            else{
                std::cout << "Invalid input!" << std::endl;
            }
        }
        else if (command == "Exit"){
            break;
        }
        else{
            std::cout << "Invalid command!" << std::endl;
        }
    }
    return 0;
}
