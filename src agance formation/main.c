#include "header/Global.h"
/**************************************** Main ****************************************/
/******** YOUSSEF Apiwi ************************************************************/
/**************************************************************************************/
int main(){
    system("title Agence De Formation Fes");
    Loading();
    ChargerFormation();
    int choix;
    do{
        system("mode 80");
        system("color 70");
        printf("\t|������������������������������������������������|\n");
        printf("\t|�|��������������������������������������������|�|\n");
        printf("\t|������������������������������������������������|\n");
        printf("\t|�|********************************************|�|\n");
        printf("\t|�|�  Bienvenue Chez Agence De Formation FES  �|�|\n");
        printf("\t|�|********************************************|�|\n");
        printf("\t|�|* 1---> Les Formation Ouverte              *|�|\n");
        printf("\t|�|* 2---> Se Connecter                       *|�|\n");
        printf("\t|�|* 0---> Quitter                            *|�|\n");
        printf("\t|�|********************************************|�|\n");
        printf("\t|�|*------------------------------------------*|�|\n");
        printf("\t|�|* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:ListerFormationClient();break;
            case 2:MenuConnect();break;
            case 0:Quitter();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
    return 0;
}
/*****//* YOUSSEF CHOUIREF *//***************************************************************/
