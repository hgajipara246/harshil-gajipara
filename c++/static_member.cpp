#include<iostream>
using namespace std;
class circle
{
    int r;
    public:
    static int count;  // static member
    void setdata(int n)
    {
        r = n;
        count++;
    }
    void getdata()
    {
        cout<<"Area of circle is : "<<(3.14*r*r)<<endl;
    }
};
int circle :: count = 15;
int main()
{
    cout<<"Intial Counting is :"<<circle::count<<endl;
    circle a,b,c;
    a.setdata(20);
    a.getdata();
    b.setdata(30);
    b.getdata();
    c.setdata(50);
    c.getdata();

    cout<<"Counting of object is : "<<circle::count<<endl;
}