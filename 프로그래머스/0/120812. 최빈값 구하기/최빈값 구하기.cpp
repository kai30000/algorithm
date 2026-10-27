#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    
    
    vector<int> Array = array;
    sort(Array.begin(),Array.end());
    Array.erase(unique(Array.begin(),Array.end()),Array.end());
    
    int maxnumber = -1, notone = 0, howmuch =-1;
    for(int i = 0; i<Array.size(); ++i){
        int num = count(array.begin(), array.end(), Array[i]);
        
        if (num > howmuch){
            maxnumber = Array[i];
            howmuch = num;
            notone = 0;
            }
        else if(num == howmuch){
                notone = 1;
        }
        
    }
        return (notone == 0)?maxnumber:-1;    
}