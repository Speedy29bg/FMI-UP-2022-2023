#include <iostream>
#include <cstdlib>
#include <cstring>


char* decompress(const char* compressed, int &i) {
    int repeat = 0;
    char* decompressed = new char[strlen(compressed) + 1];
    int k = 0;
    while (compressed[i]) {
        if (compressed[i] >= 'A' && compressed[i] <= 'Z') {
            decompressed[k++] = compressed[i];
        } else if (compressed[i] >= '0' && compressed[i] <= '9') {
            repeat = repeat * 10 + (compressed[i] - '0');
        } else if (compressed[i] == '(') {
            i++;
            char* innerDecompress = decompress(compressed, i);
            for (int j = 0; j < repeat; j++) {
                for (int l = 0; innerDecompress[l] != '\0'; l++) {
                    decompressed[k++] = innerDecompress[l];
                }
            }
            repeat = 0;
        } else if (compressed[i] == ')') {
            decompressed[k] = '\0';
            return decompressed;
        } else {
            std::cout << "Invalid input!\n";
            exit(1);
        }
        i++;
    }
    return decompressed;
}

void runTask4(){
    char compressed[100];
    std::cin >> compressed;
    int i = 0;
    char* decompressed = decompress(compressed, i);
    std::cout << decompressed << std::endl;
    delete[] decompressed;
}
int main() {
    runTask4();
    return 0;
}
