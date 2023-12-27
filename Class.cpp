#include<iostream>
using namespace  std;
class definition
{
    public:

    void year(int age)
    {
        cout << age << endl;
    }
    void name(string lname,string fname)
    {
        cout << lname << ", " << fname << endl;
    }
    void standard(int st)
    {
        cout << st << endl<< endl;
    }
    void display(int age,string fname,string lname,int st)
    {
        cout << age << "," << fname << "," << lname << "," << st << endl;
    }
};
int main()
{
    definition obj;
    int a;
    string first;
    string last;
    int std;
    cin >> a >> first >> last >> std;

    obj.year(a);
    obj.name(last,first);
    obj.standard(std);
    obj.display(a,first,last,std);
}