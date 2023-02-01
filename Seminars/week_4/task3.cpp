//По дадено число N изкарайте на екрана квадрат от N x N символи, 
//където по главния диагонал стоят нули, над него +, а под него -
#include<iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n][n];
    char zero = '0';
    char plus = '+';
    char minus = '-';
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            if(arr[i]== arr[j]){
                std::cout<<zero<<' ';
            }
            else if(arr[i] < arr[j]){
                std::cout<<plus<<' ';
            }
            else if(arr[i] > arr[j]){
                std::cout<<minus<<' ';
            }
        }
        std::cout<<'\n';
    }

    return 0;
}