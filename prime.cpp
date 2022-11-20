#include <cmath>
constexpr bool prime(const int n)
{
    if(n%2==0)
    return false;
    const int s=sqrt(n);
    for(int i=s;i>=3;i-=2)
    {
        if(n%i==0)
        return false;
    }
    return true;
}