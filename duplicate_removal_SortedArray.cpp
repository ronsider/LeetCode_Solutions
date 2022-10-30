#include <vector>
#include <algorithm>
#include <iostream>
using std::vector;

void remove_duplicates(vector<int>& numbers)
{
    auto it=std::unique(numbers.begin(),numbers.end());
    numbers.erase(it,numbers.end());
}

int main()
{
    vector<int>numbers{1,2,2,3,4,4,5,6,7,7,8};
    remove_duplicates(numbers);
    auto print{[&](){
        for(const auto& i:numbers)
        {
            std::cout<<i<<" ";
        }
    }};
    print();
}