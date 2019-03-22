#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char Surname[20];
    char Name[15];
    int age;
}PUPIL;

void f();
void ReadPupil(PUPIL* p);
void PrintDB(PUPIL* DB, int SIZE);
void DeletePupil(PUPIL* DB, int* DBSIZE, int index);
void SaveDB(PUPIL* DB, int DBSize);
void LoadDB(PUPIL* DB, int* DBSize, int MAX);
void Sortbyage( PUPIL* a, int SIZE);