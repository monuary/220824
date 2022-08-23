//이름공간에 포함된 함수의 이름자체가 이름공간::함수()가 된다.
//이름공간에 포함된 함수는 디폴트 함수처럼 앞에서 정의하지 않고, 선언만 한 다음 뒤에서 설명을 후첨해도 좋다.
//이름공간은 두 개로 나눠도, 이름이 같으면 하나로 취급한다.
//이름공간 안에 이름공간을 더 넣을 수 있다. 이를 중첩이라고 한다. 중첩의 경우 이름공간1::이름공간2::함수가 함수이름이 된다.

#include <iostream>

namespace Name1
{
	void Func1();//공간안에 두 개 이상의 함수를 넣을 수 있다. 공간을 이름만 같게 해서, 둘로 나눠서 정의할 수 있다.
	void Func2();
}

namespace Name2
{
	void Func1();
}

int main()
{
	Name1::Func1();
	return 0;
}

void Name1::Func1()
{
	std::cout << "N1" << std::endl;
	Func2();//아직 정의 안 된 함수를 넣을 수 있다.
	Name2::Func1();//다른 이름공간의 함수 역시 넣을 수 있다.
}

void Name1::Func2()
{
	std::cout << "N1-2" << std::endl;
}

void Name2::Func1()
{
	std::cout << "N2" << std::endl;
}