/*Write a program(Use Class) with the following :

a) A function to read two double type numbers from keyboard
b) A function to calculate the division of these two numbers
c) A try block to throw an exception when a wrong type of data is keyed in
d) A try block to detect and throw an exception if the condition “divide - by - zero” occurs
e) Appropriate catch block to handle the exceptions thrown*/

#include <iostream>
using namespace std;

class test
{
    double a, b;
public:
    void read_data(void)
    {
        cout << "Enter two doubles:\n";
        cin >> a >> b;
        if (!(cin >> a >> b)) throw a; //if wrong data type is entered, then the catch block is invoked
        
    }
    void division(void);
};
void test::division(void)
{
    if (b == 0.0) throw b; //if division by 0 occurs, then catch block is invoked.
    else cout << endl << "a/b = " << a / b;
}
int main()
{
    test t;
    try
    {
        t.read_data();
        t.division();
    }
    catch(double d)
    {
        cout << endl << "Caught the exception.";
    }
    return 0;
}


