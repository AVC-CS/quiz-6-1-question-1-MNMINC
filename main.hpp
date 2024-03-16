#include <iostream>
using namespace std;
bool IsPrime(int); 
void getTwoValues(int, int);
int getNextPrime(int);
int getPervPrime(int);



void getTwoValues(int begin, int end)
{
    do 
    {
        cin >> begin >> end;
    } while (begin >= end);
}

int getNextPrime(int begin)
{
    int np = begin + 1;
    while (!IsPrime(np))
    {
        ++np;
    }
    return np;
}
int getPrevPrime(int end)
{
    int np = end - 1;
    while (!IsPrime(np))
    {
        --np;
    }
    return np;

}

bool IsPrime(int n) 
{
    for (int f = 2; f < n; ++f)
        if (n % f == 0)
            return false; 
    return true;
}
