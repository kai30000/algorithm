#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int t = 0;
    for(int i : num_list)
    {if (i == n)
    {t = 1;
     break;
     }}     
    return t;
}