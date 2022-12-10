#include <algorithm> // For sort function
#include <iostream>
#include <vector>

using namespace std;

// Good approach using sorted array or linked list to find a set
// of elements that fulfill cetain constrains.

// Given an array of sorted numbers and a target sum, find a pair
// in the array whose sum is equal to the given target.

// Input: [1,2,3,4,5], target = 6
// Output: [1,3]

class PairWithTargetSum {
public:
  static pair<int, int> search(const vector<int> &arr, int targetSum) {
    int left = 0, right = arr.size() - 1; // Index = size -1
    // sort(arr.begin(), arr.end());
    cout << arr[1] << endl;
    while (left < right) {
      int sum = arr[left] + arr[right];
      cout << sum << endl;
      if (sum == targetSum) {
        cout<<left<<" ii "<<right<<endl;
        return make_pair(left, right);
      }
      if (sum > targetSum)
        right--;
      else
        left++;
    }
    //cout << arr[left] << " " << arr[right] << endl;
    return make_pair(-1, -1);
  }
};

int main() {
  std::cout << "Hello World!\n";
  vector<int> arr = {9, 2, 3, 4, 5};
  int targetSum = 6;
  sort(arr.begin(), arr.end());
  auto result = PairWithTargetSum::search(arr, targetSum);
  cout << result.first << " " << arr[result.second] << endl;
}