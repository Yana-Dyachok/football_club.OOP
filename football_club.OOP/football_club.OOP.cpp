/*Реалізуйте клас «Футбольний клуб». Необхідно зберігати в змінних-членах класу Назву команди, назву домашнього стадіону, президента клубу, капітана команди, середня кількість відвідувань домашнього матчу. 
Реалізуйте функцію, яка перевіряє на який з трьох футбольних клубів ходить більше вболівальників.*/
#include <iostream>
#include <string>
using namespace std;
class Foot_club {//створюємо клас  Foot_club
public://створюємо поля класу -з публічним модифікатором доступу
	string team;//назва команди
	string homeStadium;//назва домашнього стадіону
	string president;//президент клубу
	string captain;//капітан команди
	int visit;//середня кількість відвідувань домашнього матчу
	void input(){//метод класу  для вводу даних 
		cout << "Command name is  "; getline(cin, team);//
		cout << "The name of home stadium is  "; getline(cin, homeStadium);
		cout << "President name of the team is  "; getline(cin, president);
		cout << "Captain name of the team is  "; getline(cin, captain);
		cout << "The numbers of visitors are  "; cin >> visit; cin.ignore(32767, '\n');//використовуємо cin.ignore для видалення пробілу з пам'яті
	}
	void output(){//метод класу  для виводу даних 
		cout << "Command name - " << "\"" <<team << "\"" << endl;
		cout << "The name of home stadium - " << "\"" << homeStadium << "\"" << endl;
		cout << "President name of the team -  " << "\"" << president << "\"" << endl;
		cout <<"Captain name of the team -  " << "\"" << captain << "\"" << endl;
		cout << "The numbers of visitors - " << "\"" << visit << "\"" << endl;
	}
};
void CheckWinner(Foot_club& firstClub, Foot_club& secondClub, Foot_club& thirdClub);//функція, яка перевіряє на який з трьох футбольних клубів ходить більше вболівальників
int main()
{	Foot_club firstClub;//створюємо об'єкт класу- перша команда
	Foot_club secondClub;//створюємо об'єкт класу- друга команда
	Foot_club thirdClub;//створюємо об'єкт класу- третя команда
	cout << "Input data of the first team " << endl;
	firstClub.input();//вводимо дані для першої команди
	cout << "Input data of the second team " << endl;
	secondClub.input();//вводимо дані для другої  команди
	cout << "Input data of the third team " << endl;
	thirdClub.input();//вводимо дані для третьої команди
	cout << "\t Data of the first team  are: " << endl;
	firstClub.output();//виводимо дані для першої команди
	cout << "\t Data of the second team  are: " << endl;
	secondClub.output();//виводимо дані для другої команди
	cout << "\t Data of the third team  are: " << endl;
	thirdClub.output();//виводимо дані для третьої команди
	CheckWinner(firstClub, secondClub, thirdClub);
}
void CheckWinner(Foot_club& firstClub, Foot_club& secondClub, Foot_club& thirdClub) {//функція, яка перевіряє на який з трьох футбольних клубів ходить більше вболівальників
	if (firstClub.visit > secondClub.visit and firstClub.visit > thirdClub.visit) cout << "Football club " << "\"" << firstClub.team << "\"" << " has more visitors than other teams" << endl;//створюємо умови для визначення 
	if (secondClub.visit > firstClub.visit and secondClub.visit > thirdClub.visit)  cout << "Football club " << "\"" << secondClub.team << "\"" << " has more visitors than other teams" << endl;
	if (thirdClub.visit > secondClub.visit and thirdClub.visit > firstClub.visit) cout << "Football club " << "\"" << thirdClub.team << "\"" << " has more visitors than other teams" << endl;// команди, яка має найбільшу кількість відвідувань
	if (firstClub.visit == secondClub.visit and secondClub.visit > thirdClub.visit)cout << "Football clubs " << "\"" << firstClub.team << "\"" "and" << "\"" << secondClub.team << "\"" << " have the same and more numbers of visitors" << endl;
	if (firstClub.visit == thirdClub.visit and firstClub.visit > secondClub.visit)cout << "Football clubs " << "\"" << firstClub.team << "\"" << "and" << "\"" << thirdClub.team << "\"" << " have the same and more numbers of visitors" << endl;
	if (secondClub.visit == thirdClub.visit and secondClub.visit > firstClub.visit)cout << "Football clubs " << "\"" << secondClub.team << "\"" << "and" << "\"" << thirdClub.team << "\"" << " have the same and more numbers of visitors" << endl;
	if (secondClub.visit == thirdClub.visit and secondClub.visit == firstClub.visit) cout << "All teams have  the same numbers of visitors" << endl;
}
