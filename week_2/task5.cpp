/*
Да се напише булев израз, който да има стойност истина, 
ако посоченото условие е вярно и стойност лъжа, в противен случай:
-  цялото число n се дели или на 3 и на 5, или на 2 и на 7;
-  уравнението ax2 + bx + c = 0 има реални корени
-  точка се намира извън фигурата тип “венец” с център (0, 0) и радиуси 2 и 8
*/
bool condition1(int n) {
    return (n % 3 == 0 && n % 5 == 0) || (n % 2 == 0 && n % 7 == 0);
}

bool condition2(int a, int b, int c) {
    int d = b * b - 4 * a * c;
    return d >= 0;
}

bool condition3(int x, int y) {
    return (x * x + y * y > 4 && x * x + y * y < 64);
}
#include <iostream>
int main(){
    int n;
    std::cin >> n;
    std::cout << condition1(n) << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << condition2(a, b, c) << std::endl;

    int x, y;
    std::cin >> x >> y;
    std::cout << condition3(x, y) << std::endl;
    return 0;
}