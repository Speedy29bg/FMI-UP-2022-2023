#include<iostream>
void getArr(int* arr, int arrSize){
    int count = 0;
    for(int i = 0; i < arrSize; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    int* newArr = new int[count];
    int index = 0;
    for(int i = 0; i < arrSize; i++){
        if(arr[i] % 2 == 0){
            newArr[index] = arr[i];
            index++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << newArr[i] << std::endl;
    }

    delete[] newArr;
    
}

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    getArr(arr, arrSize);
    
    return 0;
}