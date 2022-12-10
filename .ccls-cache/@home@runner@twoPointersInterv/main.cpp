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

// Note: the below algorithm works only when arrah is sorted.
// Note: using array index, index to last element = array.size - 1
// Note: vector initialization {2,3,5,6,7,8}

class PairWithTargetSum {
public:
  static pair<int, int> search(vector<int> &arr, int targetSum) {
    int left = 0, right = arr.size() - 1; //Note: Index = size -1
    //sort(arr.begin(), arr.end());
    cout << arr[1] << endl;
    while (left < right) {
      int sum = arr[left] + arr[right];
      cout <<"sum: "<< sum <<": "<<"arr["<<left<<"] = "<<arr[left]<<" "<<
                                   "arr["<<right<<"] = "<<arr[right]<<endl;
      if (sum == targetSum) {
        cout<<left<<" "<<arr[left]<<" ii "<<right<<" "<<arr[right]<<endl;
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
  vector<int> arr = {1, 2, 3, 4, 5};  //Note: Vector Initialization
  int targetSum = 6;
  auto result = PairWithTargetSum::search(arr, targetSum);
  cout << result.first << " " << arr[result.second] << endl;
}