#include <iostream>
#include <conio.h>
#include <Windows.h>

const int maxs = 10;

// Crete Matrix Structure
struct AD
{
	int a[maxs][maxs];
};



using namespace std;

// define All Methods
void initial();
void mainMenu();
void optionMenu();
AD generate(int, int);
void print(AD, int, int);
void multiply(int[][maxs], int, int, int);
void upperTriangular(int[][maxs], int, int);
void lowerTriangular(int[][maxs], int, int);
void transposition(int[][maxs], int, int);
void serch(int[][maxs], int, int, int);
void findMax(int[][maxs], int, int);
void findMin(int[][maxs], int, int);
void asb(int, int, int, int);
void minister(int, int, int, int);
void p2(int[][maxs], int, int);




int main()
{
	initial();
	mainMenu();

	int menuOption;
	int first, end;
	int matrix[maxs][maxs];
	char option;

	cin >> option;

	if (option == 'p' || option == 'P')
	{

		cout << "\n\t\t\t\t\t\tEnter The Number Of Rows : \t";
		cin >> first;
		cout << "\n\t\t\t\t\t\tEnter The Number Of Columns : \t";
		cin >> end;

		if (first <= 10 && end <= 10)
		{
			AD Matrix = generate(first, end);
			print(Matrix, first, end);
			for (int i = 0; i < first; i++)
				for (int j = 0; j < end; j++)
					matrix[i][j] = Matrix.a[i][j];
		}
		else
		{
			system("color 40");
			system("cls");
			cout << "\n\n\n\n\n\t\t\t\t\t\t\tNOT CORRECT NUMBER \n\t\t\t\t\t\t\tEntur Number of 1 to 10\n";
			cout << "\n\n\n\t\t\t\t\t\tPRES ANY KEY for back to menu";
			_getch();
			system("cls");
			system("color B5");
			main();
		}
	}

	else if (option == 'o' || option == 'O')
	{
		system("color 0c");
		system("cls");
		cout << "\n\n\n\n\t\t\t\t\t   [404]Matrix Not Foundn\t\t\t\t\t FIRST CREATE MATRICE!";
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress Any Key for back";
		_getch();
		system("cls");
		system("color B5");
		main();
	}
	else if (option == 'q' || option == 'Q')
		exit(0);
	else
	{
		system("color 0c");
		system("cls");
		cout << "\n\n\n\n\t\t\t\t\t   [404]Operation Not Found";
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress Any Key for back";
		_getch();
		system("cls");
		system("color B5");
		main();
	}
	while (true)
	{
		// cout << "\t\t\t\t\t\t" << "\n\n" << "\t\t\t\t\t\t" << "   production matrice   = P" << "\n\n" << "\t\t\t\t\t\t" << "   menu\t\t\t= M" << "\n\n" << "\t\t\t\t\t\t" << "   exit \t\t= E\n\n\t\t\t\t\t\tCHOOSE THE CHAR TO CONTINUE!";
		mainMenu();
		char option;
		cin >> option;
		if (option == 'p' || option == 'P')
		{

			cout << "\n\t\t\t\t\t\tEnter The Number Of Rows : \t";
			cin >> first;
			cout << "\n\t\t\t\t\t\tEnter The Number Of Columns : \t";
			cin >> end;
			if (first <= 10 && end <= 10)
			{
				AD Matrix = generate(first, end);
				print(Matrix, first, end);
				for (int i = 0; i < first; i++)
					for (int j = 0; j < end; j++)
						matrix[i][j] = Matrix.a[i][j];
			}
			else
			{
				system("color 40");
				system("cls");
				cout << "\n\n\n\n\n\t\t\t\t\t\t\t NOT CORRECT NUMBER \n\t\t\t\t\t\t\t Enter Number of 1 to 10\n";
				cout << "\n\n\n\t\t\t\t\t\tPRES ANY KEY for back to menu";
				_getch();
				system("cls");
				system("color B5");
				main();
			}
		}
		else if (option == 'o' || option == 'O')
		{
			system("cls");
			p2(matrix, first, end);
			while (true)
			{
				optionMenu();

				cin >> menuOption;
				if (menuOption == 1)
				{
					while (true)
					{
						{
							p2(matrix, first, end);
							system("cls");
							cout << "\n\t\t\t\t\t\t ---[Multiply By Number]--- \n\t\t\t\t\t\t";
							int n;
							cout << "Enter Number For Multiply : ";
							cin >> n;
							multiply(matrix, first, end, n);
							char s;

							cout << "\n\n\t\t\t\t\t\t Pres Any Key For Back";
							_getch();
							system("cls");
							break;
						}
					}
				}
				else if (menuOption == 2)
				{
					while (true)
					{
						if (first != end)
						{
							system("color 0c");
							system("cls");
							cout << "\n\n\n\n\n\t\t\t\t\t\t   ! MATRICE NOT SQUARE !";
							cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t Pres Any Key For Back";
							_getch();
							system("cls");
							system("color B5");
							break;
						}
						else
						{
							system("cls");
							cout << "\n\t\t\t\t\t\t ---[Convert To Upper Triangular Matrix]--- \n\t\t\t\t\t\t";
							upperTriangular(matrix, first, end);
							cout << "\n\n\t\t\t\t\t\tPres Any key For Back";
							_getch();
							system("cls");
							break;
						}
					}
				}

				else if (menuOption == 3)
				{
					while (true)
					{
						if (first != end)
						{
							system("color 0c");
							system("cls");
							cout << "\n\n\n\n\n\t\t\t\t\t\t   ! MATRICE NOT SQUARE !";
							cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t Pres Any Key For Back";

							_getch();
							system("cls");
							system("color B5");
							break;
						}
						else
						{
							system("cls");
							cout << "\n\t\t\t\t\t\t ---[Convert To lower Triangular Matrix]--- \n\t\t\t\t\t\t";
							lowerTriangular(matrix, first, end);
							cout << "\n\n\t\t\t\t\t\t Pres Any Key For Back";
							_getch();
							system("cls");
							break;
						}
					}
				}

				else if (menuOption == 4)
				{
					while (true)
					{
						system("cls");
						cout << "\n\t\t\t\t\t\t\t ---[Transposition]--- \n\t\t\t\t\t\t";
						transposition(matrix, first, end);
						cout << "\n\n\t\t\t\t\t\t Pres Any Key For Back";
						_getch();
						system("cls");
						break;
					}
				}
				else if (menuOption == 5)
				{
					while (true)
					{
						system("cls");
						int c;
						cout << "\n\t\t\t\t\t\t ---[Search Number in Matrix]--- \n\t\t\t\t\t\t";
						cout << "\n\t\t\t\t\t\t Enter Number For Search :";
						cin >> c;
						serch(matrix, first, end, c);
						cout << "\n\n\t\t\t\t\t\tPres Any Key For Back";
						_getch();
						system("cls");
						break;

					}

				}
				else if (menuOption == 6)
				{
					while (true)
					{
						system("cls");
						cout << "\n\t\t\t\t\t\t ---[Find The Largest Number]--- \n\t\t\t\t\t\t";
						findMax(matrix, first, end);
						cout << "\n\n\t\t\t\t\t\tPres Any Key For Back";
						_getch();
						system("cls");
						break;
					}
				}
				else if (menuOption == 7)
				{
					while (true)
					{
						system("cls");
						cout << "\n\t\t\t\t\t\t ---[Find The Smallest Number]---\n\t\t\t\t\t\t";
						findMin(matrix, first, end);
						cout << "\n\n\t\t\t\t\t\tPres Any Key For Back";
						_getch();
						system("cls");
						break;
					}

				}
				else if (menuOption == 8)
				{

					while (true)
					{
						system("cls");

						cout << "t\t\t\t\t\t        ---[Show The Movement Of The Minister]--- \n\n\t\t\t\t\t"
							<<"      [-]Enter the size of the chessboard  ";
						int p, t;
						cout << "\n\t\t\t\t\t\t -Enter The Number Of Rows : ";
						cin >> p;
						cout << "\n\t\t\t\t\t\t -Enter The Number Of Colums : ";
						cin >> t;
						int r, q;
						if (p != t)
						{
							system("color 0c");
							system("cls");
							cout << "\n\n\t\t\t\t\t\t [!]Rows And Columns Not Equals[!]";
							cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPres Any Key For Back";
							_getch();
							system("cls");
							system("color B5");
							continue;
						}
						cout << "\n\n\t\t\t\t\t\t  [-]Enter The Minister location \n\t\t\t\t\t\tenter pillar :\n\t\t\t\t\t\t";
						cin >> q;
						cout << "\n\t\t\t\t\t\t -Enter The Number Of Rows \n\t\t\t\t\t\t";
						cin >> r;
						cout << "\n\n";
						minister(p, t, q, r);
						cout << "\t\t\t\t\t\t -Enter The Number Of Colums";
						_getch();
						system("cls");
						break;
					}

				}

				else if (menuOption == 9)
				{
					while (true)
					{

						system("cls");
						cout << "\n\t\t\t\t\t\t ---[Show The Movement Of The Horse]--- \n\t\t\t\t\t"
							<<"      [-]Enter the size of the chessboard  ";
						int p, t;
						cout << "\n\t\t\t\t\t\t -Enter The Number Of Rows : ";
						cin >> p;
						cout << "\n\t\t\t\t\t\t -Enter The Number Of Colums : ";
						cin >> t;
						int r, q;
						if (p != t)
						{
							system("color 0c");
							system("cls");
							cout << "\n\n\t\t\t\t\t\t [!]Rows And Columns Not Equals[!]";
							cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPres Any Key For Back";
							_getch();
							system("cls");
							continue;
						}
						cout << "\n\n\t\t\t\t\t\t [-]Enter The Horse location \n\t\t\t\t\t\tenter Column :\n\t\t\t\t\t\t";
						cout << "\n\t\t\t\t\t\t -Enter The Number Of Rows \n\t\t\t\t\t\t";
						cin >> q;
						cout << "\t\t\t\t\t\t -Enter The Number Of Colums";
						cin >> r;
						cout << "\n\n";
						asb(p, t, q, r);
						cout << "\t\t\t\t\t\tPres Any Key For Back";
						_getch();
						system("cls");
						break;
					}
				}
				else if (menuOption == 0)
				{
					system("cls");
					break;
				}
				else{
					system("cls");
					break;
				}
			}

		}


		else if (option == 'q' || option == 'Q')
			exit(0);

		else
		{
			system("color 0c");
			system("cls");
			cout << "\n\n\n\t\t\t\t\t\t [404]Operation Not Found ";
			cout << "\t\t\t\t\t\t Pres Any Key For Back";
			_getch();
			system("cls");
			system("color B5");
		}
	}




	_getch();
	return 0;
}


