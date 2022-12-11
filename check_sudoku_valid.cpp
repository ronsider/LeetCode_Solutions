#include <array>
#include <algorithm>
using std::array;

 constexpr static std::array<int,9>numbers{1,2,3,4,5,6,7,8,9};

constexpr bool check_mini_grid(const array<array<int,3>,3>& grid)
{
    std::array<int, 9>numbers{ 0,0,0,0,0,0,0,0,0 };
    for (const auto& i : grid)
    {
        for (const auto& j : i)
        {
            int temp = j - 1;
            if(numbers[temp]!=0)
                return false;
            numbers[temp]++;
        }
    }
    return true;
}

//check for horizontal lines validity
constexpr bool check_lines(const array<array<int,9>,9>& board)
{
    std::array<int,9>numbers{ 0,0,0,0,0,0,0,0,0 };
    for(const auto& element:board)
    {
        for(const auto& j:element)
        {
            int temp=j;
            temp--;
            if(numbers[temp]!=0)
            return false;
            numbers[temp]++;
        }
        for(size_t i=0;i<numbers.size();i++)
        {
            numbers[i]=0;
        }
    }
    return true;
}

constexpr bool check_sudoku()
{

}
int main()
{
  
  
}