#include "std_lib_facilities.h"
#include "Matrix.h"
#include "MatrixIO.h"
#include "complex"
#include "numeric"
using namespace Numeric_lib;

//4.
void sqrtfrominput(){
	int input;
	cout << "enter an int: ";
	cin >> input;
	if (input<0)
		cout << "no square root" << endl;
	else
		cout << "the square of " << input << "is" << sqrt(input) << endl;
}

int main()
{

	//1.

	cout << "size of char    : " 	<< sizeof(char) << "bytes" << endl;
	cout << "size of short   : " 	<< sizeof(short) << "bytes" << endl;
	cout << "size of int     : " 	<< sizeof(int) << "bytes" << endl;
	cout << "size of long    : " 	<< sizeof(long) << "bytes" << endl;
	cout << "size of float   : " 	<< sizeof(float) << "bytes" << endl;
	cout << "size of double  : " 	<< sizeof(double) << "bytes" << endl;
	cout << "size of int*    : " 	<< sizeof(int*) << "bytes" << endl;
	cout << "size of double* : "	<< sizeof(double*) << "bytes" << endl;

	//2.

	Matrix<int> a(10);
	cout << "size of a: " << sizeof(a) << "bytes" << endl;

	Matrix<int> b(100);
	cout << "size of b: " << sizeof(b) << "bytes" << endl;

	Matrix<double> c(10);
	cout << "size of c: " << sizeof(c) << "bytes" << endl;

	Matrix<int,2> d(10,10);
	cout << "size of d: " << sizeof(d) << "bytes" << endl;
	
	Matrix<int,3> e(10,10,10);
	cout << "size of e: " << sizeof(e) << "bytes" << endl;

	//3.

	cout << "elements of matrixes: "<<endl;
	cout << "the amount of elements in 	Matrix<int> a(10): " << a.size() << endl;
	cout << "the amount of elements in 	Matrix<int> b(100): " << b.size() << endl;
	cout << "the amount of elements in 	Matrix<double> c(10): " << c.size() << endl;
	cout << "the amount of elements in 	Matrix<int,2> d(10,10): " << d.size() << endl;
	cout << "the amount of elements in 	Matrix<int,3> e(10,10,10): " << e.size() << endl;

	//4.
	sqrtfrominput();


	//5.

	Matrix<double> tendouble(10);
	cout << "enter 10 float nums: " << endl;
	float f_input = 0;
	for (int i = 0; i < 10; ++i)
	{
		cin >> tendouble(i);
	}
	cout << tendouble << endl;
	//6.
	Matrix<complex<double>>c_matrix(10);
	cout << "enter 10 complex nums: " << endl;
	for (int i = 0; i < 10; ++i)
	{
		cin >> c_matrix(i);
	}
	cout << c_matrix<< endl;
	complex<double> sum = accumulate(c_matrix.data(),c_matrix.data()+c_matrix.size(),complex<double>{});
	cout << sum << endl;
	//8.

	Matrix<int,2>six_m(2,3);
	cout <<"enter 6 ints: "<<endl;
	for (int i=0;i<2;i++)
		{
		for (int j=0;j<3;j++)
			cout<<six_m(i,j)<<' ';
		cout<<endl;
		}
	return 0;
}