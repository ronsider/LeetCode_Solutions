#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using std::vector;

vector<int>prime_numbers(const int number)
{
    vector<int>primeNumbers{2,3,5,7,11,13,17,19,23,29,31};
    auto position=std::lower_bound(primeNumbers.begin(),primeNumbers.end(),number);
    if(position!=primeNumbers.end())
    {
        vector<int>result(primeNumbers.begin(),position);
        return result;
    }
    else
    {
        int last_element=primeNumbers.back()+2;
        while(last_element<=number)
        {
            int temp=(int)sqrt(last_element);
            bool flag=true;
            auto _position=std::lower_bound(primeNumbers.begin(),primeNumbers.end(),temp);
            for(auto pos=primeNumbers.begin();pos<=_position;pos++)
            {
                if(last_element%(*pos)==0)
                {
                    flag=false;
                  break;
                }
                else
                {
                    continue;
                }

            }
            if(flag)
            {
                primeNumbers.push_back(last_element);
            }
            last_element+=2;
        }

        return primeNumbers;
    }

}

int main()
{
    vector<int>numbers=prime_numbers(91);
    for(const auto& i:numbers)
    {
        std::cout<<i<<" ";
    }
}