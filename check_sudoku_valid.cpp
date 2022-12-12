#include <array>
#include <algorithm>
#include <bitset>
using std::array;
#include <iostream>
using std::cout;


bool check_mini_squares(const array<array<int,9>,9>& grid)
{
    std::bitset<9>grid_one{"000000000"};
    std::bitset<9>grid_two{"000000000"};
    std::bitset<9>grid_three{"000000000"};
    std::size_t position{};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            if(j>=0&&j<3)
            {
                position=grid[i][j];
                position--;
                if(grid_one[position]==true)
                return false;
                grid_one[position]=true;
                position=0;
            }
            else if(j>=3&&j<6)
            {
                position=grid[i][j];
                position--;
                if(grid_two[position]==true)
                return false;
                grid_two[position]=true;
                position=0;
            }
            else
            {
                position=grid[i][j];
                position--;
                if(grid_three[position]==true)
                return false;
                grid_three[position]=true;
                position=0;
            }
        }
    }
    grid_one.reset();
    grid_two.reset();
    grid_three.reset();

    for(int i=3;i<6;i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            if(j>=0&&j<3)
            {
                position=grid[i][j];
                position--;
                if(grid_one[position]==true)
                return false;
                grid_one[position]=true;
                position=0;
            }
            else if(j>=3&&j<6)
            {
                position=grid[i][j];
                position--;
                if(grid_two[position]==true)
                return false;
                grid_two[position]=true;
                position=0;
            }
            else
            {
                position=grid[i][j];
                position--;
                if(grid_three[position]==true)
                return false;
                grid_three[position]=true;
                position=0;
            }
        }
    }
    grid_one.reset();
    grid_two.reset();
    grid_three.reset();

    for(int i=6;i<9;i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            if(j>=0&&j<3)
            {
                position=grid[i][j];
                position--;
                if(grid_one[position]==true)
                return false;
                grid_one[position]=true;
                position=0;
            }
            else if(j>=3&&j<6)
            {
                position=grid[i][j];
                position--;
                if(grid_two[position]==true)
                return false;
                grid_two[position]=true;
                position=0;
            }
            else
            {
                position=grid[i][j];
                position--;
                if(grid_three[position]==true)
                return false;
                grid_three[position]=true;
                position=0;
            }
        }
    }
   return true;
}


//check for horizontal lines validity
constexpr bool check_lines(const array<array<int,9>,9>& board)
{
    std::array<int,9>numbers{ 0,0,0,0,0,0,0,0,0};
    for(size_t i=0;i<board.size();i++)
    {
        for(size_t j=0;j<board[0].size();j++)
        {
            int temp=board[i][j];
            temp--;
            if(numbers[temp]!=0)
            return false;
            numbers[temp]++;
        }
        for(size_t k=0;k<numbers.size();k++)
        {
            numbers[k]=0;
        }
    }
    return true;
}

constexpr bool check_columns(const array<array<int,9>,9>& board)
{
    std::array<int,9>numbers{ 0,0,0,0,0,0,0,0,0};
    for(size_t j=0;j<board[0].size();j++)
    {
        for(size_t i=0;i<board.size();i++)
        {
            int temp=board[i][j];
            temp--;
            if(numbers[temp]!=0)
            return false;
            numbers[temp]++;
        }
        for(size_t k=0;k<numbers.size();k++)
        {
            numbers[k]=0;
        }
    }
    return true;
}
int main()
{

    constexpr array<array<int,9>,9> sudoku{{{5,3,4,6,7,8,9,1,2},
                                            {6,7,2,1,9,5,3,4,8},
                                            {1,9,8,3,4,2,5,6,7},
                                            {8,5,9,7,6,1,4,2,3},
                                            {4,2,6,8,5,3,7,9,1},
                                            {7,1,3,9,2,4,8,5,6},
                                            {9,6,1,5,3,7,2,8,4},
                                            {2,8,7,4,1,9,6,3,5},
                                            {3,4,5,2,8,6,1,7,9}}};
    cout<<check_mini_squares(sudoku);
}