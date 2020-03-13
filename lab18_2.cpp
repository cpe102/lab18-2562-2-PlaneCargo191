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
    Rect *p = &A;
    Rect *q = &B;

    double Ax = (p->x)+(p->w);
	double Ay = (p->y)-(p->h);
	double Bx = (q->x)+(q->w);
	double By = (q->y)-(q->h);

	double areaO = ((min(Ax, Bx) - max(p->x, q->x))) * ((min(p->x, q->y) - max(Ay, By)));

	if(areaO < 0) return 0;
	else return areaO;
}