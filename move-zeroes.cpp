#include <iostream>
#include <vector>
using namespace std;

void printv(vector<int> &vec) {
  for (auto v : vec) {
    cout << v << " ";
  }
  cout << endl;
}


void moveZeroes(vector<int>& nums) {
  printv(nums);
  int offset = 0;
  int nums_size = nums.size();
  for (int i = 0; i < nums_size - offset; i++) {
    if (offset) {
      nums[i] = nums[i + offset];
    }
    if (nums[i] == 0) {
      offset++;
      i--;
    }
  }

  for (int i = nums_size - offset; i < nums_size; i++)
    nums[i] = 0;

  printv(nums);
}

int main(int argc, char const *argv[]) {
  // vector<int> numbers = {0, 1, 0, 3, 12};
  vector<int> numbers = {5, 2, 6, 0, 1, 8, 0, 3, 12};
  moveZeroes(numbers);
  return 0;
}
