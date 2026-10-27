#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> lines) {
    vector<int> v = {101};
    
    for (vector<int> i : lines){
        for(int n = i[0]; n < i[1]; ++n){v.push_back(n);}
    }
    
    sort(v.begin(),v.end());
    int result = 0;    
    
    while(v.size()>1){
        int num = count(v.begin(),v.end(),*v.begin());
        if(num>1) result++;
        v.erase(v.begin(),v.begin()+num);
    }
    return result;
}