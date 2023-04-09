
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    ifstream myfile("input.txt");
    ofstream outfile("output.txt",ios::app); //ios::appָ׷��д��
	string temp;
	string str("what you want");


	while(getline(myfile,temp)) //���ж�ȡ�ַ���
	{
    size_t found= temp.find(str);
       if (found!=string::npos)
      {
        outfile<<temp;//д�ļ�
        outfile<<endl;

      }
	}
	myfile.close();
	outfile.close();

    return 0;
}
