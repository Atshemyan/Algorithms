#include <iostream>
#include <vector>

void countingSort(std::vector<int>& vec)
{
    if (vec.size() <= 1)
    {
        return;
    }
    int max = vec[0];
    for (auto& i : vec)
    {
        if (max < i)
        {
            max = i;
        }
    }

    std::vector<int> count(max + 1);
     
    for (int i = 0; i < vec.size(); ++i)
    {
        ++count[vec[i]];
    }

    for (int i = 1; i < count.size(); ++i)
    {
        count[i] += count[i - 1];
    }

    std::vector<int> output(vec.size());
    for (int i = vec.size() - 1; i >= 0; --i)
    {
        output[count[vec[i]] - 1] = vec[i];
        --count[vec[i]];
    }
    vec = output;
}
int main()
{
    std::vector<int> arr = { 5, 3, 1, 2, 8, 4, 3, 2, 1, };
    countingSort(arr);
    for (auto& i : arr)
    {
        std::cout << i << ' ';
    }
}
