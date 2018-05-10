#include <string>
using namespace std;

class Motorcycle {
private:
	string color ="";
	int year=0;
	string make="";
	string model="";
public:

	~Motorcycle();

	void setColor(string);

	string getColor();

	void setYear(int);

	int getYear();

	void setMake(string);

	string getMake();

	void setModel(string);

	string getModel();

	void printBike();

};
