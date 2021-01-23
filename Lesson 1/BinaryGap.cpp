#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string

std::string toBinary(int n)
{
    std::string r;
    while(n != 0) {
        r = (n % 2 == 0 ? "0" : "1" ) + r; 
        n /= 2;
    }
    return r;
}

int solution(int N) {
    std::string bits = toBinary(N);
    int size = 0;
    int sizeReal = 0;
    int cont = 0;
    for (size_t i = 0; i < bits.length(); i++)
    {
        if (bits[i] == '0')
        {
            if (cont > 0) {
                cont++;
            }
            else {
                cont = 1;
            }
        } 
        else {
            cont = 0;
        }
        if (cont > size) {
            size = cont;
        }
        if (bits[i] == '1' && size > sizeReal){
            sizeReal = size;
        }
    }
    return sizeReal;
}
