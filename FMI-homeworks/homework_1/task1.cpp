#include<iostream>
#define MAX_SIZE 100

size_t bigBearCountingSystem(char symbol)
{
    switch (symbol)
    {
    case '0':
        return 0;
        
    case 'a':
        return 1;
        
    case 'b':
        return 2;
        
    case 'c':
        return 3;
        
    case 'd':
        return 4;
        
    case 'e':
        return 5;
        
    case 'f':
        return 6;
        
    case 'g':
        return 7;
        
    case 'h':
        return 8;

    case 'i':
        return 9;
        
    case 'j':
        return 10;
        
    case 'k':
        return 11;
        
    case 'l':
        return 12;
        
    case 'm':
        return 13;
        
    default:
        return -1;
        break;
    }

}
void uptodate(char date[5], int edate[3]){
    
    edate[0]=bigBearCountingSystem(date[0]);
    edate[1]=bigBearCountingSystem(date[1]);
    edate[2]=bigBearCountingSystem(date[2])*bigBearCountingSystem(date[3]) - 20 + bigBearCountingSystem(date[4])+2000;
}

int main()
{
    char smth[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
    {
        std::cin >> smth[i];
        if (smth[i] == '0')
        {
            break;
        }
        if (smth[i] == '.')
        {
            continue;
        }
        
    }
    
    int date[3];
    uptodate(smth,date);
    for(int i=0;i<3;++i){
        std::cout<<date[i]<<" ";
    }
    return 0;
}