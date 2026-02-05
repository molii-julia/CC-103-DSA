#include <iostream>
using namespace std;

struct Person{
	char name[50];
	int age;
};

int main() {
	int num;
	float totalAge = 0;

	cout << "Enter number of people:";
	cin >> num;

	Person people [100];

	for (int i = 0; i < num; i++) {
		cout << "Enter name of person " << i + 1 << ": ";
		cin.ignore();
		cin.getline(people[i].name, 50);

		cout << "Enter age of person " << i + 1 << ": ";
		cin >> people[i].age;
		cin.ignore();

		totalAge += people[i].age;
	}

	if (num > 0) {
		cout << "The average age of the people is " << totalAge / num << endl;
	}
	return 0;
}

