#include <bits/stdc++.h>
using namespace std;

// Main function to run the program
int main()
{
   int arr[] = {10, 30, 40, 20, 10, 20, 50, 10};
   int n = sizeof(arr)/sizeof(arr[0]);

   unordered_map <int, int>mp;
   int count_dis=0;

   for(int i=0; i<n; i++)
      mp[arr[i]]++;

   for(auto it=mp.begin(); it!=mp.end(); it++){
       if(it->second==1)
          cout<<it->first<<" ";
   }
}
