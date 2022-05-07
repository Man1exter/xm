#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

const int N=6;

class triangle
{
friend class trgroup;

private:

double p,h;
double area();
void show_object();

public:

void read_data();
};

double triangle::area()
{
return 0.5*p*h;
}

void triangle::read_data()
{
printf("Enter the height: ");
scanf("%lf",&h);
printf("Enter the base: ");
scanf("%lf",&p);
}

void triangle::show_object()
{
printf("\np=%.3le",p);
printf("\nh=%.3le",h);
printf("\narea=%.3le",area());
}

// Klasa trgroup przechowuje tablicę obiektów typu triangleg[N].

class trgroup
{
private:
triangle g[N];
int max_position();
public:
void show_group();
void fill_array();
void show_max();
};

void trgroup::show_group()
{
int j;

for(j=0;j<N;j++)
{
g[j].show_object();
printf("\n\n");
}
}

void trgroup::fill_array()
{
srand(time(NULL));
for (int i=0;i<N;i++)
{
g[i].p=rand()%100;
g[i].h=rand()%100;
}
}

//Funkcja prywatnamax_positionznajduje w tablicy indekselementu o największym polu. Nazasadzie przyjaźni wykorzystuje do tego celu funkcję prywatnąareaklasytriangle.

int trgroup::max_position()
{
double max=g[0].area();
int imax=0;
for (int i=1;i<N;i++)if(g[i].area()>max)
{
max=g[i].area();
imax=i;
};

return imax;
}

void trgroup::show_max()
{
printf("\nThe greatest area triangle: ");
g[max_position()].show_object();
}

int main()
{
trgroup trg;
trg.fill_array();
trg.show_group();
trg.show_max();
getch();
return 0;
}