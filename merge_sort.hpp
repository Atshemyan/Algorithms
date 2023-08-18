#include <iostream>
#include <vector>

void Merge(std::vector<int>& arr, int left, int middle, int right)
{
    int n1 = middle - left + 1; //with middle
    int n2 = right - middle; //without middle

    std::vector<int> left_arr;
    std::vector<int> right_arr;
    

    for(int i = 0; i < n1; ++i)
    {
        left_arr.push_back(arr[left + i]); //
    }

    for(int i = 0 ; i < n2; ++i)
    {
       right_arr.push_back(arr[middle + 1 + i]); //
    }
   
    int i = 0;
    int j = 0;

    for(int k = left; k <= right; ++k)
    {
        if (i < n1 && ( j >= n2 || left_arr[i] <= right_arr[j]))
        {
            arr[k] = left_arr[i];
            ++i;
        }

        else
        {
            arr[k] = right_arr[j];
            ++j;
        }
         
    }  
}

void Merge_Sort(std::vector<int>& arr, int left, int right)
{
    if(left < right)
    {   
        int middle = left + (right - left) / 2;
        Merge_Sort(arr, left, middle);
        Merge_Sort(arr, middle + 1, right);
        Merge(arr, left, middle, right);
        
    }

}
