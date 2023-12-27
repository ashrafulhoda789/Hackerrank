#include<iostream>
using namespace std;
class multiple
{
    public:
    void display()
    {
        int t;
        cin >> t;
        while(t--)
        {
            int n,sum=0,j=1;
            cin >> n;
            while(j<n)
            {

                if(j%3==0 || j%5==0)
                {
                    sum = sum + j;
                }
            }
            cout << sum;
        }
    }
};
int main()
{
    multiple obj;
    obj.display();
    return 0;
}