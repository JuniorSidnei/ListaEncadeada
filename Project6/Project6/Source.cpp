#include <iostream>
#include <vector>


using namespace std;


struct reg
{

	int x, y, charge;
	char status;
	float temp;
};

struct fil
{
	vector<reg> regs;
};

//void full(fil *f)
//{
//	if (f->regs.size() == max)
//		cout << "Fila cheia!" << endl;
//}
void emptv(fil *f)
{
	if (f->regs.size() == 0)
		cout << "Fila Vazia!" << endl;
}
void addReg(fil *f, reg *r, int *contador)
{
	//adding a member to the reg
	f->regs.push_back(*r);
	contador += 1;
	system("cls");
	
}

void outReg(fil *f, int *contador)
{
	//retriving a member of the reg
	cout << "X:" << f->regs[0].x << endl;
	cout << "Y:" << f->regs[0].y << endl;
	cout << "Status:" << f->regs[0].status << endl;
	cout << "Temperatura:" << f->regs[0].temp << endl;
	f->regs.erase(f->regs.begin());
	contador -=1;
}

int main()
{
	int choice, *contador;
	contador = 0;
	fil* fila = new fil;
	reg *aux = nullptr;

	while (1)
	{
		cout << "Registro!" << endl;
		cout << "1 - Adicionar registro." << endl;
		cout << "2 - Retirar registro." << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			
			
				aux = new reg;
				cout << "---------------------------###########---------------------------" << endl;
				//cout << "Registro: " << contador << endl;
				cout << "Posicao X: " << endl;
				cin >> aux->x;
				cout << "Posicao Y: " << endl;
				cin >> aux->y;
				cout << "Temperatura: " << endl;
				cin >> aux->temp;
				cout << "Status: " << endl;
				cin >> aux->status;

				addReg(fila, aux, contador);
				system("cls");
			
			break;
		case 2:
			if(fila->regs.size() == 0)
				emptv(fila);
			else
			outReg(fila, contador);
			break;
		}

	}

	system("pause");
	return 0;
}