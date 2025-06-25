#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
        
            if (nums[i] + nums[j] == target) {
                return {i, j}; 
            }
        }
    }
    return {};
int main() {
    vector<int> nums = {3,2,4};
    int target = 6;
    
    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
             cout<<"["<< result[0] <<","<< result[1] <<"]"<<endl;
    } else {
        cout <<"Invalid"<< endl;
    }
    
    return 0;
}
