#include <string>
#include <vector>
#include <numeric>
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int Numer = numer1*denom2 + numer2*denom1, Denom = denom1*denom2;
    vector<int> answer = {Numer/std::gcd(Numer,Denom), Denom/std::gcd(Numer,Denom)};
    
        
    
     
    return answer;
}