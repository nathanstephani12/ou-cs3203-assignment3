#include <iostream>
#include <vector>

using namespace std;

int ArraySum(vector<int> arr){
    int sum = 0;
    for(int i : arr){
        sum += i;//sums all elements
    }
    return sum;
}