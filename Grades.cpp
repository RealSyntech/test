// Carranza, Gian Carlo A.					BSIT 1A  G2             05-13-19
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
using namespace std;

int GRD[5][5], average, total, lowest = 60, highest = 100, range = (highest - lowest) + 1, a, b, random;
string subject[5] = { "IT 105", "IT 107", "IT 328", "IT 343", "IT 383" }, name[5], *sub = subject, *N = name, recn[] = {"1.00\nPASSED!\n", "1.25\nPASSED!\n", "1.50\nPASSED!\n", "1.75\nPASSED!\n", "2.00\nPASSED!\n", "2.25\nPASSED!\n", "2.50\nPASSED!\n", "2.75\nPASSED!\n"};

int main()
{
	srand(time(0));
	for (a = 0; a < 5; a++)
	{
		cout<<"Enter your Name: ";
		cin>>*(N + a);

		for (b = 0; b < 5; b++)
		{
			GRD[a][b] = lowest + int (range* rand() / (RAND_MAX + 1));
			cout<<*(sub + b)<<" "<<GRD[a][b]<<endl;
		}
	}
	cout<<"\n\n\t"<<*(N + 0)<<"\t"<<*(N + 1)<<"\t"<<*(N + 2)<<"\t"<<*(N + 3)<<"\t"<<*(N + 4);
	for (a = 0; a < 5; a++)
	{
		cout<<"\n-----------------------------------------------";
		cout<<endl<<*(sub + a)<<"\t";
		for (b = 0; b<5; b++)
		{
			cout<<GRD[b][a]<<"\t";
		}
	}
	for (a = 0; a < 5; a++)
	{
		total = 0;
		for (b = 0; b < 5; b++)
		{
			total = GRD[a][b] + total;
		}
		average = total / 5;
		cout<<"\n\n"<<name[a]<<endl;
		cout<<average<<endl;
			for (int c = 0; c<8; c++)
			{
				const int d = 2;
				int rec[] = { 97, 94, 91, 88, 85, 82, 79, 76};
				if (average>=rec[c] && average<=(rec[c]+d))
				{
					cout<<recn[c];
				}
			}
		if (average == 75)
		{
			cout<<"3.00"<<endl;
			cout<<"PASSED!\n";
		}
		else if(average == 100) {cout<<recn[0];}
		else if(average <= 74)
		{
			cout<<"5.00\nFAILED!\n";
		}
	}
	system("PAUSE");
}
