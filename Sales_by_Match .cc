#include <iostream>
#include<vector>
#include<unordered_map>

// log(n) solution using STL sort
int sockMerchant(int n,std::vector<int>ar)
{
  int pairs{ 0 },curr{ 1 };
  std::sort(ar.begin(),ar.end());
  for(int i{ 0 }; i<n;++i)
  {
    if(ar[i]==ar[i+1])
    {
      curr++;
    }
    else
    {
      if(curr==1)
      {
        continue;
      }
      pairs+=(curr)/2;
      curr=1;
    }
  }
  return pairs;
}
 // linear solution using STL hash map
int sockMerchant(int n,std::vector<int>ar)
{
  std::unordered_map<int,int>socks;
  int pairs{ 0 };
  for(int&sock:ar)
  {
    socks[sock]+=1;
    if(socks[sock]%2==0)
    {
      pairs++;
    }
  }
  return pairs;
}
