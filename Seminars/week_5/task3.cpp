#include <iostream>
#include <cmath>

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

    int main(){
        int n;
        std::cin >> n;
        std::cout << isPrime(n) << std::endl;
        return 0;
    }