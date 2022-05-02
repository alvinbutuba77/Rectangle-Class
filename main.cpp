//using class to find area perimeter of rectangle
#include <iostream>
using namespace std;

class Rectangle
{//declarations
private:
    int len, wid, area, peri;

public:
    void input();
    void compute();
    void output();

};
//member function definitions
void Rectangle::input()
{
    cout <<"enter length: ";
    cin >> len;

    cout << "enter width: ";
    cin >> wid;
}

void Rectangle::compute()
{
    area = len * wid;

    peri = 2 * (len + wid);
}

void Rectangle::output()
{
    cout <<"\n area is: " << area;

    cout <<"\n perimeter is: " << peri;

}

int main()
{
    Rectangle r; //object

    r.input();
    r.compute();
    r.output();

} //end main