void initial(){
	//RESIZE A FONT AND WINDOW
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   
	cfi.dwFontSize.Y = 24;                  
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FF_MODERN;
	std::wcscpy(cfi.FaceName, L"Consolas"); 
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	//CHANGE COLOR WINDOW
	system("color B5");
	
}

void mainMenu(){
	cout << "\t\t\t\t\t\t" << "\n\n" << "\t\t\t\t\t\t" << "   Create Random Matrix \t P" 
		<< "\n\n" << "\t\t\t\t\t\t" << "   Operations\t\t\t O" << "\n\n" << "\t\t\t\t\t\t" 
		<< "   Exit \t\t\t Q\n\n\t\t\t\t\t\t\tENTER YOURE OPTION : ";
}

void optionMenu(){
	cout << "\n\n\t\t\t\t\t\t\tOperations :"
		<< "\n\n\t\t\t\t\t\t[1] multiply By Number\n\t\t\t\t\t\t"
		<<"[2] Convert To upperTriangularper Triangular Matrix  \n\t\t\t\t\t\t"
		<<"[3] Convert To lower Triangular Matrix \n\t\t\t\t\t\t"
		<<"[4]transpositionnsposition \n\t\t\t\t\t\t"
		<<"[5] Search Number in Matrix \n\t\t\t\t\t\t"
		<<"[6] Find The Largest Number\n\t\t\t\t\t\t"
		<<"[7] Find The Smallest Number\n\t\t\t\t\t\t"
		<<"[8] movement minister\n\t\t\t\t\t\t"
		<<"[9] movment hourse\n\t\t\t\t\t\t"
		<<"[0] Back To Main Menu\n\t\t\t\t\t\t\n\t\t\t\t\t\t"<<
		"Choose Youre Option : ";
}

