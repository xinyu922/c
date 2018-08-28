#include<iostream>
#include<fstream>
#include<string>

void Mnue()
{
        std::cout << "菜单内容：\n";
        std::cout << "1.查看文件\n"
                          << "2.添加内容\n"
                          << "3.退出程序\n"
                          << std::endl;
}

int main()
{
        std::fstream fp ("11.txt",std::ios::in | std::ios::out);
        std::ofstream fout;
        if( !fp )
        {
                std::cout << "打开文件失败\n" ;
        }
        else
        {
                std::cout << "姓名        学号        性别\n";
                const unsigned int SIZE = 100;
                char buffer[SIZE];
                while( !fp.eof() )
                {
                        fp.getline( buffer, SIZE, '\n');
                        std::cout << buffer << std::endl;
                }
                fp.close();
        }
        
        Mnue();

        int input;
        while(1)
        {
                std::cin >> input;
                std::cin.ignore( 100, '\n');
                switch(input)
                {
                case 1:
                        fp.open ("11.txt",std::ios::in | std::ios::out);

                        if( !fp.is_open() )
                        {
                                std::cout << "打开文件失败\n";
                        }
                        else
                        {
                                const unsigned int SIZE = 100;
                                char buffer[SIZE];

                                fp.clear ();
                                while( !fp.eof() )
                                {
                                        fp.getline( buffer, SIZE, '\n');
                                        std::cout << buffer << std::endl;
                                }
                                fp.close();
                        }
                        break;

                case 2:
                        fout.open ("11.txt",std::ios::app);
                        if( !fout.is_open() )
                        {
                                std::cout << "打开文件失败\n";
                        }
                        else
                        {
                                const unsigned int SIZE = 100;
                                char buffer[SIZE];
                                std::cin >> buffer;
                                fout << '\n' << buffer;
                                fout.close();
                        }
                        break;
        }
        
}
}