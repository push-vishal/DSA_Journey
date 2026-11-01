
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findPages(vector<int>& arr, int k) {
        int n = arr.size();

        if (k > n)
            return -1;

        long long start = 0, end = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            start = max(start, (long long)arr[i]);
            end += arr[i];
        }

        while (start <= end) {
            long long mid = start + (end - start) / 2;

            long long pages = 0;
            int count = 1;

            for (int i = 0; i < n; i++) {
                pages += arr[i];

                if (pages > mid) {
                    count++;
                    pages = arr[i];
                }
            }

            if (count <= k) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return (int)ans;
    }
};

int main() {
    Solution obj;

    int n, k;

    cout << "Enter number of books: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter pages in each book: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of students: ";
    cin >> k;

    cout << "Minimum maximum pages: "<< obj.findPages(arr, k) << endl;

    return 0;
}

