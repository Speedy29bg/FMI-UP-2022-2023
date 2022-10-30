#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int distance = 0;
    for (int i = 1; i <= n; i++)
    {
        distance += (3*i - 1);
    }

    std::cout<< distance << " sm\n";

    return 0;
}