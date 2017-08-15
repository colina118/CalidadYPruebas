#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

bool checkPrime(int i)
{
    if(i <= 1)
        return false;
    else if(i == 2)
        return true;
    else if(i % 2 == 0)
        return false;
    else
    {
        bool primo = true;
        int divisor = 3;
        int limite = sqrt(i)+1;
        while(divisor <= limite)
        {
            if(i%divisor == 0)
            {
                return false;
                divisor++;
            }
            return primo;
        }
    }
}

bool girar(int i)
{
    int cont = 0;
    int num = i , rotate = 0 , numInicial = i;
    std::string numstr;
    std::string buffer;
    rotate=1;
    std::stringstream ss;
    if(num < 10 && num >= 2)
    {
        if(checkPrime(num))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(num <=1)
    {
        if(!checkPrime(num))
        {
            return false;
        }

    }
    while(num != numInicial && checkPrime(num) || cont <1)
    {
        while (rotate)
        {

             if(num < 100)
             {
                 ss << num%10;
                 //std::cout<<"Que numero es"<< num << std::endl;
                 buffer= ss.str();
                 std::cout<< buffer << std::endl;
                 //buffer = std::to_string(num%10);
                 numstr += buffer;
                 num /= 10;
             }
             else if(num < 1000)
             {
                 ss << num%100;
                 //std::cout<<"Que numero es"<< num << std::endl;
                 buffer= ss.str();
                 std::cout<< buffer << std::endl;
                 //buffer = std::to_string(num%10);
                 numstr += buffer;
                 num /=100;
             }
             else
             {
                 ss << num%1000;
                 //std::cout<<"Que numero es"<< num << std::endl;
                 buffer= ss.str();
                 std::cout<< buffer << std::endl;
                 //buffer = std::to_string(num%10);
                 numstr += buffer;
                num /= 1000;
             }


             rotate--;
        }
        ss << num;
        buffer=ss.str();
        //numstr += buffer;
        std::cout <<"el numero"<< buffer<<std::endl;
        num = atoi( buffer.c_str() );
        buffer.erase();
        ss.str("");
        std::cout << num << std::endl;
        rotate = 1;
        cont++;
    }
    std::cout << sizeof(num)<<std::endl;
    if(cont >= sizeof(num)-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int i;
    std::cout<<"Escribe el numero que quieres checar"<<std::endl;
    std::cin>>i;
    if(girar(i))
    {
        std::cout<<"Si es primo circular tu numero"<<std::endl;
    }
    else
    {
        std::cout<<"No es primo circular tu numero"<<std::endl;
    }
}
