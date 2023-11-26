#include <bits/stdc++.h>
using namespace std;

void learnPairs()
{
    pair<int, int> p = {2, 4};
    cout << p.first << "\n"; // prints 2

    pair<int, pair<int, int>> q = {1, {3, 5}};
    cout << q.second.first << "\n"; // prints 3

    pair<int, int> arr[5] = {{0, 2}, {4, 6}, {8, 10}, {12, 14}, {16, 18}};
    cout << arr[1].first << "\n"; // prints 4
}

void learnVector()
{

    vector<int> currency{10, 20, 50, 100, 200}; // declraing a vector of size 5

    currency.emplace_back(500); // adding elem 500 into the vector = {10,20,50,100,200,500}

    cout << currency.back() << "\n"; // returns last elem of vector i.e 500

    // use of iterators
    //  vector<int>::iterator it = currency.begin(); // it is pointing to the address of first elem i.e 10
    //  it++;                                        // shifted to address of 20
    //  cout << *(it);                               // this will op elem 20

    // vector<int>::iterator it = currency.end(); // it is pointing to the address of elem after last elem i.e 500
    // it--;                                      // shifted to address of 500
    // cout << *(it);

    // differents ways for print the vector elements

    // using simple for loop

    // for(int i=0;i<currency.size();i++){
    //     cout<<currency[i]<<"\n";
    // }

    // using for loop vector iterator

    for (auto it = currency.begin(); it != currency.end(); it++) // auto will automatically assign data type according to data
    {
        cout << *(it) << " ";
    }
    cout << "\n";
    // using for each loop
    // for (auto it : currency)
    // {
    //     cout << it << "\n";
    // }

    // deletion in vectors
    currency.erase(currency.begin()); // 10 will be deleted
    // currency.erase(currency.begin(), currency.begin() + 3); // elements from index 0 to 2 will deleted

    // insert function
    currency.insert(currency.begin(), 5); // 5 will be inserted at first position

    cout << *(currency.begin()) << "\n"; // prints 5

    currency.pop_back(); // deletes the last element i.e 500

    currency.clear();         // deletes entire elements in the vector
    cout << currency.empty(); // return true/1 if empty
}

void learnLists()
{

    list<int> ls;
    ls.emplace_back(1000);
    ls.emplace_front(500); // less costly than vector method for inserting at begining
    cout << *(ls.begin()); // prints 500

    // all other List functions are similar to vector functions like: begin,end,rbegin,rend,clear,insert,size,swap.
}

void learnStack()
{

    // stack follows LIFO technique for insertion and deletion of elements and its complexity is O(1)
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.push(5); //{5,4,3,2,1}

    cout << st.top() << "\n"; // prints 5

    st.pop();
    cout << st.top() << "\n";

    st.push(10);
    cout << st.top() << "\n";

    cout << st.size() << "\n"; // returns size of stack

    cout << st.empty(); // return true if stack is empty
}

void learnQueue()
{

    // stack follows LIFO technique for insertion and deletion of elements and its complexity is O(1)
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    q.push(4); //{1,2,3,4}
    q.push(5); //{1,2,3,4,5}

    cout << q.front() << "\n";

    q.pop();
    cout << q.front() << "\n";

    cout << q.back() << "\n"; // prints 5
    q.push(10);
    cout << q.back() << "\n";

    cout << q.size() << "\n"; // returns size of queue

    cout << q.empty(); // return true if queue is empty
}

void learnPriorityQueue()
{
    // max-heap
    priority_queue<int> pq;
    pq.push(4);     //{4}
    pq.push(3);     //{4,3}
    pq.push(5);     //{5,4,3}
    pq.push(7);     //{7,5,4,3}
    pq.emplace(10); //{10,7,5,4,3}

    cout << pq.top() << "\n";
    pq.pop(); // deletes 10
    cout << pq.top() << "\n";

    // min-heap
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.emplace(10); //{10}
    mpq.emplace(5);  //{5,10}
    mpq.emplace(2);  //{2,5,10}
    mpq.emplace(1);  //{1,2,5,10}
    mpq.emplace(8);  //{1,2,5,8,10}

    cout << mpq.top() << "\n"; // prints 1

    mpq.pop();         // deltes 1
    cout << mpq.top(); // prints 2
}

void learnSet()
{
    set<int> s;
    s.emplace(10);
    s.emplace(5);
    s.emplace(4);
    s.emplace(1);
    s.emplace(5);
    s.emplace(10);
    s.emplace(7); //{1,4,5,7,10}

    auto it = s.find(7);
    cout << *(it) << "\n";

    int count = s.count(7);
    cout << count << "\n"; // return 1 if exist or else 0

    s.erase(it); // erase 7
    int count2 = s.count(7);
    cout << count2; // prints 0
}

void learnMap()
{
    map<int, int> mp;

    mp[1] = 3; // assigns 1st element with key 1 and val 3

    mp.insert({3, 5});

    mp.insert({2, 6});

    mp.insert({4, 6});

    for (auto it : mp) //({1,3},{2,6},{3,5},{4,6})
    {
        cout << it.first << " " << it.second << "\n";
    }

    cout << mp[4]; //prints val 6
}

int main()
{
    // learnVector();
    // learnPairs();
    // learnLists();
    // learnStack();
    // learnQueue();
    // learnPriorityQueue();
    // learnSet();
    learnMap();
}
