#include <vector>
#include <algorithm>
using std::vector;

void remove_duplicates(vector<int>& numbers)
{
    auto it=std::unique(numbers.begin(),numbers.end());
    numbers.erase(it,numbers.end());
}

