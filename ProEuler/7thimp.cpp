#include <iostream>
#include<vector>
using namespace std;
long long int prime(long long int);
int main()
{
   long long int tc,N;
   cin>>tc;
   vector <long long int>v;
    long long int arr[150000] = {0},i,j;
    for (i = 2; i < 150000; i++)
    {
        for ( j = i * i; j < 150000; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 150000; i++)
    {
        if (arr[i - 1] == 0)
            v.push_back(i);
    }
   while(tc--)
   {
       cin>>N;
       cout<<v.at(N)<<"\n";
   }
   return 0;
}

