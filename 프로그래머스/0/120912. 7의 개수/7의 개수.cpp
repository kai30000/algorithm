#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int n = 0;
    for(int i : array){
        for(char c : to_string(i)){
            if(c=='7'){
                n++;
            }
        }
    }
    return n;
}