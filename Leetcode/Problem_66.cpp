class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int index = digits.size();
        while (1)
        {
            if (index == 0)
            {
                digits.insert(digits.begin(), 1);
                break;
            }
            if (digits[index - 1] < 9)
            {
                digits[index - 1] += 1;
                break;
            }
            else
            {
                digits[index - 1] = 0;
                index -= 1;
            }
        }
        return digits;
    }
};