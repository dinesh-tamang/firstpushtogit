#include <iostream>
using namespace std;
#include <string.h>
class Demo
{
    char *name;

public:
    Demo(char *str)
    {
        int len;
        len = strlen(str);
        name = new char[len + 1];
        strcpy(name, str);
    }
    void display()
    {
        cout << "Name= " << name << endl;
    }
    ~Demo()
    {
        delete (name);
    }
};
int main()
{
    Demo d("Ram"), d1("Hari");
    d.display();
    d1.display();
}