#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main()
{
  vector<int>v = {1, 5, 8, 6, 2};
  unordered_set<int>us;

  // Insert only the first 4 elements from the vector into the unordered set
  // [0,4)
  us.insert(v.begin(), v.begin() + 4);

  for(int i:us)
  {
    cout<<i<<" ";
  }
  
  return 0;
}