#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main()
{
  vector<int>v = {1, 5, 8, 6, 2};
  unordered_set<int>us;

  us.insert(v.begin(), v.end());

  for(int i:us)
  {
    cout<<i<<" ";
  }

  // us.begin() gives the first element in hash-based internal storage, and this is not guaranteed to be any specific element unless the container is sorted like in set.

  // If it prints 8, that’s just the second element in the hash-based iteration — not the second you inserted or the second smallest.

  auto it = us.begin();
  cout<< *(next(it,2)) << endl; // Accessing the second element using next
  

  auto it = us.begin();
  advance(it, 2);  // move iterator 2 steps forward

  cout << "Element at position 3: " << *it << endl;




  return 0;
}