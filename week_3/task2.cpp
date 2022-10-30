#include<iostream>
int main(){
    int a, b, c, a1, b1, c1;
    std::cin>>a>>b>>c>>a1>>b1>>c1;
    double diff1 = 0, diff2 = 0, diff3 = 0;
    if(a + b > c && a + c > b && b + c > a){
        if(a1 + b1 > c1 && a1 + c1 > b1 && b1 + c1 > a1){
            if(a == a1 && b == b1 && c == c1){
                std::cout<<"Triangles are same\n";
            }
            else if(a > a1 && b > b1 && c > c1){
                diff1 = a / a1;
                diff2 = b / b1;
                diff3 = c / c1;
                if (diff1 == diff2 && diff2 == diff3){
                    std::cout<<"Triangles are similar\n";
                }
                else{
                    std::cout<<"Triangles are not same and not similar";
                }
            }
            else if(a < a1 && b < b1 && c < c1){
                diff1 = a / a1;
                diff2 = b / b1;
                diff3 = c / c1;
                if (diff1 == diff2 && diff2 == diff3){
                    std::cout<<"Triangles are similar\n";
                }
                else{
                    std::cout<<"Triangles are not same and not similar";
                }  
            }
        }
        else{
            std::cout<<"One of the triangles does not exist!\n";
        }
    }
    else{
        std::cout<<"One of the triangles does not exist!\n";
    }
    return 0;
}