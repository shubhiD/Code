#include<iostream>
#include<cmath>
int calc(int );
using namespace std;
int main()
{
    int A[26][2]={{1,1},
                  {2,2},
                  {3,4},
                  {7,6},
                  {8,9},
                  {15,16},
                  {24,18},
                  {32,20},
                  {35,24},
                  {63,36},
                  {80,40},
                  {104,48},
                  {224,90},
                  {384,112},
                  {560,128},
                  {935,144},
                  {1224,162},
                  {1664,168},
                  {1728,192},
                  {2015,240},
                  {2079,320},
                  {5984,480},
                  {12375,576},
                  {14399,648},
                  {21735,768},
                  {41040,1024}};
    int tc;
	cin>>tc;
	while(tc--)
	{
		int i,j;
        long long int N;
		cin>>N;

		for(i=0;i<26;i++)
        {
		if(A[i][1]>N)
            {
		     cout<<((A[i][0])*((A[i][0])+1))/2<<"\n";
            break;
             }
        }

	}
	return 0;
}


