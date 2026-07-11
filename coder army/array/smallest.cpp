#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = INT_MAX;     // for largest element  ans = INT_MIN

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < ans)      // if(arr[i] > ans) 
            ans = arr[i];
    }

    cout << "Smallest element = " << ans;

    return 0;
}