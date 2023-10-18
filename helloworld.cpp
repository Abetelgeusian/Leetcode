#include <iostream>

int main()
{
    int v1,v2;
    std::cin >> v1 >> v2 ;
    int a = v1 + 1;
    while (a>v1 && a<v2){
        std::cout << a << std::endl;
        ++a;
    }
}
