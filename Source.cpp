#include<iostream>
#include<iomanip>
using namespace std;

template< typename T >	//typename���ҪO	��int�Mdouble�}�C���i�H�ϥ�
void insertionSort(T *const array, int size) {	//insertionSort�Ƨ� �Ѥp�ƨ�j
	T smallest;
	
	for (int index = 0; index < size; index++) {	//��10���j�� ��1��P�_1�� ��2��2�ӡK
		smallest = array[index];
		int move = index;

		while (move > 0 && array[move - 1] > smallest) {	//�Y�Ȥ�̤p�Ȥj �洫
			array[move] = array[move - 1];	
			move--;
		}
		array[move] = smallest;  //�]�w�}�C�̤p����
	}
}

template< typename T >	//typename���ҪO	��int�Mdouble�}�C���i�H�ϥ�
void printarray(T *const array, int size) {	//��X�}�C
	for (int i = 0; i < size; i++) {	
		cout << array[i] << "  ";	//��X�}�C���e
		if (i == size-1) {	//�Y10�ӥ�����X���ɴ���
			cout << endl;
		}
	}
}

int main() {
	const int SIZE = 10;	//��const�T�wSIZE����

	int a[SIZE] = { 9,10,8,6,5,7,2,3,4,1 };	
	cout << "��J��int�}�C�G" << endl;
	printarray(a, SIZE);
	insertionSort(a, SIZE);
	cout << "�Ƨǧ����}�C�G" << endl;
	printarray(a, SIZE);

	double b[SIZE] = { 1.1,9.8,9.5,8.6,7.3,6.5,5.4,4.8,3.8,2.7 };
	cout << "��J��double�}�C�G" << endl;
	printarray(b, SIZE);
	insertionSort(b, SIZE);
	cout << "�Ƨǧ����}�C" << endl;
	printarray(b, SIZE);
	system("pause");
}