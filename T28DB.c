#include "func.h"
#define MAX 50



int main(int argc, char** argv) {
    PUPIL DB[MAX];
    int DBSIZE=0;
    int run = 1;
    char ch;
    int x;
    
    while(run)
    {
        printf("\n\n\n0-exit\n"
                "1 - add pupil\n"
                "2- print DB\n"
                "3- delete pupil\n");
        
        ch = getchar();
        getchar();
        
        while(ch == '\n')
            ch = getchar();
        getchar();
        
        switch(ch)
        {
            case '0':
                run = 0;
                break;
                
            case '1':
                ReadPupil(&DB[DBSIZE]);
                DBSIZE++;
                break;
            case '2' :
                if(DBSIZE==0)
                    printf("DB is empty\n");
                else 
                    PrintDB(DB,DBSIZE);
                break;
            case '3':   
                printf("Input index");
                scanf("%i", &x);
                getchar();
                DeletePupil(DB,&DBSIZE, x );
            /*case '\n':
                    printf("Got nnn\n");
                    break;*/
            default:
                printf("Incorrect choice!\n");
        }
    }

    return (EXIT_SUCCESS);
}

