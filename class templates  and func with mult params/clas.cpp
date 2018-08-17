#include"clas.h"

template <class T, class U>

Maxim<T,U>::Maxim(T a, U b)
{
	num1 = a;
	num2 = b;
}
template <class T,class U>
T Maxim<T,U>::bigger()
{
	return(num1>num2?num1:num2);
}
