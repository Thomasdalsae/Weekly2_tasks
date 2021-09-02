#include <iostream>
#include <string>

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
	switch (input) {
	case '1':
			std::cout << "User wanted to see :While-loop" << std::endl;

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
	std::cout << "100 to 1 with for-loop" << std::endl;

	for (int nr = 100; nr >= 1; nr--)
		std::cout << nr << " ";

}
void task3() {
	int nr{5};
	while (nr <= 50)
	{
		std::cout << nr << " ";
		nr += 5 ;
		
		
	}
}
void task4() {

	for (int nr = 5; nr <= 50; nr += 5)
		std::cout << nr << " ";
}
void task5() {
	int nr{ 5 };
	do 
	{
		std::cout << nr << " ";
		(nr += 5);

		

	}
	while (nr <= 50); 
	
}
void task6() {

		bool correct = false;
	    while (correct == false) {
		std::string input{};
		//Safty net
		char c{ 'W' };
		system("pause");
		system("cls");


		std::cout << "Which grade do you want in Programming 1: " << std::endl;
		std::cin >> input;

		if (input.size() > 1)
		{
			std::cout << "Wrong" << std::endl;


		}
		else
		{
			c = input[0];
			correct = true;
			
		}

		switch (toupper(c)) {
		case 'A':
			std::cout << "Outstanding" << std::endl;

			break;

		case 'B':
			std::cout << "Very good" << std::endl;
			

			break;
		case 'C':
			std::cout << "Good" << std::endl;

			break;
		case 'D':
			std::cout << "Some flaws" << std::endl;

			break;

		case 'E':
			std::cout << "Not very good..." << std::endl;

			break;

		case 'F':
			std::cout << "Fail" << std::endl;

			break;

		default:
			std::cout << "That is not a grade!";
			correct = false;

			break;




		}
	}
}











////task1();
//task2();
//task3();
//task4();
//task5();
//task6();