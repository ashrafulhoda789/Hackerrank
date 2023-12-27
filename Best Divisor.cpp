#include<iostream>
#include<math.h>
using namespace std;
class divisor
{
    public:
    void display()
    {
        int n,r,div,sum_div=0;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                int temp = i;
                int sum = 0;

                while(temp>0)
                {
                    r = temp%10;
                    sum = sum + r;
                    temp = temp/10;
                }
                if(sum > sum_div)
                {
                    div = i;
                    sum_div = sum;
                }
            }
        }
        cout<< div <<endl;
        
    }
};
int main()
{
    divisor obj;
    obj.display();
    return 0;
}