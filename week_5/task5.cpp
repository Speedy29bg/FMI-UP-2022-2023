#include <iostream>
#include <cmath>


float trianglePerimetter(float a, float b, float c){
    return a + b + c;    
}

float triangleArea(float a, float b, float c){
    float p = trianglePerimetter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}


int main(){
    float a, b, c;
    std::cin >> a >> b >> c;
    std::cout << trianglePerimetter(a, b, c) << std::endl;
    std::cout << triangleArea(a, b, c) << std::endl;
    return 0;
}