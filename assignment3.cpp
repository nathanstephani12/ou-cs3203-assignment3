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

int main(){
    vector<int> list = {};
    int input;
    while(cin >> input){ //takes unput until a non-integer is given
        list.push_back(input); 
    }
    int sum = ArraySum(list);
    cout << sum << endl;
    int product = ArrayProduct(list);
    cout << product << endl;
    list = ReverseArray(list);
    for(int i : list){
        cout << i << " ";
    }
    return 0;
}
