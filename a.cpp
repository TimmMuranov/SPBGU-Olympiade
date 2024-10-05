#include <iostream>
using namespace std;

int main()
{
	int w, h, x_a, y_a, x_b, y_b;
	cin >>w>>h>>x_a>>y_a>>x_b>>y_b;
	
    int r_x, r_y; //раст-я точек друг от друга
	int r1, r2, r3;
	
	if(x_a>=x_b){r_x=x_a-x_b;}
	else{r_x=x_b-x_a;}
	if(y_a>=y_b){r_y=y_a-y_b;}
	else{r_y=y_b-y_a;}
	
r1 = r_x + r_y;//без переходов через край
	
//cout <<"расстояние 1 = " << r1 << endl;
//========================

int r_x1 = r_x; //создание копий для 
r_x = w - r_x;//восст-я значений потом

int y_a1 = y_a; 
y_a = h - y_a + 1;

	if(y_a>=y_b){r_y=y_a-y_b;}
	else{r_y=y_b-y_a;}//второе оп-е r_y
r2 = r_x + r_y; //оп-е общего расст-я

y_a = y_a1;//восст-е начальнвх знач.
r_x = r_x1;

//cout <<"расстояние 2 = " << r2 << endl;
//======================

int r_y1 = r_y;
r_y = h - r_y;

int x_a1 = x_a;
x_a = w - x_a + 1;

	if(x_a>=x_b){r_x=x_a-x_b;}
	else{r_x=x_b-x_a;}

r3 = r_x + r_y;

r_y = r_y1;
x_a = x_a1;

//cout << "расстояние 3 = "<< r3 << endl;
//======================
if(r1 <= r2){cout << r1;return 0;}
else{cout << r2;return 0;}
cout << r3;
return 0;
}
