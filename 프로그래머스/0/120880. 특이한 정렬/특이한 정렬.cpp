#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(const vector<int> numlist, const int n) {
  vector<int> answer = numlist;
  sort(answer.begin(), answer.end(), [n](int a, int b) {
    int distance1 = abs(n - a), distance2 = abs(n - b);
    if (distance1 == distance2)
      return a > b;
    else
      return distance1 < distance2;
  });
  return answer;
}