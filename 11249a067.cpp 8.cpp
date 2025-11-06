#include<iostream>
using namespace std;
class complex
{
    float real,img:
    public:
    complex(float r=0,float f=0)
{
    real = r;
    img = i;
}
complex and complex()
{
    complax temp; 
    temp.real = real + c.real;
    temp.img = img = c.img;
    return temp;
}
void display() {
    cout<<real<<"+"<<img<<"i"endl;
}
};
int main()
{
    complex c1(3,1),c2(1,7), c3;
    c3 = c1.add(c2);
    cout<<"first complex number:";
    c1.display();
    cout<<"second complex number:";
    c2.display();
    cout<<"sum:";
    c3.display();
    return 0;
}