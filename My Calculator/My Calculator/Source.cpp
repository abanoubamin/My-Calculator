#include<iostream>
#include <cstdlib>
using namespace std;
//Write your Functions prototypes Here
void convert_to_decimal();
void convert_to_binary();
void gcd();
void Equation();
long long Factorial(int);
double Power(double, double);
void Expo();
void Odd();
void Prime();
float sine(float);
float cosine(float);
float Power_trig(float, int);
long double Fact_trig(float);
double sqrt(double);
void QuadFor();
void line();
void menu();
void menu2();
void menu3();
const double PI = 3.14159265359;
int main(){
	//Local Variables goes here
	int choice;
	int x;
	int y;
	menu();
	cin >> choice;

	switch (choice)
	{
	case 1:{            //Equation
			   system("CLS");
			   int choice2 = 1;
			   while (choice2 == 1){
				   Equation();
				   line();
				   menu2();
			   }};
	case 2:{            // Factorial
			   system("CLS");
			   int choice2 = 1;
			   while (choice2 == 1){
				   cout << "Calculate the factorial of : ";
				   cin >> x;
				   cout << "The Factorial of " << x << " = " << Factorial(x) << endl;
				   line();
				   menu2();

			   }};
	case 3:{            // Decimal to Binary

			   system("CLS");
			   int choice2 = 1;
			   while (choice2 == 1){

				   convert_to_binary();
				   line();
				   menu2();

			   }

	};
	case 4:{            // Binary to Decimal
			   system("CLS");
			   int choice2 = 1;
			   while (choice2 == 1){

				   convert_to_decimal();
				   line();
				   menu2();

			   }
			   break; };
	case 5:{            //Prime or Not
			   system("CLS");
			   int choice2 = 1;
			   while (choice2 == 1){
				   cout << "Please enter a number to check whether it's Prime or not : ";
				   Prime();
				   menu2();

			   }};
	case 6:{            // Odd or Even
			   system("CLS");
			   int choice2 = 1;
			   while (choice2 == 1){
				   Odd();
				   line();
				   menu2();
			   }
	};
	case 7:{           // Power
			   system("CLS");
			   int choice2 = 1;
			   while (choice2 == 1){
				   cout << "Please Enter the Base and Power." << endl;
				   cout << "Base : ";
				   cin >> x;
				   cout << "Power : ";
				   cin >> y;
				   cout << x << "^" << y << " = " << Power(x, y) << endl;
				   line();
				   menu2();
			   }};
	case 8:{            //Trig Functions
			   system("CLS");
			   float y;
			   int choice3, choice4;
			   cout << "Which Trig function do you want ?" << endl;
			   cout << "1.sine" << endl;
			   cout << "2.cosine" << endl;
			   cout << "3.Tan" << endl;
			   cin >> choice3;
			   system("CLS");
			   switch (choice3){
			   case 1:{menu3();
				   cin >> choice4;

				   if (choice4 == 1){
					   cout << "Please Enter the Angle in Radians [-PI , PI ]" << endl;
					   cin >> y;
					   cout << sine(y);
					   menu2();

				   }
				   else if (choice4 == 2){
					   cout << "Please Enter the Angle in Degrees [-180 , 180]" << endl;
					   cin >> y;
					   double Radian = (PI / 180)*y;
					   cout << "sine(" << y << ")= " << sine(Radian) << endl;
					   menu2();
				   }

			   };
			   case 2:{

						  menu3();
						  cin >> choice4;

						  if (choice4 == 1){
							  cout << "Please Enter the Angle in Radians [-PI , PI ]" << endl;
							  cin >> y;
							  cout << "cosine(" << y << ")= " << cosine(y) << endl;
							  menu2();

						  }
						  else if (choice4 == 2){
							  cout << "Please Enter the Angle in Degrees [-180 , 180]" << endl;
							  cin >> y;
							  double Radian = (PI / 180)*y;
							  cout << "cosine(" << y << ")= " << cosine(Radian) << endl;
							  menu2();
						  }



			   };

			   case 3:{

						  menu3();
						  cin >> choice4;

						  if (choice4 == 1){
							  cout << "Please Enter the Angle in Radians [-PI , PI ]" << endl;
							  cin >> y;
							  cout << "Tan(" << y << ")= " << sine(y) / cosine(y) << endl;

							  menu2();

						  }
						  else if (choice4 == 2){
							  cout << "Please Enter the Angle in Degrees [-180 , 180]" << endl;
							  cin >> y;
							  double Radian = (PI / 180)*y;
							  cout << "Tan(" << y << ")= " << sine(Radian) / cosine(Radian) << endl;
							  menu2();
						  }



			   };


			   case 9:{           //Exponential
						  system("CLS");
						  int choice2 = 1;
						  while (choice2 == 1){
							  Expo();
							  line();
							  menu2();
						  }};
			   default: {
							cout << "Wrong input,Please try again." << endl;
							system("CLS");
							cout << "(!)Wrong input, Please Try again. (!)" << endl;
							main();
			   }
			   };
			   return 0;
	};
	case 9:{
			   system("CLS");
			   int choice2 = 1;
			   while (choice2 == 1){
				   Expo();
				   line();
				   menu2();
			   }};
	case 10:{
				system("CLS");
				int choice2 = 1;
				while (choice2 == 1){
					double d;
					cout << "Calculate the Square root of : ";
					cin >> d;
					cout << "The Square root of " << d << " is : " << sqrt(d) << endl;
					line();
					menu2();
				}};
	case 11:{
				system("CLS");
				int choice2 = 1;
				while (choice2 == 1){

					QuadFor();
					line();
					menu2();
				}};

	default: {
				 cout << "Wrong input,Please try again." << endl;
				 system("CLS");
				 cout << "(!)Wrong input, Please Try again. (!)" << endl;
				 main();
	}

	}
}

