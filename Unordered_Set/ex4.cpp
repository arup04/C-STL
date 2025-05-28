#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
  unordered_set<int>us;

  cout<< us.insert(1).second << endl;; 
  us.insert(5);

  cout<< *(us.insert(5).first) << endl;;


  for(int i: us)
  {
    cout<< i <<" ";
  }

  return 0;
}