// # generate matrix n*m
AD generate(int n, int m)
{
	AD o;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int rang = 10;
			o.a[i][j] = rand() / 100 % rang;

		}
	}

	return o;
}

// # print matrix b*c
void print(AD p, int b, int c)
{

	system("cls");
	cout << "\t\t\t\t\t\t\tmatric " << b << "*" << c << "\n\n\t\t\t\t\t\t";
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{

			cout << p.a[i][j] << "\t";

		}

		cout << "\n\n\t\t\t\t\t\t";
	}
}

void multiply(int d[][maxs], int a, int b, int n)
{
	int c[maxs][maxs];
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			c[i][j] = d[i][j] * n;

	cout << "\n\n\t\t\t\t\t\t";
	for (int k = 0; k < a; k++)
	{
		for (int l = 0; l < b; l++)
			cout << c[k][l] << "\t";
		cout << "\n\n\t\t\t\t\t\t";
	}
}


void upperTriangular(int a[][maxs], int n, int m)
{
	int b[maxs][maxs];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			b[i][j] = a[i][j];
			if (i > j)
				b[i][j] = 0;
			cout << b[i][j] << "\t";

		}
		cout << "\n\n\t\t\t\t\t\t";
	}




}


void lowerTriangular(int a[][10], int n, int m)
{
	int b[maxs][maxs];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			b[i][j] = a[i][j];
			if (i < j)
				b[i][j] = 0;
			cout << b[i][j] << "\t";
		}
		cout << "\n\n\t\t\t\t\t\t";
	}


}


