#include<iostream>
using namespace std;
class suvrodeb
{
    public:
    int c,f;
    void math(void);
};
void suvrodeb::math(void)
{
    cout<<"Write a Temperature in Fahrenheit scale=";
    cin>>f;
    c=((32-(5*f)))/9;
    cout<<"Temperature in Celsius scale="<<c;
}
int main()
{
    suvrodeb s;
    s.math();
    return 0;
}
