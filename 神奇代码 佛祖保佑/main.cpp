/******************************************************************
* Author：Sam Smith   Email:wangbingzong@szkindom.com
* Time:		读取“GodBlesss.txt”, "GodBeast2.txt", "GodBeast.txt"
* Description:  采用C++ 流式文件读取方式；打印文中内容

* ***********************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include <ostream>

using namespace std;

int main()
{
	ifstream ifPtr;
	string strFileName[3];
	strFileName[0] = "GodBlessYou.txt";

	strFileName[1] = "GodBeast.txt";

	strFileName[2] = "GodBeast2.txt";

	char szTemp[80] = { "\0" };
	char c = '0';
	int iStaticLength = 80;
	long lChCounter = 0;
	int  i = 0;

	for (i = 0; i < 3; i++)
	{
		ifPtr.open(strFileName[i], ios::in);
		if (ifPtr)
		{
			while (!ifPtr.eof())
			{
				ifPtr.get(c);//, iStaticLength);
				cout << c;
				//	lChCounter = ifPtr.gcount();
			}
		}
		ifPtr.close();
		cout << "\n\f\\f\a   ";
		system("pause");
	}
	return 0;
}




//转义字符的 含义 https://blog.csdn.net/duanxj00001/article/details/54315185
/*



*/