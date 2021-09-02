#include <iostream>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();


int main() {
	char input{};
	std::cout << "Choose which task to show: ";
	std::cin >> input;

	switch (input) {
	case '1':
		task1();
		
		break;
	case '2':
		task2();
		break;
	case '3':
		task3();
		break;
	case '4':
		task4();
		break;
	case '5':
		task5();
		break;
	case '6':
		task6();
		break;

	}


	return 0;
}

void task1() {
	
	char input{};
	int nr{ 1 };
	
	std::cout << "Choose which loop to see: " << std::endl;
	std::cout << "1: While loop" << std::endl;
	std::cout << "2: For loop" << std::endl;
	std::cin >> input;
	system("cls");
	//commet haha funny
	switch (input) {
	case '1':
			std::cout << "User Wanted to see :While-loop" << std::endl;

		while (nr <= 100)
		{
			std::cout << nr << " ";
			nr++;
		}
		break;
	case '2':
		    std::cout << "User wanted to see :For-loop" << std::endl;

		for (int nr = 1; nr <= 100; nr++)
		std::cout << nr << " ";
	}
}

void task2() {

}
void task3() {

}
void task4() {

}
void task5() {

}
void task6() {

}











////task1();
//task2();
//task3();
//task4();
//task5();
//task6();