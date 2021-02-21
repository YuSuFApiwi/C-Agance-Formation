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
        printf("\t|°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°|\n");
        printf("\t|²|²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²|²|\n");
        printf("\t|°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°|\n");
        printf("\t|²|********************************************|²|\n");
        printf("\t|²|²  Bienvenue Chez Agence De Formation FES  ²|²|\n");
        printf("\t|²|********************************************|²|\n");
        printf("\t|²|* 1---> Les Formation Ouverte              *|²|\n");
        printf("\t|²|* 2---> Se Connecter                       *|²|\n");
        printf("\t|²|* 0---> Quitter                            *|²|\n");
        printf("\t|²|********************************************|²|\n");
        printf("\t|²|*------------------------------------------*|²|\n");
        printf("\t|²|* Entrez Voter Choix: ");
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
