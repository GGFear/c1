#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class Manager
{
public:
   void client_communication(void); // ������� � ��������
   void teamlead_communication(void); // ������� � ���-�������
   void planning_control(void); //�������� ������������

protected:
private:
   std::string name; // ���
   std::string surname; // �������
   std::string contacts; // ��������


};