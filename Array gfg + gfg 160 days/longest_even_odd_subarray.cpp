#include <iostream>
#include <cmath>
using namespace std;


int maxEvenOdd(int arr[], int n)
{
	int res = 1;
	int curr = 1;

	for(int i = 1; i < n; i++)
	{
			if((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0)
			   ||(arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
				{
					curr++;

					res = max(res, curr);
				}
				else
					curr = 1;
	}
	
	return res;
}



int main() {
	
     int arr[] = {1, 2, 3, 4, 5, 7, 9}, n = 7;

     cout<<maxEvenOdd(arr, n);
    
}