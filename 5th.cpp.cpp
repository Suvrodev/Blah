#include<iostream>
#include<string>
using namespace std;
class suvrodeb
{
private:
    int value,d;
    int f1(void);
protected:
    void f2(int v1);
};
int suvrodeb::f1(void)
{
    d=1;
    while(value!=0)
    {
        d=d*value;
        value--;
    }
    return d;
}
void suvrodeb::f2(int x)
{
    value=x;
    cout<<"The factorial value="<<f1()<<endl;
}
class me
{
protected:
    int r1,r2,r;
    int f3(void);
public:
    void f4(int,int);
};
int me::f3(void)
{
    r=r1%r2;
    return r;
}
void me::f4(int x,int y)
{
    r1=x;
    r2=y;
    cout<<"Reminder value="<<f3()<<endl;
}
class iam:protected suvrodeb,public me
{
protected:
    int i,w;
    string x,x1;
    void f5(void);
public:
    void f6(int,string);
    void f2a(int);
    void f4a(int,int);

};
void iam::f5(void)
{
    if(x=="Suvrodev Howlader")
    {
        x1="Student Of CSE";
    }
    else
    {
        x1=x;
    }
    for(i=1;i<=w;i++)
    {
        cout<<i<<"."<<x1<<endl;
    }
}
void iam::f6(int ww,string xx)
{
    w=ww;
    x=xx;
    f5();
    cout<<endl;
}
void iam::f2a(int v)
{
    f2(v);
}
void iam::f4a(int aa,int bb)
{
    f4(aa,bb);
}
int main()
{
    for(;;)
    {
     char sd,sd1,sd2;
    int value,r1,r2,w;
    string x;
    iam a;
    cout<<"Press f for factorial R for Reminder and l for loop=";
    cin>>sd1;
    if(sd1=='f')
    {
    cout<<"Enter a value for Factorial=";
    cin>>value;
    a.f2a(value);
    }
    else if(sd1=='r')
    {
    cout<<"Enter 1st value for Reminder=";
    cin>>r1;
    cout<<"Enter 2nd value for Reminder=";
    cin>>r2;
    a.f4a(r1,r2);
    }
    else if(sd1=='l')
    {
    cout<<"How many Time do you want to show=";
    cin>>w;
    cout<<"What thing do you want to show=";
        cin.ignore();
        getline(cin,x);
    a.f6(w,x);
    }
    cout<<"Press C to continue and Eny digit to Ecit=";
    cin>>sd;
    if(sd!='c')
        break;
    }
    return 0;
}


