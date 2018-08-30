#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char *argv[]) 
{
    if (argc != 3) 
    {
        cerr << "Error! \n 输出样式：./c++_o4_filecopy_2 复制文件名称 新文件名称" << endl;
        return 0;
    } 

    ifstream f_read (argv[1], ios::binary | ios::in);
    ofstream f_write(argv[2], ios::binary | ios::out);

    char i;
    if (f_read == NULL)
    {
        cout << "要复制的文件不存在！" << endl;
        return 0;
    }  

    // while (/*f_read >> i*/ f_read.read(&i,1))
    // {
    //     //f_write << i;
    //     f_write.write(&i,1);
    // }

    while (f_read >> i)
    {
        f_write << i;
    }

    cout << "成功复制！" << endl;

    f_read.close();
    f_write.close();
    return 0; 
}