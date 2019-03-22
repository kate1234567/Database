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

void SaveDB(PUPIL* DB, int DBSize)
{
    FILE* F;
    
    F = fopen("database1.txt", "wb");
    
    if(F == NULL)
        return;
    
    fwrite(DB, sizeof(PUPIL), DBSize, F);
    fclose(F);
    printf("database is save");
}

void LoadDB(PUPIL* DB, int* DBSize, int MAX)
{
    FILE* F;
    
    F = fopen("database1.txt", "rb");
    
    if(F == NULL)
        return;
    
    *DBSize = fread(DB, sizeof(PUPIL), MAX, F);
    fclose(F);
    printf("database is load");
}

void swap(PUPIL* a , PUPIL*b)
{
    PUPIL tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;

} 
void Sortbyage( PUPIL* a, int SIZE)
{
    int i;
    int j;
    int tmp;
    for( j=0; j<SIZE-1; j++)
    {
        for(i=0;i<SIZE-1-j; i++)
        {
            if(a[i].age>a[i+1].age)
            {
                swap(&a[i+1], &a[i]);
            }
        
        }
    
    }

}
