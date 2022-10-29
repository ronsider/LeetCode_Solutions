#include <vector>
#include <unordered_map>
#include <algorithm>
using std::unordered_map;
using std::vector;
bool canReorderDoubled(vector<int>& arr) 
{
        
        unordered_map<int, int> count;

    for (int a : arr)
      count[a]++;

    std::sort(arr.begin(), arr.end(),
         [](const int a, const int b) { return abs(a) < abs(b); });

    for (int a : arr) {
      if (count[a] == 0)
        continue;
      if (count[2 * a] == 0)
        return false;
      --count[a];
      --count[2 * a];
    }

    return true;     
    }