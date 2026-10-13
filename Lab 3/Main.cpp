/* Linden Phetxoumphone
  Computer Science Fall 2026
  September 
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

// Use the standard namespace
using namespace std;
// Function prototypes
float popStdDev(int num1, int num2, int num3, int num4, float mean);
float mean(int num1, int num2, int num3, int num4);

int main()
{// Create an input file stream object
	std::ifstream inFile;
	// Open the file "inMeanStd.dat" for reading
	inFile.open("inMeanStd.dat");
	// Check if the file was opened successfully
	int number;
	// Read a number from the file
	inFile >> number;
	// Output the number read from the file
	std::cout << "The number read from the file is: " << number << std::endl;

	int number2;
	
	inFile >> number2;

	std::cout << "The second number read from the file is: " << number2 << std::endl;

	int number3;

	inFile >> number3;

	std::cout << "The third number read from the file is: " << number3 << std::endl;

	int number4;

	inFile >> number4;

	std::cout << "The fourth number read from the file is: " << number4 << std::endl;

	inFile.close();
	// Calculate and output the mean and population standard deviation of the four numbers
	std::cout << "The mean of the four numbers is: " << mean(number, number2, number3, number4) << std::endl;

	std::cout << "The population standard deviation of the four numbers is: " << popStdDev(number, number2, number3, number4, mean(number, number2, number3, number4)) << std::endl;

	// Create an output file stream object
	std::ofstream outFile;

	// Open the file "outMeanStd.dat" for writing
	outFile.open("outMeanStd.dat");
	// Check if the file was opened successfully
	outFile << "The mean is: " << mean(number, number2, number3, number4) << std::endl;

	outFile << "The population standard deviation is: " << popStdDev(number, number2, number3, number4, mean(number, number2, number3, number4)) << std::endl;

	outFile.close();

	return 0;

}

// Function to calculate the mean of the four numbers
float mean(int number, int number2, int number3, int number4)
{
	return static_cast<float>(number + number2 + number3 + number4) / 4.0f;
}
// Function to calculate the population standard deviation of the four numbers
float popStdDev(int num1, int num2, int num3, int num4, float mean)
{
	float variance = (pow(num1 - mean, 2) + pow(num2 - mean, 2) + pow(num3 - mean, 2) + pow(num4 - mean, 2)) / 4.0f;
	return sqrt(variance);
}
