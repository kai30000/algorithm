#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> solution(vector<int> arr, vector<int> delete_list) {
  vector<int> answer = arr;
  for (int n : delete_list) {
    auto it = find(answer.begin(), answer.end(), n);
    if (it != answer.end()) answer.erase(it);
  }

  return answer;
}