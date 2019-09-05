#include<iostream>
#include<ctime>

using namespace std;

char *DelNo(char *Str);

int main()
{
	/*char str[50];
	cout << "Enter name and surename->";
	cin.getline(str, 50, '\n');
	cout << "Hello, " << str << endl;*/

	//------------------------------------------

	/*char *S = new char[100];
	int UPPER = 0, lower = 0;

	cout << "Enter sting ->    ";
	cin.getline(S, 100);
	
	for (int i = 0; S[i]!='\0'; i++)
	{

		if (S[i] >= 'a'&&S[i] <= 'z')
		{
			lower++;
		}


		if (S[i] >= 'A'&&S[i] <= 'Z')
		{
			UPPER++;
		}
	}

	cout << "\nlower = " << lower << endl;
	cout << "UPPER = " << UPPER << endl;

	cout << "<<======================================>>\n";
	if (lower > UPPER)
	{
		cout << lower << " lower > " << UPPER << " UPPER\n";
	}
	else if (lower < UPPER)
	{
		cout << UPPER << " UPPER > " << lower << " lower\n";
	}
	else if (lower == UPPER)
	{
		cout << UPPER << " UPPER = " << lower << " lower\n";
	}*/

	//-----------------------------------------------------------------------------------

	// порахувати к-ть літер, пропусків, розділових знаків

	/*char *S = new char[200];
	cin.getline(S, 200, '#');  
	int  a = 0, p = 0, s = 0, d = 0;

	for (int i = 0; S[i] != '\0'; i++)
	{
		if (isalpha(S[i]))
		{
			a++;
		}
		if (isdigit(S[i]))
		{
			d++;
		}
		if (isspace(S[i]))
		{
			s++;
		}
		if (ispunct(S[i]))
		{
			p++;
		}


	}

	cout << " a= " << a << endl;
	cout << " d= " << d << endl;
	cout << " s= " << s << endl;
	cout << " p= " << p << endl;*/

	//--------------------------------------------------

	//видолити no

	char *Str = new char[100];
	cin.getline(Str, 100);

	char *res =DelNo( Str);
	cout << res << endl;

	delete [] Str;
	delete[] res;

	system("pause");
	return 0;
}

char *DelNo(char *Str)
{
	char *newS = new char[strlen(Str)+1];
	int i = 0, j = 0;

	do {
		if (Str[i] == 'n'&&Str[i + 1] == 'o')
		{
			i += 2;
		}
		else
		{

			newS[j] = Str[i];
			i++;
			j++;
		}
	} while (Str[i] != 0);
	newS[j] = '\0';

		return newS;
}