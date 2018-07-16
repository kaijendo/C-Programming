#include<stdio.h>

#define MAXMONTH 12
#define MINMONTH 1
#define MAXLENGTH 100

// MARK: - Properties
int currentMonth;
enum ExampleTypes {
	example1 = 0,
	example2 = 1,
	example3 = 2,
	example4 = 3
} exampleTypes;
// MARK: - Prototype
void input();
void inputExam1();
void inputExam2();
void inputExam3();
void inputExam4();
void calculator();
// MARK: - Life circle
int main() {
	int currentChoice;
	printf("Input the digital number for choice example: ");
	scanf("%d",&currentChoice);
	if (currentChoice < 1 && currentChoice > 4) {
		printf("Invalid");
	} else {
		switch (currentChoice) {
			case 1:
				exampleTypes = example1;
				break;
			case 2:
				exampleTypes = example2;
				break;
			case 3:
				exampleTypes = example3;
				break;
			case 4:
				exampleTypes = example4;
				break;
			default:
				break;
			}
		input();
		return 1;
	}

	return 0;
	
}

// MARK: Functions
void input() {
	switch(exampleTypes) {
		case example1:
			inputExam1();
			break;
		case example2:
			inputExam2();
			break;
		case example3:
			inputExam3();
			break;
		case example4:
			inputExam4();
			break;
	}
}

void inputExam1() {
	extern int currentMonth;
	printf("Input for current month:");
	scanf("%d", &currentMonth);
	
	if (currentMonth < 0 || currentMonth > 12) {
		printf("Invalid\n");
	} else {
		calculator();
	}
}
void calculator() {
	
	extern int currentMonth;
	switch (currentMonth) {
	case 1:	case 3:	case 5:	case 7: case 8:	case 10: case 12:
		printf("The month is 31 days.\n");
		break;
	case 4: case 6: case 9:
		printf("The month is 30 days\n");
		break;
	case 2:
		printf("The month is 28 or 29 days.\n");
		break;
	}
}

void inputExam2() {
	int listNumbers[4];
	int value;
	int tempValue;
	
	printf("Input for 4 number: \n");
	for(int i = 0; i <= 3; i++) {
		printf("Input %d element: ", i + 1);
		scanf("%d", &listNumbers[i]);
	}
	tempValue = listNumbers[0];
	printf("The temp value is %d\n", tempValue);
	for(int i = 0; i<= (int) sizeof(listNumbers) / sizeof(int) - 1; i++) {
		if (tempValue < listNumbers[i]) {
			tempValue = listNumbers[i];
		}
	}
	printf("The maximun number is %d", tempValue);
}

void inputExam3() {
	int listNumbers[4];
	int value;
	
	printf("Input for 4 number: \n");
	for(int i = 0; i <= 3; i++) {
		printf("Input %d element: ", i + 1);
		scanf("%d", &listNumbers[i]);
	}
	int temp = 0;
	for(int i = 0; i <= (int) sizeof(listNumbers) / sizeof(int) - 1; i++) {
		for(int j = 0; j <= (int) sizeof(listNumbers) / sizeof(int) - 1 - i; j++) {
			if (listNumbers[j] > listNumbers[j + 1]) {
				temp = listNumbers[j + 1];
				listNumbers[j + 1] = listNumbers[j];
				listNumbers[j] = temp;
				printf("Value from temp is: %d\n", &temp);
			}
		}
	}
		
}

void inputExam4() {
	
}
