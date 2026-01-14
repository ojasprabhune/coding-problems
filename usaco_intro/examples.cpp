#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main() {
  // VECTORS
  vector<int> x = {42, 234, 32, 324, 75, 28, 24}; // size() and empty()

  // ITERATORS
  for (vector<int>::iterator it = x.begin(); it != x.end(); ++it) {
    cout << *it << "\n";
    ; // prints the values in the vector using the pointer
  }
  cout << "\n";

  // generic way with for-each loop and auto (C++11 and later); automatically
  // infers type of an object

  for (auto element : x) {
    cout << element << "\n";
  }
  cout << "\n";

  // DYNAMIC ARRAYS
  vector<int> v;
  v.push_back(2);         // [2]
  v.push_back(3);         // [2, 3]
  v.push_back(7);         // [2, 3, 7]
  v.push_back(5);         // [2, 3, 7, 5]
  v[1] = 4;               // sets element at index 1 to 4 -> [2, 4, 7, 5]
  v.erase(v.begin() + 1); // removes element at index 1 -> [2, 7, 5]
  // this remove method is O(n); to be avoided
  v.push_back(8);       // [2, 7, 5, 8]
  v.erase(v.end() - 1); // [2, 7, 5]
  // here, we remove the element from the end of the list; this is O(1).
  v.push_back(4);                    // [2, 7, 5, 4]
  v.push_back(4);                    // [2, 7, 5, 4, 4]
  v.push_back(9);                    // [2, 7, 5, 4, 4, 9]
  cout << v[2] << "\n";              // 5
  v.erase(v.begin(), v.begin() + 3); // [4, 4, 9]
  // this erases the first three elements; O(n)

  // use for or for-each loop to iterate
  // to sort: sort(v.begin(), v.end())

  // STACKS
  // last in first out data structure
  // top of stack is right side
  // push: adds element to top of stack
  // pop: removes element from the top
  // top: retrieves element at the top
  // "real world stack of papers"

  stack<int> s;
  s.push(1);                // [1]
  s.push(13);               // [1, 13]
  cout << s.size() << "\n"; // 2
  s.pop();                  // [1]
  cout << s.top() << "\n";  // 1
  s.pop();                  // []
  cout << s.size() << "\n"; // 0

  cout << "\n";

  // QUEUES
  // first in first out
  // push: insertion at back of queue (left side)
  // pop: deletion from the front
  // front: retrieves the element at the front without removing it

  queue<int> q;
  q.push(1);                 // [1]
  q.push(3);                 // [3, 1]
  q.pop();                   // [3]
  q.push(4);                 // [4, 3]
  cout << q.size() << "\n";  // 2
  cout << q.front() << "\n"; // 4

  cout << "\n";

  // DEQUES (pronounced "decks")
  // double ended queue
  // combination of stack and queue
  // adding and removing:
  // 1. push_back
  // 2. pop_back
  // 3. push_front
  // 4. pop_front
  // retrieving first and last elements:
  // 1. front
  // 2. back

  deque<int> d;
  d.push_front(1); // [1]
  d.push_back(2);  // [1, 2]
  d.push_front(3); // [3, 1, 2]
  d.push_back(4);  // [3, 1, 2, 4]
  d.pop_back();    // [3, 1, 2]
  d.pop_front();   // [1, 2]

  // PRIORITY QUEUES
  // insertion of elements
  // deletion of the element considered highest priority
  // retrieval highest priority element
  // all in O(log n) time according to # of elements in priority queue
  // priority based on comparator function
  // in C++, highest element put at front of queue
  // very important data structure in competitive programming
  // should know when and how to use it

  priority_queue<int> pq;
  pq.push(4);               // [4]
  pq.push(2);               // [2, 4]
  pq.push(1);               // [1, 2, 4]
  pq.push(3);               // [1, 2, 3, 4]
  cout << pq.top() << endl; // 4
  pq.pop();                 // [1, 2, 3]
  pq.pop();                 // [1, 2]
  pq.push(5);               // [1, 2, 5]

  return 0;
}
