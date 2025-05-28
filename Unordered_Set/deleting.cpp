#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main()
{
  unordered_set<int>us;

  us.insert(1);
  us.insert(5);
  us.insert(8); 
  us.insert(6); 
  us.insert(2); 

  for(int i: us)
  {
    cout << i << " ";
  }

  // Deleting an element by value from the unordered set
  us.erase(5); 
  cout << "\nAfter deleting 5:\n";

  for(int i: us)
  {
    cout << i << " ";
  }

  // Deleting an element by position/iterator from the unordered set
  us.erase(us.begin());

  cout << "\nAfter deleting the first element:\n";

  for(auto it = us.begin(); it != us.end(); it++)
        cout << *it << " ";

  return 0;
}