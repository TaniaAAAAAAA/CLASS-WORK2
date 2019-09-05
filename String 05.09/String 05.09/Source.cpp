#include<iostream>
#include<ctime>

using namespace std;


int main()
{
	
	/*char *S = new char[100];
	cout << "Enter sentens  ->    ";
	cin.getline(S, 100, '#');
	int n;

	for (int i = 0; S[i] != '\0'; i++)
	{
		if (ispunct(S[i]))
		{
			n = i; n++;
			break;
		}
	}
	
	for (int i = n; ispunct(S[i]) == 0; i++)
		cout << S[i];
	    cout << endl;*/

	//--------------------------------------------------


	//char *S = new char[100];
	//cout << "Enter sentens  ->    ";
	//cin.getline(S, 100, '#');
	//int n = 0;
	//n = strlen(S)-1; //Так само як з розміром масиву. Зменшуємо на 1
	//bool exit = true;

	//for (int i = 0; i<n; i++)
	//{
	//	if (S[i] == S[n])
	//	{
	//		n--;
	//	}
	//	else 
	//	{
	//		exit = false
	//	}
	//}
	//cout << exit<<endl;

	//------------------------------------------------------------

	char *S = new char[90];
	cout << "Enter sentens  ->    ";
	cin.getline(S, 90, '#');

	
	char *newS = new char[strlen(S) + 1];

	cout << "\n===============================\n";

	for (int i = 0; i < S[i] != '\0'; i++)
	{
		cout << S[i];
	}
	cout<<"\n===============================\n";

	for(int i=0;i< S[i] != '\0'; i++)
	{
		newS[i] = S[i];
	}

	for (int i = 0; i < S[i] != '\0'; i++)
	{
		cout << newS[i];
	}
	
	cout << "\n===============================\n";

	system("pause");
	return 0;
}

