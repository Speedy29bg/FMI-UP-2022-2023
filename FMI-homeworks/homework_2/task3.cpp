#include <iostream>


typedef unsigned char bactery[3];

bactery** infect(const* bactery const* colony, size_t height, size_t width, size_t row, size_t col) {
    int avg = (colony[row][col][0] + colony[row][col][1] + colony[row][col][2]) / 3;
    colony[row][col][0] = colony[row][col][1] = colony[row][col][2] = 0;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == row && j == col) continue;
            int currAvg = (colony[i][j][0] + colony[i][j][1] + colony[i][j][2]) / 3;
            if (abs(avg - currAvg) <= 1) {
                colony[i][j][0] = colony[i][j][1] = colony[i][j][2] = 0;
                std::cout << "infecting bacterium at row " << i << " and column " << j << std::endl;
            }
        }
    }
    return colony;
}


void deleteColony(bactery** colony, size_t height) {
    for (int i = 0; i < height; i++) {
        delete[] colony[i];
    }
    delete[] colony;
}

void initializeColony(bactery** colony, size_t height, size_t width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            colony[i][j][0] = rand() % 256;
            colony[i][j][1] = rand() % 256;
            colony[i][j][2] = rand() % 256;
        }
    }
}

void printColony(const bactery const* const* colony, size_t height, size_t width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << (int)colony[i][j][0] << " " << (int)colony[i][j][1] << " " << (int)colony[i][j][2] << " ";
        }
        std::cout << std::endl;
    }
}


void runTask3(){
    size_t height = 5;
    size_t width = 5;
    bactery** colony = new bactery*[height];
    for (int i = 0; i < height; i++) {
        colony[i] = new bactery[width];
    }

    initializeColony(colony, height, width);

    std::cout << "Colony before infection: \n";
    printColony(colony, height, width);

    size_t row = 2;
    size_t col = 2;
    bactery** infectedColony = infect(colony, height, width, row, col);

    //print the colony after infection
    std::cout << "Colony after infection: \n";
    printColony(infectedColony, height, width);

    deleteColony(colony, height);
}



int main(void) {
    runTask3();
    return 0;
}