#include <numeric>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
  vector<int> answer(num);
  int n = total / num;
  if (num % 2 == 1) {
    iota(answer.begin(), answer.end(), n - (num / 2));
  } else {
    iota(answer.begin(), answer.end(), n - (num / 2) + 1);
  }
  return answer;
}