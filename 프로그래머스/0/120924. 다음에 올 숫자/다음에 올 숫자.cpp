#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    return common[2]-common[1] == common[1] - common [0]
        ? common.back() + common[2] - common[1]
        : common.back() * common[2] / common[1];

    
}