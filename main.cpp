#include <iostream>
#include <vector>
#include <bits/stdc++.h>
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

float getAverage(vector<int>& input)
{
    int sum=0;
    float average=0;
    for(int i=0;i<input.size();i++)
    {
        sum+=input[i];

    }
    average=float(sum)/input.size();

    return average;

}


int getMin(vector<int>&input)
{
  int minvalue=*min_element(input.begin(), input.end()) ;
    return minvalue;
};

int main()
{
    int arr[] = {-1,2,3,-4,5,6,7,8,9,10};
vector<int> A(arr, arr+sizeof(arr)/sizeof(arr[0]));
    cout<<getSum(A)<<"\n";
    cout<<getAverage(A)<<"\n";
    cout<<getMin(A);
    return 0;
}
