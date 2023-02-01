//Напишете рекурсивна функция, която проверява дали един символен низ се намира в друг.

#include <iostream>

bool isSubstring(char* str1, char* str2){
    if(*str1 == '\0' && *str2 == '\0'){
        return true;
    }
    // if(*str1 == '\0' && *str2 != '\0'){
    //     return false;
    // }
    // if(*str1 != '\0' && *str2 == '\0'){
    //     return false;
    // }
    if(*str1 == *str2){
        return isSubstring(str1 + 1, str2 + 1);
    }
    return isSubstring(str1 + 1, str2);
}

int main(){
    char str1[100];
    char str2[100];
    std::cin >> str1;
    std::cin >> str2;
    std::cout << isSubstring(str1, str2);
    return 0;
}