void transposition(int b[][maxs], int n, int m)
{
	int a[maxs][maxs];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[j][i];
			cout << a[i][j] << "\t";
		}
		cout << "\n\n\t\t\t\t\t\t";
	}
}




void serch(int a[][maxs], int n, int m, int s)
{
	cout << "n\t\t\t\t\t\t";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == s)
				cout << "*\t";
			else
				cout << a[i][j] << "\t";

		}
		cout << "\n\n\t\t\t\t\t\t";
	}
}



void findMax(int a[][maxs], int n, int m)
{
	int max = a[0][0];

	int b = 0, c = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] >max)
			{
				max = a[i][j];
				b = i;
				c = j;
			}
		}
	}
	cout << "\n\n\t\t\t\t\t\tlarger number =   " << a[b][c] << "\n\t\t\t\t\t\tof pillar " << b << "  and lin  " << c;

}

void findMin(int a[][maxs], int n, int m)
{
	int min = a[0][0];

	int b = 0, c = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
				b = i;
				c = j;
			}
		}
	}
	cout << "\n\n\t\t\t\t\t\tshorter number =   " << a[b][c] << "\n\t\t\t\t\t\tof pillar " << b << "  and lin  " << c;

}

void minister(int n, int m, int c, int b)
{
	char a[maxs][maxs];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			a[i][j] = '-';
	int k = 0;
	for (int i = 0; i < m; i++)
		a[c][i] = '*';
	for (int j = 0; j < n; j++)
		a[j][b] = '*';
	for (k = 0; k <= n - c || k <= n - b; k++)
	{
		a[c][b] = 'Q';
		if (k <= b&&c + k <= n)
			a[c + k][b - k] = '*';
		if (k <= b&&b - k >= 0)
			a[c - k][b - k] = '*';
		if (k <= m - b&&c - k >= 0)
			a[c - k][b + k] = '*';
		if (n - c >= k&&m - b >= k)
			a[c + k][b + k] = '*';


	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << "\t";
		cout << "\n\n";
	}
}
void asb(int n, int m, int c, int b)
{
	char a[maxs][maxs];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			a[i][j] = '-';

	a[c][b] = 'H';
	a[c - 2][b - 1] = '*';
	a[c - 2][b + 1] = '*';
	a[c + 2][b - 1] = '*';
	a[c + 2][b + 1] = '*';
	a[c - 1][b + 2] = '*';
	a[c + 1][b + 2] = '*';
	a[c - 1][b - 2] = '*';
	a[c + 1][b - 2] = '*';


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << "\t";
		cout << "\n\n";
	}
}
void p2(int c[][maxs], int a, int b)
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cout << c[i][j] << "\t";
		cout << "\n\n\t\t\t\t\t\t\t";
	}
}
