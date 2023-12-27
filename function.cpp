#include<iostream>
using namespace std;
class function
{
    public:
    int maxValue(int a,int b,int c,int d)
    {
        if(a>b && a>c && a>d)
        {
            return a;
        }
        else if(b>a && b>c && b>d)
        {
            return b;
        }
        else if(c>a && c>b && c>d)
        {
            return c;
        }
        else
        {
            return d;
        }
    }
};
int main()
{
    int n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;

    function obj;

    int max = obj.maxValue(n1,n2,n3,n4);
    cout << max << endl;
}