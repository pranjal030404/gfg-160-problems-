// You are given an array of integers arr[]. Your task is to reverse the given array.

class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        // code here
        int i = 0;
        int j = arr.size() - 1;
        while (i < j)
        {
            swap(arr[i++], arr[j--]);
        }
    }
};