//Write your Functions Here
void Equation(){
	float x, y;
	double result, Addition = 0, Sub = 0;
	char ch;
	cout << "Please Enter an Equation down bellow." << endl;
	cin >> x;
	result = x;
	while (true)
	{
		cin >> ch;
		if (ch == '=')
			break;
		cin >> y;
		if (ch == '+')
		{
			Addition += result;
			result = y;
		}

		else if (ch == '-')
		{
			Sub += result;
			result = -y;
		}

		else if (ch == '*')
			result *= y;

		else if (ch == '/')
			result /= y;
	}
	result += Addition + Sub;
	cout << result << "\n";

}
long long Factorial(int number){
	long long Fact = 1;
	for (int i = 1; i <= number; i++)
	{
		if (number == 0)
		{
			Fact = 1;
			exit(0);
		}
		Fact *= i;
	}
	return Fact;
}
double Power(double x, double y){

	if (y == 0){
		return 1;
	}

	else if (y == 1){
		return x;
	}

	else if (y > 0){
		return x * (Power(x, y - 1));
		double result = x;
	}

	else if (y < 0){
		return (1 / x)*(Power(x, y + 1));
		double result = x;
	}

}
void Expo(){
	int pow, limit;
	cout << "Please enter the power of e and the limit of the series:\n";
	cout << "Power : ";
	cin >> pow;
	cout << "Limit : ";
	cin >> limit;
	float result = 0;
	for (int i = 0; i <= limit; i++)
		result += Power(pow, i) / Factorial(i);
	cout << result << endl;
}
void Odd(){
	int num;
	cout << "Please enter a number to check whether it's Even or Odd : ";
	cin >> num;
	if (num % 2 == 0)
		cout << num << " is Even!" << endl;
	else
		cout << num << " is Odd!" << endl;
}
void Prime(){

	int x, y = 0;
	cin >> x;
	for (int i = 2; i <= x; i++)
	{
		if (x == 1)
			break;
		if (x%i == 0)
			y++;
	}
	if (y == 1)
		cout << x << " is Prime" << endl;
	else if (y == 0)
		cout << x << " is NOT Prime" << endl;
	else
		cout << x << " is NOT Prime" << endl;
	line();
}
void line(){
	cout << "==============================================================================" << endl;
}
void menu(){
	cout << "Welcome to my Calculator \x01" << endl;
	cout << "   1.  Evaluate an Equation." << endl;
	cout << "   2.  Calculate Factorial." << endl;
	cout << "   3.  Convert from Decimal to Binary" << endl;
	cout << "   4.  Convert from Binary to Decimal." << endl;
	cout << "   5.  Check if a Number is Prime or not Prime." << endl;
	cout << "   6.  Check Even or Odd." << endl;
	cout << "   7.  Calculate a number raised to a power." << endl;
	cout << "   8.  Calculate Trig functions ( sine , cosine , tan )" << endl;
	cout << "   9.  Calculate an Exponential function." << endl;
	cout << "   10. Calculate the Square Root of a number." << endl;
	cout << "   11. Calculate the roots of a Quadratic equation." << endl;
	line();
	cout << "Please Choose an operation." << endl;

}
void menu2(){
	int choice2;
	cout << "1. Try another number." << endl;
	cout << "2. Return to the main menu." << endl;
	cout << "3. End the program." << endl;
	cin >> choice2;
	switch (choice2)
	{
	case 1:{system("CLS");
		break;
	};
	case 2:{
			   system("CLS");
			   main();
	};
	case 3:{cout << "Exiting the program"; exit(1); };

	};
}
void menu3(){
	cout << "Is the Angle in : " << endl;
	cout << "1.Radians" << endl;
	cout << "2.Degrees" << endl;
}
float sine(float angle){

	angle = angle - (Power_trig(angle, 3) / Fact_trig(3)) + (Power_trig(angle, 5) / Fact_trig(5)) - (Power_trig(angle, 7) / Fact_trig(7)) + (Power_trig(angle, 9) / Fact_trig(9)) - (Power_trig(angle, 11) / Fact_trig(11)) + (Power_trig(angle, 13) / Fact_trig(13)) - (Power_trig(angle, 15) / Fact_trig(15));

	return angle;
}
float cosine(float angle){

	angle = 1 - (Power_trig(angle, 2) / Fact_trig(2)) + (Power_trig(angle, 4) / Fact_trig(4)) - (Power_trig(angle, 6) / Fact_trig(6)) + (Power_trig(angle, 8) / Fact_trig(8)) - (Power_trig(angle, 10) / Fact_trig(10)) + (Power_trig(angle, 12) / Fact_trig(12)) - (Power_trig(angle, 14) / Fact_trig(14));

	return angle;
}
float Power_trig(float b, int e){
	float temp = b;
	for (int i = 1; i<e; i++)
	{

		b = b*temp;

	}
	return b;
}
long double Fact_trig(float num){

	for (int i = num - 1; i>0; i--)
	{
		num = num*i;
	}
	return num;
}
void convert_to_decimal(){
	int number, base, decimal = 0, power = 1;
	//input
	cout << "Please enter your binary number: ";
	cin >> number;
	if (number<0)
	{
		cout << "You should enter a binary number that contain only 0 or 1" << endl;
		convert_to_decimal();
	}
	//processing
	while (number>0)
	{
		base = number % 10;
		if (base != 0 && base != 1)
		{
			cout << "You should enter a binary number that contain only 0 or 1" << endl;
			convert_to_decimal();
			break;
		}
		decimal += (base*power);
		power *= 2;
		number /= 10;
	}//end while
	//output
	if (base == 1 || base == 0 || number == 0)
		cout << "Your decimal number = " << decimal;
}
void convert_to_binary(){
	int number, binary, i = 0;
	int* arr = new int[50];
	//input
	cout << "Please enter your decimal number: ";
	cin >> number;
	int useless = number;
	//processing
	while (number>0)
	{
		binary = number % 2;
		*(arr + i) = binary;
		i++;
		number /= 2;
	}//end while
	//output
	cout << useless << " in Binary is : ";
	for (int a = i - 1; a >= 0; a--)
	{
		cout << *(arr + a);
	}
	cout << endl;
	delete[]arr;
}
void gcd(){
	int number1, number2, gcd = 1;
	//input
	cout << "Enter two numbers: ";
	cin >> number1;
	cin >> number2;
	//processing
	for (int i = 1; i <= number1&&i <= number2; i++)
	{
		if (number1%i == 0 && number2%i == 0)
		{
			gcd = i;
		}
	}//end for
	//output
	cout << "the greatest common divisor of " << number1 << "&" << number2 << " = " << gcd;
}
double sqrt(double number){
	double  temp = 0;

	double  x = number * 6;
	for (int i = 0; i<25; i++)
	{
		temp = 0.5*(x + (number / x));
		x = temp;

	}

	return temp;


}
void QuadFor(){
	int a, b, c;
	cout << "Please enter the coefficients a, b and c to find the 2 roots of the equation." << endl;
	cout << "aX^2 + bX + c " << endl;
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	cout << "c : ";
	cin >> c;

	int arg = sqrt(Power_trig(b, 2) - 4 * a*c);
	cout << "The first root is : " << (-b + arg) / (2 * a) << endl;
	cout << "The second root is : " << (-b - arg) / (2 * a) << endl;
}









