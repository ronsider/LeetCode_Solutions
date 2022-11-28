#include <array>
#include <span>
using std::array;

void permutation(std::span<int> perm, std::span<char> letters)
{
    for (size_t i = 0; i < perm.size(); i++)
    {
        if (perm[i] == i)
            continue;
        std::swap(letters[i], letters[perm[i]]);
        std::swap(perm[i], perm[perm[i]]);
        i = 0;
    }
    //return letters;


}

int main()
{
    std::array<int,5>perm{ 3,4,2,1,0 };
    std::array<char,5>l{ 'a','b','c','d','e' };
    permutation(perm, l);
}