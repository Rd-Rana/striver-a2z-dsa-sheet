#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Creating a vector */
    // vector<int> v1; // creates an empty vector
    // v1.push_back(8);
    // v1.emplace_back(5); // faster than push_back()

    // vector<pair<int, int>> v2;
    // v2.push_back({1,2});
    // v2.emplace_back(1,2); // It automatically assumes that given parameter is of 'pair' datatype.

    // vector<int> v3(5, 100); // {100,100,100,100,100};

    // vector<int> v4(5); // Vector of size 5 is created => {0,0,0,0,0}
    // for (int i = 0; i < v4.size(); ++i) cout<<v4[i]<<" ";

    // vector<int> v5(5, 17); // v5 = {17,17,17,17,17}
    // vector<int> v6(v5); // v6 = {17,17,17,17,17} copied

    /* Ways to access vectors */
    // vector<int> v7 = {20,10,15,5,7};
    // for (int i = 0; i < v7.size(); ++i) cout<<v7[i]<<" "; // cout<<v7.at(i)<<" ";

    // vector<int> v = {20,10,15,5,7};
    // vector<int>::iterator it = v.begin(); // iterator points to memory address of the first element in vector v
    // printf("%p\n", it);
    // cout<<*(it)<<endl;
    // it = v.end(); // iterator will point to memory location after the last element of vector
    // it = v.rend(); // iterator will point to memory location before the first element of vector
    // it = v.rbegin(); // iterator will point to memory location of last element of vector
    // it++; // will point next memory location
    // cout<<*(it)<<endl;
    // cout<<v.back()<<endl; // returns the last element

    /* Ways to print vector */
    // vector<int> v = {10,20,30,40,50};
    // for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) cout<<*(it)<<" ";
    // for (auto it = v.begin(); it != v.end(); ++it) cout<<*(it)<<" ";
    // for (auto it : v) cout<<it<<" "; // Here, 'it' is an integer value
    return 0;
}