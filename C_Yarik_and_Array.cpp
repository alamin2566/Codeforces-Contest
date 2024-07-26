#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSumOfAlternatingSubarray(vector<int>& arr) {
    int n = arr.size();
    int maxSum = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < n; ++i) {
        // Check if the current element and the previous one have the same parity
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 == 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 != 0)) {
            maxSum = max(maxSum, currSum);
            currSum = arr[i];
        } else {
            currSum += arr[i];
        }
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int result = maxSumOfAlternatingSubarray(arr);
        cout << result << endl;
    }

    return 0;
}
