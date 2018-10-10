//Conor Kennedy
//10/10/2018


//random coin flip program to test things

#include <iostream>
#include<stdlib.h> //for rand
#include<ctime>
using namespace std;



//return a number between 0 and 1 
int randomNum() {
	
	return rand() % 2;
}

//grab input from user
int getInput() {
	int x;
	cout << "Enter the number of coin flips: ";
	cin >> x;
	return x;
}

//simulate flipping a coin and count num of times heads or tails
//0 = heads 1 = tails
int *flipCoin(int x) {
	int num;
	int *counts = new int[2]{ 0,0 };
	for (int i = 0; i < x; ++i) {
		num = randomNum();
		if (num == 0) {
			cout << "Heads\n";
			counts[0]++;
		}
		else {
			cout << "Tails\n";
			counts[1]++;
		}
	}
	return counts;
}

//return percentage of times heads was fliped
int percentHeads(double heads, double total) {
	cout << heads << " / " << total << endl;
	return (heads / total) * 100;
}



int main() {

	srand(time(NULL)); // randomize seed
	//int num = getInput();
	//int *ptr = flipCoin(num);
	int *ptr = flipCoin(getInput());
	
	cout << percentHeads(ptr[0],ptr[0]+ptr[1]) << "% heads\n";
	cout << "Heads Count: " << ptr[0] << endl;
	cout << "Tails Count: " << ptr[1] << endl;
	
	return 0;
}