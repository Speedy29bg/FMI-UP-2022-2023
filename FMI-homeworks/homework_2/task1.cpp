#include <iostream>
int fibonacciSequence(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacciSequence(n - 1) + fibonacciSequence(n - 2);
}


void printArr(double* arr, int size){
    if (size == 0){
        std::cout<<"Array is empty!";
    }
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
namespace task_1{
    void run(){
        int startCapacity = 2;
        double* arr = new double[startCapacity];
        int counter = 0;
        double input;
        while(true){
            std::cin >> input;
            if(input == 0){
                break;
            }
            if(counter == startCapacity){
                startCapacity = fibonacciSequence(counter + 2);
                double* temp = new double[startCapacity];
                for(int i = 0; i < counter; i++){
                    temp[i] = arr[i];
                }
                delete[] arr;
                arr = temp;
            }
            arr[counter] = input;
            counter++;

        }
        std::cout << "Size: "<< counter << '\n';
        std::cout << "Capacity: "<< startCapacity << '\n';
        std::cout << "Data: ", printArr(arr, counter);
        delete[] arr;
        arr = nullptr;
    }
}


int main(){
    task_1::run();
    return 0;
}
