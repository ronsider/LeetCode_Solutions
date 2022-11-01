#include <vector>
#include <algorithm>
#include <iostream>
using std::vector;

void remove_duplicates(vector<int>& numbers)
{
    auto it=std::unique(numbers.begin(),numbers.end());
    numbers.erase(it,numbers.end());
}

//** add pure implementation: **/
void remove_duplicate_pure(vector<int>& numbers)
{
    std::size_t temp{};
    for(std::size_t i=0;i<numbers.size()-1;i++)
    {
        if(numbers[i]==numbers[i+1])
        {
            temp=i+1;
            while(numbers[i]==numbers[temp])
            {
                numbers[temp]=-999;
                temp++;
            }
        }
        if(i!=numbers.size()-2)
        {
        i=temp+1;
        }
    }

}

int main()
{
    vector<int>numbers{1,2,2,3,4,4,5,6,7,7,8};
    remove_duplicate_pure(numbers);
    auto print{[&](){
        for(const auto& i:numbers)
        {
            std::cout<<i<<" ";
        }
    }};
    print();
}