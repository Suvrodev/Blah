#include<iostream>
#include<math.h>
using namespace std;
class suvrodeb
{
public:
    float pi=3.1416;
    float area,redious,side,base1,base2,height;
    float diagonal1,diagonal2;
    void circle(void);
    void square(void);
    void trapezium(void);
    void rhombus(void);
};
void suvrodeb::circle(void)
{
    cout<<"Give the value of Redious of the circle=";
    cin>>redious;
    area=pi*pow(redious,2);
    cout<<"Area of the Circle="<<area<<endl;
}
void suvrodeb::square(void)
{
    cout<<"Give the value of a side of square=";
    cin>>side;
    area=pow(side,2);
    cout<<"Area of the Square is="<<area<<endl;
}
void suvrodeb::trapezium(void)
{
    cout<<"Enter the 1st base of Trapezium=";
    cin>>base1;
    cout<<"Enter the 2nd base of Trapezium=";
    cin>>base2;
    cout<<"Enter the height of Trapezium=";
    cin>>height;
    area=0.5*(base1+base2)*height;
    cout<<"Area of the Trapezium is="<<area<<endl;
}
void suvrodeb::rhombus(void)
{
    cout<<"Enter the 1st diagonal of Rhombus=";
    cin>>diagonal1;
    cout<<"Enter the 2nd diagonal of Rhombus=";
    cin>>diagonal2;
    area=0.5*diagonal1*diagonal2;
    cout<<"Area of the Rhombus is="<<area<<endl;
}
int main()
{

    for(;;)
    {
    suvrodeb v;
    char s,ss;
    cout<<"Press C to Circle T for Trapezium R for Rhombus and S for Square=";
    cin>>s;
    if(s=='s')
        v.square();
    else if(s=='t')
        v.trapezium();
    else if(s=='r')
        v.rhombus();
    else if(s=='c')
        v.circle();
        cout<<"Press Y to continue and X to exit=";
        cin>>ss;
        if(ss!='y')
            break;
    }
    return 0;

}

