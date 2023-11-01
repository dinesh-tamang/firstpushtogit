#include<iostream>
#include<time.h>
using namespace std;
class guess{
    int num;
    int gues;
    int tries =0;
    public:
    void generator();
    void decoration();
    void strik();
    void calculate();
    
};
void guess ::calculate()
{
    do{
    cout<<"enter the number to play game"<<endl;
    cin>>gues;
    tries++;
     if(gues == num)
    {
        cout<<"************************correct*****************************";
    }
    else if(gues>num)
    {
        cout<<"too high"<<endl;
    }
    else if(gues<num)
    {
        cout<<"TOO low"<<endl;
    }
    }
    while(num != gues);
   
}

void guess:: strik()
{
    cout<<"************************************************************";
}
void guess::decoration()
{
    cout<<"************Number guessing game***********";
    cout<<"*****hello everyone try your luck and win the price****";
}

void guess::generator()
{
    
    srand(time(NULL));
    num = (rand()%6) + 1;
}

int main()
{
    guess p;
    p.decoration();
    p.strik();
    p.strik();
    p.strik();
    p.strik();
    p.strik();
    p.strik();
    p.generator();
    p.calculate();
    p.strik();
    p.strik();
    p.strik();
    p.strik();
    p.strik();
    p.strik();
    cout<<"********************************Thank you************************"<<endl;
    
    
    
    return 0;

}