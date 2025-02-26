#include <iostream>
int main (){
    int M, N;
    std::cin >> M >> N;
    int maxDominoes = (M * N) / 2;
    std::cout << maxDominoes << std::endl;
    return 0;

}