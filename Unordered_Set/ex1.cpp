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
  
  cout<< endl;
// finding elements if it exits or not
auto itr = us.find(3);

if(itr == us.end())
  cout << "Element not found" << endl;
else
  cout << "Element found: " << *itr << endl;

itr = us.find(5);


// Check if the element is found
if(itr == us.end())
  cout << "Element not found" << endl;
else
  cout << "Element found: " << *itr << endl;


  return 0;
}