#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(1); // it will push element from back {1}
    q.push(2); // {1,2}
    q.push(4); // {1,2,4}
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop(); // it will remove element from front {2,4}
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    
    // emplace(), empty(), swap() functions are same as stack
    return 0;
}