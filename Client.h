#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class Client
{
public:
   void teamlead_communication(void); //������� � ���-�������
   void manager_communication(void); // ������� � ����������

protected:
private:
   std::string name; //���
   std::string surname; // �������
   std::string contacts; // ��������
};
