#include <iostream>
using namespace std;

int updateAdd(int *a,int *b) 
{
   
    int sum;

    sum = *a + *b;
    return sum;
}
int updateSub(int *a,int *b)
{
    int sub;
    if(*a>*b)
    {
        sub = *a - *b;
    }
    else {
        sub = *b - *a;
    }
    return sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> *pa >> *pb;
    int add = updateAdd(pa, pb);
    cout << add <<endl;

    int subs = updateSub(pa,pb);
    cout << subs << endl;
    
}