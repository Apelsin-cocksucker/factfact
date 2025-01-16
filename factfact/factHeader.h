#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
using namespace std;
string Input() {//������� ����� ����� � ��� ��������  
	string num;
	bool f;
	std::cout << "\n������� ����� ��� �������� ���������� �� ��� ����������(���� N ��� ������): \n";
	getline(cin, num);
		 do{
			 if (num == "n" || num == "N") return num;
			 while(true){
				 if (num == "")getline(cin, num);
				 else break;
			 }
			for (auto a : num) {
				if (int(a) < 48 || int(a) > 57) {
					cout << "\n���������� ������ ������������� �����, ��������� �� �������� ����, ��� �������� � �������������� ��������: \n";
					f = false;
					getline(cin, num);
					break;
				}
				else f = true;
			}
		}while (!f);
		return num;
	}

vector <int> VectorFill(string num) {//������� �������������� ������, �������� �������������, � ������ 
	int i = 0;
	if (num[0] == '0') {//�������� ����� �� ���������� �����, �������� �������������
		while (num[i] == '0') 
			i++;
	}
	num = num.substr(i);
	vector <int> r(num.size(),0);
	for (i=r.size()-1;i>=0;i--)//���������� ���� ����� � �������� ������� ��� ������������ ���������
		r[i]= int(num[num.size()-i-1])-48;
	return r;
}

vector<int> multiply(vector <int>& num1, vector<int>& num2) {
	vector<int> res(num1.size() + num2.size(), 0); // ������������ ����� ����� ������ �� ����� ��� ����� ���� ���������� �����
	for (int i = 0; i < num1.size(); i++) {//��������� � �������
		int c = 0;
		for (int j = 0; j < num2.size(); j++) {
			int prod = num1[i] * num2[j] + res[i + j] + c;
			res[i + j] = prod % 10; 
			c = prod / 10; 
		}
		if (c>0) {
			res[i + num2.size()] += c; //���������� ����������� �������� � ����� ���������
		}
	}
	//�������� ���������� �����
	while (res.size() > 1 && res.back() == 0) {
		res.pop_back();
	}
	return res;
}

vector <int> Fact(vector <int> r) {//������� �������� ����������
	vector <int> cur(r.size(), 0), res(1, 1);//��������� ������ ��������
	int i = 0;
	while (cur!=r){
		if ((cur[0] + 1) < 10)cur[0] += 1;
		else {
			while ((cur[i] + 1) >= 10)
				i++;
			cur[i] += 1;
			while (i > 0) {
				i--;
				cur[i] =0;
			}
		}
		res = multiply(res, cur);

	}
	return res;
}
vector <int> FactFact(vector <int> r) {//������� �������� ���������� �� ����������
	return Fact(Fact(r));
}

void print(vector <int> r) {//������� ������ ��������������� ������� � �������� �������
	for (int i = r.size()-1;i >=0 ;i--)
		cout << r[i];
}