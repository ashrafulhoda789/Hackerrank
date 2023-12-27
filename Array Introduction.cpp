#include<iostream>
using namespace std;
class arrayIntroduction
{
    public:
    void reverseArray(int arr[],int x)
    {
        for(int i=x-1; i>=0; i--)
        {
            cin >> arr[i];
            cout << arr[i] << " " ;
        }
    }
};
int main()
{
    int array[10];
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    arrayIntroduction obj;
    obj.reverseArray(array,n);
}