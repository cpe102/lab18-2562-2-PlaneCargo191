#include<iostream>
#include<algorithm>
using namespace std;

struct Rect
{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main()
{
	Rect A;
	Rect B;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> A.x >> A.y >> A.w >> A.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> B.x >> B.y >> B.w >> B.h;
	cout << "Overlap area = " << overlap(A, B);	
	return 0;
}

double overlap(Rect A, Rect B)
{
	double Ax = A.x+A.w;
	double Ay = A.y-A.h;
	double Bx = B.x+B.w;
	double By = B.y-B.h;

	double areaO = ((min(Ax, Bx) - max(A.x, B.x))) * ((min(A.y, B.y) - max(Ay, By)));

	if(areaO < 0) return 0;
	else return areaO;
}