#include <iostream>
#include<vector>
#include<unordered_map>

// O(nlog(n)) time O(1) space solution using STL sort
// using sort allows all duplicates to be adjacent so we can count all pairs
int sockMerchant(int n,std::vector<int>ar)
{
  int pairs{ 0 },curr{ 1 };
  std::sort(ar.begin(),ar.end());
  for(int i{ 0 }; i<n;++i)
  {
    if(ar[i]==ar[i+1]) // counting amount of current sock type
    {
      curr++;
    }
    else
    {
      if(curr==1) // no pair found, continue to next iteration
      {
        continue;
      }
      pairs+=(curr)/2; // integer division will ignore any extra sock if curr count is greater than two but odd
      curr=1; // reset curr if pairs were found to count next set of pairs
    }
  }
  return pairs;
}
 // O(n) time and space solution using STL hash map
// using unordered_map will allow for constant look up and increment to count all kinds of socks
int sockMerchant(int n,std::vector<int>ar)
{
  std::unordered_map<int,int>socks;
  int pairs{ 0 };
  for(int&sock:ar)
  {
    socks[sock]+=1;
    if(socks[sock]%2==0) // each time we find a pair increment
    {
      pairs++;
    }
  }
  return pairs;
}
