#include<iostream>
#include<ctime>

using namespace std;

//Fun for string

int main()
{
	//вводиться рядок замінити в рядку перших 5 входжень літери а на *, останніх 7 входжень літери о на !

	//char str [100];
	//cin.getline(str, 100);
	//for (int i = 0; i < 5; i++)
	//{
	//	char *p = strchr(str, 'a');
	//	if (p != nullptr)
	//	{
	//		*p = '*';
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}



	//for (int i = 0; i < 7; i++)
	//{
	//	char *p = strrchr(str, 'o');
	//	if (p != nullptr)
	//	{
	//		*p = '!';
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}
	//cout << str << endl;





	//дано реч і деяке слово порахувати скільки раз зустіч дане слово

	/*char text[100] = "aaa 1 aaa 2 ";
	char word[10];
	cin.getline(word, 10);
	int count = 0;
	char *p = strstr(text, word);

	while (p != nullptr)
	{
		count++;
		p = strstr(p + strlen(word), word);

	}
	cout << "Count = " << count << endl;*/


/*
	char str1[100]="Hell";
	char str2[100]="World";*/

	//strcat_s(str1, " ");
	//strncat_s(str1, str2, 2 );
	//cout << str1 << endl;


	//strcat_s(str1, " ");
	//strcpy_s(str1, str2);
	//cout << str1 << endl;


	//вводиться послідовнісь слів щзнака кінця вводу слово стоп Знайти 
	//порахувати кіл введентх слів зн найдовше і найкоротше слово
	//зн 1 по алфавіту і останнє по алфавіту


	/*char word[20]="\0";
	int k = 0;
	char max[20]= "\0", min[20]= "regfffffffffffty", f[20]= "zzz", l[20]= "\0";

	while (strcmp(word, "stop") != 0)
	{
		cin.getline(word, 20);
		k++;
		if (strlen(word) > strlen(max))
		{
			strcpy_s(max, word);
		}

		if (strlen(word) < strlen(min))
		{
			strcpy_s(min, word);
		}


		if (strcmp(word, f) < 0)
		{
			strcpy_s(f, word);
		}



		if (strcmp(word, l) > 0)
		{
			strcpy_s(l, word);
		}

	}

	cout << "kil = " << k << endl;
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	cout << "f = " << f << endl;
	cout << "l = " << l << endl;*/

//--------------------------------------------
//
//char sep[] = " ,.!?";
//char *token = nullptr;
//char *nextok;
//char str[100];
//cin.getline(str, 100);
//token=strtok_s(str, sep, &nextok);
//
//while (token != nullptr)
//{
//	cout << token << endl;
//	token = strtok_s(NULL, sep, &nextok);
//}
//------------------------------------------------------

//вводиться речення утв рядок зі слів що мають однакові 1 
//і останню букви
 //утв рядок зі слівб що мають більше 2 голосних
	// відкидаючи 1 і останню букви




char sep[] = " ,.!?";
char *token = nullptr;
char *nextok;
char str[100];
char res1[100] = "\0";
char res2[100] = "\0";
char res3[100] = "\0";
char res4[100] = "\0";

cin.getline(str, 100);
token=strtok_s(str, sep, &nextok);

char arr[50][30];
int SIZE = 0;

while (token != nullptr)
{
	cout << token << endl;
	strcpy_s(arr[SIZE], token);
	SIZE++;

	if (token[0] == token[strlen(token) - 1])
	{
		strcat_s(res1, token);
		strcat_s(res1, " ");
	}

	int k = 0;
	for (int j = 0; j < strlen(token); j++)
	{
		if (token[j] == 'a' || token[j] == 'i' || token[j] == 'o')
		{
			k++;
		}
	}


	if (k >= 2)
	{
		strcat_s(res2, token);
	}



	strncat_s(res3, token + 1, strlen(token) - 2);


	token = strtok_s(NULL, sep, &nextok);
	
}
cout << res1 << endl;
cout << res2 << endl;
cout << res3 << endl;

for (int i = 0; i < SIZE; i++)
{
	for (int j = 0; j < SIZE - 1 - i; j++)
	{
		if (strcmp(arr[j], arr[j + 1]) > 0)
		{
			swap(arr[j], arr[j + 1]);

		}
	}
}

cout << "====================================\n";
for (int i = 0; i < SIZE; i++)
{
	cout << arr[i] << endl;
}
	system("pause");
	return 0;
}