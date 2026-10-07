#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    
    int a0 = common[common.size()-3];
    int a1 = common[common.size()-2];
    int a2 = common[common.size()-1];
    
    if ((a2-a1) == (a1-a0)){
        return a2+(a2-a1);
    }
    else{
        return a2*(a2/a1);
}}