#include "vector_.h"

int main()
{
	vector_ obj(5, 0);		// �������� � ����������� ������� � �������� �������� ��������� �������
	obj.print();
	int num = 10;

	obj.push_back(num);		// ���������� � ����� �������  ������ ��������
	obj.print();

	obj.pop_back();			// �������� ���������� ��������
	obj.print();

	int pos = 3;
	obj.erase(pos);			// �������� �������� ��� �������� pos
	obj.print();

	//obj.clear();			// ������������ ������
	//obj.print();

	obj.getSize();
	obj.empty();

	obj.getElement(3);

	system("pause");
}