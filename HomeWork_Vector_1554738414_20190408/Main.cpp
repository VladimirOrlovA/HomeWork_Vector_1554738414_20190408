#include "vector_.h"

int main()
{
	vector_ obj(5, 0);		// передача в конструктор размера и исходное значение элементов массива
	obj.print();
	int num = 10;

	obj.push_back(num);		// добавление в конец массива  одного элемента
	obj.print();

	obj.pop_back();			// удаление последнего элемента
	obj.print();

	int pos = 3;
	obj.erase(pos);			// удаление элемента под индексом pos
	obj.print();

	//obj.clear();			// освобождение памяти
	//obj.print();

	obj.getSize();
	obj.empty();

	obj.getElement(3);

	system("pause");
}