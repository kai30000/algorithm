#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (string s : babbling) {
        int valid_length = 0;
        vector<string> key = {"aya", "ye", "woo", "ma"};
        
        for (string k : key) {
            if (s.find(k) != string::npos) {
                valid_length += k.length();
            }
        }

        if (valid_length == s.length()) {
            answer += 1;
        }
    }
    
    return answer;
}