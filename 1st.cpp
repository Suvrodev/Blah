 #include<iostream>
#include<math.h>
using namespace std;
class suvrodeb
{
public:
    int x,y,z;
    void input(void);
    void math(void);
};
void suvrodeb::input(void)
{
    cout<<"Enter the value of X=";
    cin>>x;
    cout<<"Enter the value of Y=";
    cin>>y;

}
void suvrodeb::math(void)
{
    input();
    z=(2*pow(x,10))+(3*pow(y,8))-31;
    cout<<"Value of Z="<<z<<endl;
}
int main()
{
    suvrodeb s;
    s.math();
    return 0;
}
