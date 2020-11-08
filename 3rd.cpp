 #include<iostream>
 #include<string>
 using namespace std;
 class suvrodeb
 {
 public:
     string s="Shakib Al Hssan";
     string t="Tamim Iqbal";
     string m="Musfiqur Rahim";
     float s1=6062,t1=5689,m1=5521;
     int s2=200,t2=167,m2=171;
     int s3=20,t3=10,m3=15;
     void avarage (void);
 };
void suvrodeb::avarage(void)
{
    cout<<"     Name        Runs Innings  Time Not Out Average"<<endl;
    cout<<s<<"     "<<s1<<" "<<s2<<" "<<s3<<" "<<s1/s2<<endl;
    cout<<t<<"        "<<t1<<" "<<t2<<" "<<t3<<" "<<t1/t2<<endl;
    cout<<m<<"       "<<m1<<" "<<s2<<" "<<s3<<" "<<s1/s2<<endl;
}
int main()
{
    suvrodeb s;
    s.avarage();
    return 0;
}
