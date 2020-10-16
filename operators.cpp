
/*overloading the unary - operator*/
/*#include <iostream>
using namespace std;
class space
{
    int a;
    int b;
    int c;
public:
    space(int,int, int);
    void display(void);
    //void operator-();
    friend void operator-(space&);
};
space::space(int x, int y, int z)
{
    a=x;
    b=y;
    c=z;
}
void space::display(void)
{
    cout<<"The values of the member variables are: "<<endl<<a<<endl<<b<<endl<<c<<endl;
}
//void space::operator-()
void operator- (space& s)
{
    /*a=-a;
    b=-b;
    c=-c;*/

/*    s.a=-s.a;
    s.b=-s.b;
    s.c=-s.c;
}
int  main()
{
    space S(1,2,3);
    S.display();
    -S;
    S.display();
    return 0;
}*/
//Adding two complex no objects using an overloaded + operator
/*#include <iostream>
using namespace std;
class comp
{
    float r;
    float i;
public:
    comp(){}
    comp(float, float);
    //comp operator+(comp);
    friend comp operator+(comp, comp);
    void display(void);
};
comp::comp(float R, float I)
{
    r=R;
    i=I;
}
//comp comp::operator+(comp c2)
comp operator+(comp c1, comp c2)
{
    /*comp temp;
    //temp.r = r+ c2.r;
    temp.r= c1.r + c2.r;
    //temp.i = i+ c2.i;
    temp.i= c1.i + c2.i;
    return temp;*/
/*    return comp((c1.r + c2.r),(c1.i + c2.i));
}
void comp::display(void)
{
    cout<<endl<<"The complex number is: "<<r<<" + "<<i<<'i'<<endl<<endl;
}
int main()
{
    comp C1(1,2);
    cout<<"C1:";
    C1.display();
    comp C2(2,3);
    cout<<"C2:";
    C2.display();
    comp C3=C1+C2;
    cout<<"SUM:";
    C3.display();
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while(cin>>a>>b)
    {
        cout<<a+b<<endl<<endl;
    }
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b))
    {
        printf("%d\n\n", a+b);
    }
    return 0;
}*/
















