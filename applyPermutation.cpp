#include <vector>
using std::vector;
vector<char> apply_permutation(const vector<int>& perm,const vector<char>& letters)
{
    vector<char>result;
    result.resize(letters.size());
    for(size_t i=0;i<perm.size();i++)
    {
        result[perm[i]]=letters[i];
    }
    return result;
}
