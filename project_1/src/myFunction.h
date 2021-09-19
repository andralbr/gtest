
#include <stdexcept>

int add( int a, int b)
{

    if (a < 0)
        throw std::runtime_error("Invalid parameter!");
    return a + b;
}

bool greaterThan( int a, int b)
{
    if ( a > b )
        return true;
    
    return false;
}
