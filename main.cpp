#include <iostream>
#include <vector>
using namespace std;
int getSum(vector<int>& input)
{
    int sum=0;
    for(int i=0;i<input.size();i++)
    {
        sum+=input[i];

    }
    return sum;

};

int main()
{
    int arr[] = {1,2,3,4,5};
vector<int> A(arr, arr+sizeof(arr)/sizeof(arr[0]));
    cout<<getSum(A);
    return 0;
}
