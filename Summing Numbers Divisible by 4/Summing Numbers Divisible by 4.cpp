#include <iostream.h>
int addDivisibleBy4(int numbers[]) {
	int sum = 0;
	for (int i = 0; i < 20; ++i) {
			if (numbers[i] % 4 == 0) {
					sum += numbers[i];
				}
		}
	return sum;
}
int main() {
	int numbers[20];
	cout << "Enter 20 numbers to add numbers only divisible by 4:\n";
	cout<<"======================================================\n";
	for (int i = 0; i < 20; ++i) {
			cout << "Enter number " << i + 1 << ": ";
			cin >> numbers[i];
		}
	int result = addDivisibleBy4(numbers);
		cout<<"==================================\n";
	cout << "Sum of numbers divisible by 4: " << result << endl;
	return 0;
}

