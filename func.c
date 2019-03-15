#include "func.h"


void f()
{
    printf("My name is f!");
}

void ReadPupil(PUPIL* p)
{
    printf("Input Surname ");
    gets(p->Surname);
    printf("Input Name ");
    gets(p->Name);
    printf("Input Age ");
    scanf("%i", &(*p).age);
    getchar();

}

void PrintDB(PUPIL* DB, int SIZE)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("%i-%s %s %i\n", i+1, DB[i].Surname, DB[i].Name, DB[i].age);
    
    }

}

void DeletePupil(PUPIL* DB, int* DBSIZE, int index)
{
    int j;
    if(index>=1 && index<= *DBSIZE)
    {
        if(index == *DBSIZE)
            (*DBSIZE)--;
        else
        {
            for(j=index;j<*DBSIZE;j++)
            {
                DB[j-1]=DB[j];
            }
            (*DBSIZE)--;
        
        } 
    
    }

    else
        printf("No such element");

}