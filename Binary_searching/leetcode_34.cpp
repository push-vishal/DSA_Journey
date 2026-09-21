#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int start=0 , end = nums.size()-1;
        int mid,first=-1,last=-1;

        //for first occurance                         
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
            first=mid;
            end=mid-1;
            }else if (nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }

        //for last occurance
        start=0 ,end = nums.size()-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        vector<int> a(2);
        a[0]=first;
        a[1]=last;
        return a;
    }
};

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    Solution obj;
    vector<int> result = obj.searchRange(nums, target);

    cout << "First and last occurrence: ";
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}