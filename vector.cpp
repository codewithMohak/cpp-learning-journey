#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec;
    vector<int> vec={1,2,3,4,5,6,7};


    // vec.insert(vec.begin() + 2, 100);

    // vec.erase(vec.begin() +1 , vec.begin() +4); // Time Complexity O(n)

    // vector<int> vec2(vec);
    // vector<int> vec(10, -1);

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.push_back(6);
    // vec.push_back(7);
    // vec.emplace_back(8);

    // vec.pop_back();

    for(int val :vec ){
        cout << val << " ";
    }
    cout << endl;

    cout << "Val of Index 2: " << vec[2] << " or " << vec.at(2) << endl ; 

    cout << "First Element : " << vec.front() << endl;
    cout << "Last Element : " << vec.back() << endl;

    cout << vec.empty() << endl; // 0 if vector is not empty and 1 if vector is empty

    cout << vec.size() << endl; // Number of elements store in the vector
    cout << vec.capacity() << endl;

    return 0;
}