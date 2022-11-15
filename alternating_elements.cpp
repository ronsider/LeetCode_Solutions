#include <algorithm>
#include <vector>
//#include <iostream>
//using std::cout;
using std::vector;

std::vector<int> reorder(std::vector<int>& numbers)
{  
    std::sort(numbers.begin(),numbers.end());
    for(size_t i=1;i<numbers.size()-1;i+=2)
    {
        std::swap(numbers[i],numbers[i+1]);
    }
    return numbers;
}