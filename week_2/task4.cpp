/*Напишете програма, която приема символ от клавиатурата и в зависимост от това какъв е:
цифра, малка или голяма латинска буква, прави лседните промени:
- ако е малка латинска буква да я направи главна
- ако е главна латинска буква да я направи малка 
- ако е цифра да я повдигне на квадрат и го принтира.*/
#include <iostream>
int main(){
    char symbol;
    std::cin >> symbol;
    if(symbol >= 'a' && symbol <= 'z'){
        symbol -= 32;
        std::cout << symbol << std::endl;
    }else if(symbol >= 'A' && symbol <= 'Z'){
        symbol += 32;
        std::cout << symbol << std::endl;
    }else if(symbol >= '0' && symbol <= '9'){
        int number = symbol - '0';
        std::cout << number * number << std::endl;
    }
    
}