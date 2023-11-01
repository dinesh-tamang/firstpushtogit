#include<iostream>
using namespace std;
class conversion{
  double con=0;
  double temp;
  char unit;
  public:
  void getdata();  
  void getdata1();
  int calculate();
  void showdata();
};
void conversion::getdata()
{
    cout<<"enter the unit"<<endl;
    cout<<"press f to convert into ferhenit"<<endl;
    cout<<"press c to convert into celsus"<<endl;
    cin>>unit;
}
int conversion::calculate()
{
    if( unit=='f'|| unit == 'F')
    {
        con = con+ ((9*temp) + 160)/5 ;
        return con;
    }
    else if(unit=='C'|| unit=='c')
    { 
        con = con + ( (5*temp) - 160 )/9;
        return con;
    }
}
void conversion:: showdata()
{
    cout<<"the converted data is :"<<con<<endl;
}
void conversion ::getdata1(){
    cout<<"enter the temperature:"<<endl;
    cin>>temp;
}
int main()
{
    conversion p;
    p.getdata();
    p.getdata1();
    p.calculate();
    p.showdata();
    return 0;
} 