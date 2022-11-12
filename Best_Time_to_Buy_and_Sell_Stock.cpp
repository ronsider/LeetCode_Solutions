#include <optional>
#include <vector>
std::optional<std::pair<size_t,size_t>> find_first_pair(const std::vector<int>numbers)
{
    for(size_t i=0;i<numbers.size()-1;i++)
    {
        if(numbers[i]<numbers[i+1])
        return std::make_pair(i,i+1);
    }
    return {};
}
    int maxProfit(std::vector<int>& prices) {
        auto t=find_first_pair(prices);
    if(!t.has_value())
    {
        return 0;
    }
    auto first_min=t->first;
    auto first_max=t->second;
    int differnce=prices[first_max]-prices[first_min];

    for(int i=first_min+1;i<prices.size();i++)
    {
        if(prices[i]>prices[first_max])
        {
            first_max=i;
            differnce=prices[first_max]-prices[first_min];
        }
        else if(prices[i]<prices[first_min])
        {
            first_min=i;
        }
        if(prices[i]-prices[first_min]>differnce)
        {
            differnce=prices[i]-prices[first_min];
            first_max=i;
            
        }
        
    }
    return differnce;
        
    }