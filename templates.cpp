/*#include <iostream>
using namespace std;
const int s=3;
template <class T>
class vect
{
    T* v;
public:
    vect()
    {
    v= new T[s];
    for(int i=0; i<s; i++)
        {
            *(v+i)=0;
        }
    }
    void setval(T* abc)
    {
        for(int i=0; i<s; i++)
        {
            *(v+i)=*(abc+i);
        }
    }
    T operator*(vect& ghgh)
    {
        T sum=0;
        for(int i=0; i<s; i++)
        {
            sum+=this->v[i] * ghgh.v[i];
        }
        return sum;
    }


};
int main()
{

    float x[]={1.1,2.2,3.3};
    float y[]={4.4,5.5,6.6};
    vect <float> v1;
    vect <float> v2;
    v1.setval(x);
    v2.setval(y);
    float R= v1*v2;
    cout<<R;
    return 0;
}
/*#include <iostream>
#define s 3
using namespace std;
template <class T>
class c
{
    int* v;
public:
    c()
    {
        for(int i=0; i<s; i++)  v[i]=0;
    }
    setval(T* abc)
    {
        for(int i=0; i<s; i++)  v[i]=abc[i];
    }
    T operator*(c& ghgh)
    {
        T sum=0;
        for(int i=0; i<s; i++)
        {
            sum+=this->v[i] * ghgh.v[i];
        }
        cout<<sum;
        return sum;
    }

};
int main()
{
    float x[]={1.1,2.2,3.3};
    float y[]={4.4,5.5,6.6};
    c <float> v1;
    c <float> v2;
    v1.setval(x);
    v2.setval(y);
    float R= v1*v2;
    cout<<endl<<R;
}
#include <iostream>
using namespace std;
template <class t1, class t2>
class c
{
    t1 a;
    t2 b;
public:
    c(t1 a, t2 b)   {this->a=a; this->b=b;}
    c& changeA(t1 a) {this->a=a; return *this;}
    void changeB(t2 b) {this->b=b;}
    void display(void) {cout<<a<<' '<<b<<endl;}
};
int main()
{
    c <int, float> obj(1, 10.345);
    obj.display();
    obj.changeA(10).changeB(20.33);
    obj.display();
    c <int, char> obj2(1234, 'c');
    obj2.display();
    return 0;
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
template <class T>
void swapper(T& a, T& b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
template <class S>
void bubble(S* arr, int n)
{
    int /*n=sizeof(arr)/sizeof(S) flag=0;
  /*  for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapper(arr[j], arr[j+1]);
            }
        }
    }
}
int main()
{
    int i[]={9,4,2,3,8,5,7,1,0,6};
    float f[]={9.0,4.0,2.0,3.0,8.0,5.0,7.0,1.0,0.0,6.0};
    bubble(i, (sizeof(i)/sizeof(i[0])));
    bubble(f, (sizeof(f)/sizeof(f[0])));
    for(int j=0; j<10; j++)
    {
        cout<<i[j]<<endl;
    }
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    for(int j=0; j<10; j++)
    {
        cout<<fixed<<setprecision(2)<<f[j]<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
template <class T>
T findMin(T* arr, int n)
{
    T mini=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    return mini;
}
int main()
{
    int ints[5]={1,9,2,0,-1};
    char chars[5]={'f','1','F',';','-'};
    int i=findMin(ints, 5);
    char c=findMin(chars, 5);
    cout<<"Smallest integer= "<<i<<"\nSmallest character= "<<c;
}*/












