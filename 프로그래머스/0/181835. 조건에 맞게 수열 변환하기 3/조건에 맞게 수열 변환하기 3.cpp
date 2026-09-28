#include <string>
#include <vector>

using namespace std;

vector<int> solution(const vector<int> arr, int k) {
    vector<int> answer = arr;
    
    if (k % 2 ==1){
        for (int &i : answer){
            i *= k;
        }
    }
    else{
        for (int &i : answer){
            i += k;
        }
        
    }
    return answer;
    ;
}