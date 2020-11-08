#include<iostream>
#include<string>
using namespace std;
class suvrodeb
{
public:
    int x,y,z;
    int i;
    float v1,v2,v;
    string ss;
    void display(void);
    void display(int,string);
    float display(float,float);
};
void suvrodeb::display(void)
{
    cout<<"Enter a value for reminder=";
    cin>>x;
    cout<<"Enter another value for Reminder=";
    cin>>y;
    z=x%y;
    cout<<"Reminder value="<<z<<endl;
}
void suvrodeb::display(int w,string ss )
{

    for(i=1;i<=w;i++)
    {
        cout<<i<<"."<<ss<<endl;
    }
}
float suvrodeb::display(float v1, float v2)
{
    v=v1/v2;
    return v;
}
int main()
{
    int w;
    float v1,v2;
    string ss;
    suvrodeb s;
    s.display();
    cout<<"How many Time Do you want to show=";
    cin>>w;
    cout<<"What thing do you want to show=";
    cin.ignore();
    getline(cin,ss);
    s.display(w,ss);
    cout<<"Please write 1st digit for devided=";
    cin>>v1;
    cout<<"Please write 2nd digit for devided=";
    cin>>v2;
    cout<<"The devided value="<<s.display(v1,v2);
    return 0;
}

