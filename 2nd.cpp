 #include<iostream>
using namespace std;
class suvrodeb
{
public:
    int i,j;
    void stair(void);
};
void suvrodeb::stair(void)
{
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
         cout<<i;
         cout<<endl;
    }
}
int main()
{
    suvrodeb s;
    s.stair();
    return 0;

}
