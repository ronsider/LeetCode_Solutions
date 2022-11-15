#include <algorithm>
#include <vector>
using std::vector;

void reorder(std::vector<int>& numbers)
{  
     for(size_t i=1;i<numbers.size();i++)
    {
        if((!(i%2) && numbers[i-1]<numbers[i]) || ((i%2) && numbers[i-1]>numbers[i]))
        {
            std::swap(numbers[i-1],numbers[i]);
        }
    }
}