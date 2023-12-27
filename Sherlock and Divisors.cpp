#include<iostream>
#include<math.h>
using namespace std;
class divisor
{
    public:
    void display()
    {
        int t,cnt=0;
        cin >> t;
        
        while(t--)
        {
            int n;
            cin >> n;
            for(int i=1; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    if(i%2==0)
                    {
                        cnt++;
                    }
                    if((n/i)%2==0 && (n/i)!=i)
                    {
                        cnt++;
                    }
                }
                
            }
            cout << cnt <<endl;
        }
    }
};
int main()
{
    divisor obj;
    obj.display();
    return 0;
}