#include<iostream>
#include<iomanip>
using namespace std;

template< typename T >	//typename的模板	讓int和double陣列都可以使用
void insertionSort(T *const array, int size) {	//insertionSort排序 由小排到大
	T smallest;
	
	for (int index = 0; index < size; index++) {	//做10次迴圈 第1圈判斷1個 第2圈2個…
		smallest = array[index];
		int move = index;

		while (move > 0 && array[move - 1] > smallest) {	//若值比最小值大 交換
			array[move] = array[move - 1];	
			move--;
		}
		array[move] = smallest;  //設定陣列最小的值
	}
}

template< typename T >	//typename的模板	讓int和double陣列都可以使用
void printarray(T *const array, int size) {	//輸出陣列
	for (int i = 0; i < size; i++) {	
		cout << array[i] << "  ";	//輸出陣列內容
		if (i == size-1) {	//若10個全部輸出完時換行
			cout << endl;
		}
	}
}

int main() {
	const int SIZE = 10;	//用const固定SIZE的值

	int a[SIZE] = { 9,10,8,6,5,7,2,3,4,1 };	
	cout << "輸入的int陣列：" << endl;
	printarray(a, SIZE);
	insertionSort(a, SIZE);
	cout << "排序完的陣列：" << endl;
	printarray(a, SIZE);

	double b[SIZE] = { 1.1,9.8,9.5,8.6,7.3,6.5,5.4,4.8,3.8,2.7 };
	cout << "輸入的double陣列：" << endl;
	printarray(b, SIZE);
	insertionSort(b, SIZE);
	cout << "排序完的陣列" << endl;
	printarray(b, SIZE);
	system("pause");
}
