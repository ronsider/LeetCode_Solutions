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
constexpr bool check_lines(const array<int,9>& line)
{
    std::array<int,9>numbers{ 0,0,0,0,0,0,0,0,0 };
    for(const auto& element:line)
    {
        int temp=element;
        temp--;
        if(numbers[temp]!=0)
        return false;       
        numbers[temp]++;
    }
    return true;
}
constexpr bool check_sudoku()
{

}
int main()
{
  
  
}