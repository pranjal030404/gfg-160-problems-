// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

// Note: The second largest element should not be equal to the largest element.

class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        // Code Here
        int n = arr.size();
        if (n < 2)
            return -1;
        int first = INT_MIN, second = INT_MIN;
        for (int num : arr)
        {
            if (num > first)
            {
                second = first;
                first = num;
            }
            else if (num > second && num < first)
            {
                second = num;
            }
        }
        return (second == INT_MIN) ? -1 : second;
    }
};