#include<bits/stdc++.h>
using namespace std;

int main() {
    // Also known as max heap (if it stores in ascending order, it is known as min heap)
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}
    // cout<<pq.top()<<endl; // Element which has largest value stays at the top
    // pq.pop(); // {8,5,2}
    // cout<<pq.top()<<endl;
    // cout<<pq.size()<<endl;

    priority_queue<int> pq2;
    pq2.push(1); // {1}
    pq2.push(2); // {2,1}
    pq2.push(3); // {3,2,1}

    // no clear(), no erase(), no insert()

    // swap() function
    // cout<<pq.top()<<", "<<pq2.top()<<endl;
    // pq.swap(pq2);   
    // cout<<pq.top()<<", "<<pq2.top()<<endl;

    // empty() function
    priority_queue<int> pq3;
    cout<<"is pq2 empty? = "<<pq2.empty()<<endl;
    cout<<"is pq3 empty? = "<<pq3.empty()<<endl;

    // Time Complexities
    // push, pop => O(logn)
    // top => O(1)
    return 0;
}