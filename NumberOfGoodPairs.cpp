#include<iostream>
#include<vector>
using namespace std;
class Solution {    
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if ( nums[i] == nums[j])
                {
                    c++;
                }
            }
        }
        return c;
    }
};
int main()
{
    Solution s;
    vector<int> nums;
    int n,ele;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> ele;
        nums.push_back(ele);
    }
    int res = s.numIdenticalPairs(nums);
    cout << res << endl;
}
