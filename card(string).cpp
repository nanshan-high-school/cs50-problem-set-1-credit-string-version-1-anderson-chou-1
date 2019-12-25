#include <iostream>
using namespace std;

int main() {
    string cardnumber;
    
	cout << "請輸入卡號:";
    cin >> cardnumber;

    int i = 0;

    for (i = 0; cardnumber[i] != '\0'; i++) {
    } 
	
	int odd = 0;
	// 奇數
	int even = 0;

	bool evenDis = false;
	
	for (int j = i - 1; j < 0; j--) {
		if (evenDis) {
			even += (((cardnumber[j] - '0') * 2) / 10) + (((cardnumber[j] - '0') * 2) % 10);
		} else {
			odd += cardnumber[j] - '0';
		}
		evenDis = !evenDis;
	}
	int total = odd + even;

	if (total % 10 != 0) {
		cout << "無效卡片";
	} else {
		if (i == 15) {
			if (cardnumber[0] == '3' && (cardnumber[1] == '4' || '7')) {
				cout << "American Express";
			} else {
				cout << "卡號錯誤";
			}
		} else if (i == 16) {
			if (cardnumber[0] == '5' && (cardnumber[1] == '1' || '2' || '3' || '4' || '5')) {
				cout << "MasterCard";
			} else if (cardnumber[0] == '4') {
				cout << "Visa";
			} else {
				cout << "卡號錯誤";
			}	
		} else if (i == 13) {
			if (cardnumber[0] == '4') {
				cout << "Visa";
			} else {
				cout << "卡號錯誤";
			}
		} else {
			cout << "卡號錯誤";
			
		}
	}
}
