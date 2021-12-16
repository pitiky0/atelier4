//
// Created by Ayoub on 12/12/2021.
//

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// function for printing the elements in a list
void showlist(list<int> l)
{
	for (auto it : l)
		cout << "  " << it;
	cout << endl;
}

int main()
{
	int n, val;
	list<int> list1;
	cout << "enter la lengueur de liste: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "entrer le " << i + 1 << " valeur : ";
		cin >> val;
		list1.push_back(val);
	}
	cout << "\nVotre liste est : ";
	showlist(list1);
	cout << "\nla liste triée: ";
	list1.sort();
	showlist(list1);
	return 0;
}
