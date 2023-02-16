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

int ArrayProduct(vector<int> arr){
    int product = 1;
    for(int i : arr){
        product *= i;//multiplies each element by each other
    }
    return product;
}
