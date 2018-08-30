#include <iostream>
using namespace std;

struct Fishcuser
{
        char name[256];
        int age;
        void show()
        {
                cout << "我是" << name << "今年" << age << "岁" << endl;
        }
};

int main()
{
        Fishcuser user = {"beiai",22};
        Fishcuser *puser = &user;
        user.show();
        puser->show();
        (*puser).show();
}
