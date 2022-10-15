#include <vector>
#include <algorithm>

using std::vector;

vector<int> digits(vector<int>& number)
{
    const std::size_t last_position=number.size()-1;
    
    if(number[last_position]<9)
    
        number[last_position]++;
    
    else
    {
        number.reserve(number.size()+1);
        std::reverse(number.begin(),number.end());
        number.push_back(0);
        std::reverse(number.begin(),number.end());
        bool carry{true};
        for(auto it=number.rbegin();it!=number.rend();it++)
        {
            if(carry && (*it)==9)
            {
                *it=0;
                carry=true;
                continue;
            }
            
            if(carry && *it!=9)
            {
                carry=false;
                (*it)+=1;
                break;
            }
        }
        
    }
    return number;
}


int main()
{
    
}