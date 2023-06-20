#include <iostream>
using namespace std;

void getSumDiff(int a, int b, int& sum, int& diff)
{
    sum=a+b;
    diff=a-b;
}
int main(void)
{
    int a,b;
    cin>>a>>b;
    int sum=0;
    int diff=0;
    getSumDiff(a,b,sum,diff);
    cout<<"sum: "<<sum<<endl;
    cout<<"diff: "<<diff<<endl;

}
