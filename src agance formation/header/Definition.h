#ifndef DEFINITION_H_INCLUDED
#define DEFINITION_H_INCLUDED
#include "Global.h"
/****************************************** Definition ******************************************/
/*
*****
** la definition des modules
*****
*/
/********************************* 24/01/2020 ********************************/
void ModifierInscription(){
    int pos,id,choix;
    printf("\t*|**************************************|*\n");
    printf("\t|* Entrez le Num Session de Inscription: ");
    scanf("%i",&id);
    pos=ChercherInscription(id);
    if(pos!=-1){
    do{
        system("color e0");
        printf("\t******************************************\n");
        printf("\t*°         Modifier Inscription         °*\n");
        printf("\t******************************************\n");
        printf("\t* 1 |------> Modifier Prix               *\n");
        printf("\t* 2 |------> Modifier Date Inscription   *\n");
        printf("\t* 0---> Quitter et Sauvegarder           *\n");
        printf("\t******************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:printf("\t*| Entrez un nouveau Prix de Inscription: ");
                   fflush(stdin);
                   scanf("%f",&BDInscription[pos].prix);
                   printf("\t*| Le Prix Inscription a chang%c avec succ%cs ^_^ *\n",130,130);break;
           case 2:printf("\t*| Entrez un nouveau Date JJ/MM/AAAA Inscription: ");
                    scanf("%d%d%d",&BDInscription[pos].dateInscription.j,&BDInscription[pos].dateInscription.m,&BDInscription[pos].dateInscription.a);
                  id=DateValide(BDInscription[pos].dateInscription.j,BDInscription[pos].dateInscription.m,BDInscription[pos].dateInscription.a);
                  if(id == 0){
                        printf("\t*| La Date Inscription a chang%c avec succ%cs ^_^ *\n",130,130);break;
                  }else if(id !=0){
                            break;
                  }
            case 0:SauvegarderInscription();GestionInscription();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
        system("pause");
        system("cls");
    }while(choix!=0);
    }else
        printf("\t\t\t* Num Session * %d * est incorrect !!! *\n",id);
}
void ModifierFormation(){
    int pos,id,choix;
    printf("\t*|**************************************|*\n");
    printf("\t|* Entrez le Code Formation: ");
    scanf("%i",&id);
    pos=ChercherFormation(id);
    if(pos!=-1){
        do{
        system("color e0");
        printf("\t******************************************\n");
        printf("\t*°            Modifier Formation        °*\n");
        printf("\t******************************************\n");
        printf("\t* 1 |------> Modifier Type Formation     *\n");
        printf("\t* 2 |------> Modifier Sujet              *\n");
        printf("\t* 3 |------> Modifier Lieu               *\n");
        printf("\t* 4 |------> Modifier Niveau             *\n");
        printf("\t* 5 |------> Modifier Dur%ce             *\n",130);
        printf("\t* 6 |------> Modifier Num de Place       *\n");
        printf("\t* 7 |------> Modifier Date D%cbut        *\n",130);
        printf("\t* 8 |------> Modifier Date Fin           *\n");
        printf("\t* 0---> Quitter                          *\n");
        printf("\t******************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:printf("\t*| Entrez un nouveau Type Formation: ");
                   fflush(stdin);
                   gets(BDFormation[pos].typeFormation);
                   printf("\t*| Le Type Formation a chang%c avec succ%cs ^_^ *\n",130,130);break;
           case 2:printf("\t*| Entrez un nouveau 'Sujet' de Formation: ");
                   fflush(stdin);
                   gets(BDFormation[pos].sujet);
                   printf("\t*| Le Sujet a chang%c avec succ%cs ^_^ *\n",130,130);break;
           case 3:printf("\t*| Entrez un nouveau 'Lieu' de Formation: ");
                   fflush(stdin);
                   gets(BDFormation[pos].lieu);
                   printf("\t*| Le Lieu a chang%c avec succ%cs ^_^ *\n",130,130);break;
           case 4:printf("\t*| Entrez un nouveau 'Niveau' de Formation: ");
                   fflush(stdin);
                   scanf("%d",&BDFormation[pos].niveau);
                   printf("\t*| Le Niveau a chang%c avec succ%cs ^_^ *\n",130,130);break;
           case 5:printf("\t*| Entrez un nouveau  'Dur%ce' de Formation: ",130);
                   fflush(stdin);
                   scanf("%d",&BDFormation[pos].duree);
                   printf("\t*| Le Dur%ce a chang%c avec succ%cs ^_^ *\n",130,130,130);break;
           case 6:printf("\t*| Entrez un nouveau Num de Place de formation: ");
                   fflush(stdin);
                   scanf("%d",&BDFormation[pos].numPlace);
                   printf("\t*| Le Num de Place a chang%c avec succ%cs ^_^ *\n",130,130);break;
           case 7:printf("\t*| Entrez un nouveau Date JJ/AA/AAAA D%cbut: ",130);
                    scanf("%d%d%d",&BDFormation[pos].debut.j,&BDFormation[pos].debut.m,&BDFormation[pos].debut.a);
                  id=DateValide(BDFormation[pos].debut.j,BDFormation[pos].debut.m,BDFormation[pos].debut.a);
                  if(id == 0){
                        printf("\t*| La Date D%cbut a chang%c avec succ%cs ^_^ *\n",130,130,130);break;
                  }else if(id !=0){
                            break;
                  }
           case 8:printf("\t*| Entrez un nouveau Date JJ/AA/AAAA Fin: ");
                    scanf("%d%d%d",&BDFormation[pos].fin.j,&BDFormation[pos].fin.m,&BDFormation[pos].fin.a);
                  id=DateValide(BDFormation[pos].fin.j,BDFormation[pos].fin.m,BDFormation[pos].fin.a);
                  if(id == 0){
                        printf("\t*| La Date Fin a chang%c avec succ%cs ^_^ *\n",130,130);break;
                  }else if(id !=0){
                            break;
                  }
            case 0:SauvegarderFormation();GestionFormation();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
        system("pause");
        system("cls");
    }while(choix!=0);
    }else
        printf("\t\t\t* Code Formation * %d * est incorrect !!! *\n",id);
}
void ModifierFormateur(){
    int pos,id,choix;
    printf("\t*|**************************************|*\n");
    printf("\t|* Entrez le Code Formateur: ");
    scanf("%i",&id);
    pos=ChercherFormateur(id);
    if(pos!=-1){
        do{
        system("color e0");
        printf("\t******************************************\n");
        printf("\t*°          Modifier Formateur          °*\n");
        printf("\t******************************************\n");
        printf("\t* 1 |------> Modifier Nom                *\n");
        printf("\t* 2 |------> Modifier Specialite         *\n");
        printf("\t* 3 |------> Modifier Date Disponibl     *\n");
        printf("\t* 0---> Quitter et Sauvegarder           *\n");
        printf("\t******************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:printf("\t*| Entrez un nouveau Nom: ");
                   fflush(stdin);
                   gets(BDFormateur[pos].nom);
                   printf("\t*| Le nom a chang%c avec succ%cs ^_^ *\n",130,130);break;
            case 2:printf("\t*| Entrez un nouveau Pr%cnom: ",130);
                   fflush(stdin);
                   gets(BDClient[pos].prenom);
                   printf("\t*| Le pr%cnom a chang%c avec succ%cs ^_^ *\n",130,130,130);break;
            case 3:printf("\t*| Entrez un nouveau Specialite: ");
                   fflush(stdin);
                   gets(BDFormateur[pos].specialite);
                   printf("\t*| Le specialite a chang%c avec succ%cs ^_^ *\n",130,130);break;
            case 4: vaalid: printf("\t*| Entrez un nouveau Date JJ/MM/AAAA Disponibl: ");
                    scanf("%d%d%d",&BDFormateur[pos].dateDisponibl.j,&BDFormateur[pos].dateDisponibl.m,&BDFormateur[pos].dateDisponibl.a);
                   id=DateValide(BDFormateur[pos].dateDisponibl.j,BDFormateur[pos].dateDisponibl.m,BDFormateur[pos].dateDisponibl.a);
                    if(id == 0){
                          printf("\t*| Le Date Disponibl a chang%c avec succ%cs ^_^ *\n",130,130);break;
                        }else if (id !=0){
                            goto vaalid;
                        }
            case 0:SauvegarderFormateur();GestionFormateur();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
        system("pause");
        system("cls");
        }while(choix!=0);
    }else
        printf("\t\t\t* Code Formateur * %d * est incorrect !!! *\n",id);
}
void ModifierClient(){
    int pos,id,choix;
    printf("\t*|**************************************|*\n");
    printf("\t|* Entrez le Code Client: ");
    scanf("%i",&id);
    pos=ChercherClient(id);
    if(pos!=-1){
    do{
        system("color e0");
        printf("\t******************************************\n");
        printf("\t*°            Modifier Client           °*\n");
        printf("\t******************************************\n");
        printf("\t* 1 |------> Modifier Nom                *\n");
        printf("\t* 2 |------> Modifier Pr%cnom             *\n",130);
        printf("\t* 3 |------> Modifier Adresse            *\n");
        printf("\t* 4 |------> Modifier Type Client        *\n");
        printf("\t* 0---> Quitter et Sauvegarder           *\n");
        printf("\t******************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:printf("\t*| Entrez un nouveau Nom: ");
                   fflush(stdin);
                   gets(BDClient[pos].nom);
                   printf("\t*| Le nom a chang%c avec succ%cs ^_^ *\n",130,130);break;
            case 2:printf("\t*| Entrez un nouveau Pr%cnom: ",130);
                   fflush(stdin);
                   gets(BDClient[pos].prenom);
                   printf("\t*| Le pr%cnom a chang%c avec succ%cs ^_^ *\n",130,130,130);break;
            case 3:printf("\t*| Entrez un nouveau Adresse: ");
                   fflush(stdin);
                   gets(BDClient[pos].adresse);
                   printf("\t*| Le adresse a chang%c avec succ%cs ^_^ *\n",130,130);break;
            case 4:printf("\t|*************************************|\n");
                   printf("\t|*1 --> Soci%ct%c                      *|\n",130,130);
                   printf("\t|*2 --> Individu                     *|\n");
                   printf("\t|*************************************|\n");
                   printf("\t*| Entrez Votre Choix un nouveau Type Client: ");
                   scanf("%i",&id);
                        if(id == 1){
                           strcpy(BDClient[pos].typeClient,"Societe");
                           printf("\t*| Le Type Client a chang%c avec succ%cs ^_^ *\n",130,130);break;
                        }else if (id == 2){
                            strcpy(BDClient[pos].typeClient,"Individu");
                            printf("\t*| Le Type Client a chang%c avec succ%cs ^_^ *\n",130,130);break;
                        }else{
                            printf("\t * Choix Invalide de modification Type Client!!! * \n");break;
                        }
            case 0:SauvegarderClient();GestionClient();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
    }else
        printf("\t\t\t* Code Client * %d * est incorrect !!! *\n",id);
}
/********************************* 23/01/2020 ********************************/
void SupprimerFormation(){
    int pos,i,id;
    char test[5];
    printf("\t*|****************************************|*\n");
    printf("\t|* Entrez le Code Formation: ");
    scanf("%i",&id);
    pos=ChercherFormation(id);
    if(pos!=-1){
        printf("\t|* Voulez-vous vraiment supprimer un Formation?(Oui/No): ");
        fflush(stdin);
        gets(test);
        if(strcmp(strlwr(test),"oui")==0){
            for(i=pos;i<cptFormation-1;i++){
                BDFormation[i]=BDFormation[i+1];
            }
            cptFormation--;
            BDFormation=(Formation *)realloc(BDFormation,cptFormation*sizeof(Formation));
            SauvegarderFormation();
            printf("\t|* Formation Supprimer Avec Succ%cs ^_^ *\n",130);
        }else{
            printf("\t|* Formation No supprimer ^_^ *\n");
        }
    }else
        printf("\t\t\t* Code Formation * %d * est incorrect !!! *\n",id);
}
void SupprimerFormateur(){
    int pos,i,id;
    char test[5];
    printf("\t*|****************************************|*\n");
    printf("\t|* Entrez le Code formateur: ");
    scanf("%i",&id);
    pos=ChercherFormateur(id);
    if(pos!=-1){
        printf("\t|* Voulez-vous vraiment supprimer un Formateur'%s'?(Oui/No): ",BDFormateur[pos].nom);
        fflush(stdin);
        gets(test);
        if(strcmp(strlwr(test),"oui")==0){
            for(i=pos;i<cptFormateur-1;i++){
                BDFormateur[i]=BDFormateur[i+1];
            }
            cptFormateur--;
            BDFormateur=(Formateur *)realloc(BDFormateur,cptFormateur*sizeof(Formateur));
            SauvegarderFormateur();
            printf("\t|* Formateur Supprimer Avec Succ%cs ^_^ *\n",130);
        }else{
            printf("\t|* Formateur No supprimer ^_^ *\n");
        }
    }else
        printf("\t\t\t* Code Formateur * %d * est incorrect !!! *\n",id);
}
void SupprimerClient(){
    int pos,i,id;
    char test[5];
    printf("\t*|****************************************|*\n");
    printf("\t|* Entrez le Code Client: ");
    scanf("%i",&id);
    pos=ChercherClient(id);
    if(pos!=-1){
        printf("\t|* Voulez-vous vraiment supprimer un client'%s'?(Oui/No): ",BDClient[pos].nom);
        fflush(stdin);
        gets(test);
        if(strcmp(strlwr(test),"oui")==0){
            for(i=pos;i<cptClient-1;i++){
                BDClient[i]=BDClient[i+1];
            }
            cptClient--;
            BDClient=(Client *)realloc(BDClient,cptClient*sizeof(Client));
            SauvegarderClient();
            printf("\t|* Client Supprimer Avec Succ%cs ^-^ *\n",130);
        }else{
            printf("\t|* Client No supprimer ^_^ *\n");
        }
    }else
        printf("\t\t\t* Code Client * %d * est incorrect !!! *\n",id);
}
void SupprimerInscription(){
    int pos,i,id;
    char test[5];
    printf("\t*|****************************************|*\n");
    printf("\t|* Entrez le Num%cro Session: ",130);
    scanf("%i",&id);
    pos=ChercherInscription(id);
    if(pos!=-1){
        printf("\t|* Voulez-vous vraiment supprimer un Inscription?(Oui/No): ");
        fflush(stdin);
        gets(test);
        if(strcmp(strlwr(test),"oui")==0){
            for(i=pos;i<cptInscription-1;i++){
                BDInscription[i]=BDInscription[i+1];
            }
            cptInscription--;
            BDInscription=(Inscription *)realloc(BDInscription,cptInscription*sizeof(Inscription));
            SauvegarderInscription();
            printf("\t|* Inscription Supprimer Avec Succ%cs ^-^*\n",130);
        }else{
            printf("\t|* Inscription No supprimer ^_^ *\n");
        }
    }else
        printf("\t\t\t* Num%cro Session * %d * est incorrect !!! *\n",130,id);
}
void ListerFormation(){
    system("mode 160");
    system("cls");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t²| Code| Code Formateur| Type Formation | Sujet       | Lieu        | Niveau| Dur%ce| Num Place| Date D%cbut | Date Fin  |²\n",130,130);
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    for(int i=0;i<cptFormation;i++){
    printf("\t²| %-4d| %-14d| %-15s| %-12s| %-12s| %-6d| %-5d| %-9d| %-2d/%-2d/%-2d | %-2d/%-2d/%-2d|²\n",BDFormation[i].codeFormation,BDFormation[i].codeForm.codeFormateur,BDFormation[i].typeFormation,BDFormation[i].sujet,BDFormation[i].lieu,BDFormation[i].niveau,BDFormation[i].duree,BDFormation[i].numPlace,BDFormation[i].debut.j,BDFormation[i].debut.m,BDFormation[i].debut.a,BDFormation[i].fin.j,BDFormation[i].fin.m,BDFormation[i].fin.a);
    }
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
}
void ListerFormationClient(){
    system("mode 160");
    system("color e0");
    system("cls");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t²| Code| Code Formateur| Type Formation | Sujet       | Lieu        | Niveau| Dur%ce| Num Place| Date D%cbut | Date Fin  |²\n",130,130);
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    for(int i=0;i<cptFormation;i++){
        if(BDFormation[i].numPlace !=0)
            printf("\t²| %-4d| %-14d| %-15s| %-12s| %-12s| %-6d| %-5d| %-9d| %-2d/%-2d/%-2d | %-2d/%-2d/%-2d|²\n",BDFormation[i].codeFormation,BDFormation[i].codeForm.codeFormateur,BDFormation[i].typeFormation,BDFormation[i].sujet,BDFormation[i].lieu,BDFormation[i].niveau,BDFormation[i].duree,BDFormation[i].numPlace,BDFormation[i].debut.j,BDFormation[i].debut.m,BDFormation[i].debut.a,BDFormation[i].fin.j,BDFormation[i].fin.m,BDFormation[i].fin.a);
    }
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
}
void ListerInscription(){
    system("mode 120");
    system("cls");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t²| Session| Code Client| Code Formateur| Code Formation| Date Inscription| Prix      | Num Place |²\n");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    for(int i=0;i<cptInscription;i++){
    printf("\t²| %-7d| %-11d| %-14d| %-14d| %-2d/%-2d/%-2d      | %-7.2fDH | %-10d|²\n",BDInscription[i].numSession,BDInscription[i].codeCli.codeClient,BDInscription[i].codeForm.codeFormateur,BDInscription[i].codeFormation.codeFormation,BDInscription[i].dateInscription.j,BDInscription[i].dateInscription.m,BDInscription[i].dateInscription.a,BDInscription[i].prix,BDInscription[i].numplace);
    }
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
}
void ListerFormateur(){
    system("cls");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t²| Code| Nom         | Specialite     | Date Disponibl |²\n");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    for(int i=0;i<cptFormateur;i++){
    printf("\t²| %-4d| %-12s| %-15s| %-2d/%-2d/%-2d     |²\n",BDFormateur[i].codeFormateur,BDFormateur[i].nom,BDFormateur[i].specialite,BDFormateur[i].dateDisponibl.j,BDFormateur[i].dateDisponibl.m,BDFormateur[i].dateDisponibl.a);
    }
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
}
void ListerClient(){
    system("cls");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t²| Code| Nom        | Pr%cnom     | Adresse       | Type      |²\n",130);
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    for(int i=0;i<cptClient;i++){
    printf("\t²  %-4d| %-11s| %-11s| %-14s| %-10s ²\n",BDClient[i].codeClient,BDClient[i].nom,BDClient[i].prenom,BDClient[i].adresse,BDClient[i].typeClient);
    }
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
}
void ListerClientInscription(){
    system("cls");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t²| Code| Nom        | Pr%cnom     | Adresse       | Type      |²\n",130);
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    for(int i=0;i<cptClient;i++){
        if(BDClient[i].codeClient == BDInscription[i].codeCli.codeClient){
            printf("\t²  %-4d| %-11s| %-11s| %-14s| %-10s ²\n",BDClient[i].codeClient,BDClient[i].nom,BDClient[i].prenom,BDClient[i].adresse,BDClient[i].typeClient);
    }
    }
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
}
void ListerClientSociete(){
    system("cls");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t²| Code| Nom        | Pr%cnom     | Adresse       | Type      |²\n",130);
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    for(int i=0;i<cptClient;i++){
        if(strcmp(strlwr(BDClient[i].typeClient),"societe")==0){
            printf("\t²  %-4d| %-11s| %-11s| %-14s| %-10s ²\n",BDClient[i].codeClient,BDClient[i].nom,BDClient[i].prenom,BDClient[i].adresse,BDClient[i].typeClient);
    }
    }
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
}
void ListerClientIndividu(){
    system("cls");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t²| Code| Nom        | Pr%cnom     | Adresse       | Type      |²\n",130);
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    for(int i=0;i<cptClient;i++){
        if(strcmp(strlwr(BDClient[i].typeClient),"individu")==0){
            printf("\t²  %-4d| %-11s| %-11s| %-14s| %-10s ²\n",BDClient[i].codeClient,BDClient[i].nom,BDClient[i].prenom,BDClient[i].adresse,BDClient[i].typeClient);
    }
    }
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
}
void ListerAgent(){
    system("cls");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t²| Nom d'utilisateur    | Mot de passe       |²\n");
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
    for(int i=0;i<cptAdmin;i++){
    printf("\t²  %-20s | %-20s²\n",BDAdmin[i].nom,BDAdmin[i].mot_pas);
    }
    printf("\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
}
/********************************* 22/01/2020 ********************************/
void AnnulerInscription(){
    Inscription insr;
    int pos,i,j;
    printf("\t*|Voulez-vous retirer une inscription maintenant?(Oui/No): ");
    fflush(stdin);
    gets(insr.retirer);
    if(strcmp(strlwr(insr.retirer),"oui")== 0){
        printf("\t|* Entrez le Num%cro Session de la Inscription: ",130);
        scanf("%d",&insr.numSession);
        pos=ChercherInscription(insr.numSession);
        if(pos!=-1){
                rom:
            printf("\t*|Entrez la Date JJ/MM/AA Aujourd'hui: ");
            scanf("%d%d%d",&insr.dateInscription.j,&insr.dateInscription.m,&insr.dateInscription.a);
            pos=DateValide(insr.dateInscription.j,insr.dateInscription.m,insr.dateInscription.a);
            if(pos==0){
                    pos=ChercherInscription(insr.numSession);
                    if(BDInscription[pos].dateInscription.j < insr.dateInscription.j){
                        printf("\t*|D%csol%c,le lieu a %ct%c ferm%c,le montant ne peut pas etre retir%c !\n",130,130,130,130,130,130);
                    }else{
                        for(j=0;j<cptFormation;j++){
                            if(BDFormation[j].codeFormation == BDInscription[pos].codeFormation.codeFormation){
                                BDFormation[j].numPlace += BDInscription[pos].numplace;
                                SauvegarderFormation();
                            }
                        }
                        for(i=pos;i<cptInscription-1;i++){
                            BDInscription[i]=BDInscription[i+1];
                        }
                            cptInscription--;
                            BDInscription=(Inscription *)realloc(BDInscription,cptInscription*sizeof(Inscription));
                            SauvegarderInscription();
                            printf("\t*|Maintenant,place vide pour la formation,vous pouvez entrer un nouveau client\n");
                    }
            }else if(pos!=-1){
                goto rom;
            }
        }else{
        printf("\t\t\t* Num%cero Session * %d * est incorrect !!! *\n",130,insr.numSession);
       }
    }else{
        printf("\t*|Ok l'op%cration de traction a %ct%c annul%ce\n",130,130,130,130);
    }
}
void GestionAgent(){
    int choix;
    do{
        system("cls");
        system("color e0");
        printf("\t*|****************************************|*\n");
        printf("\t*==========================================*\n");
        printf("\t********************************************\n");
        printf("\t*°             GESTION AGENT              °*\n");
        printf("\t********************************************\n");
        printf("\t* 1 |--------> Ajouter AGENT               *\n");
        printf("\t* 2 |--------> Lister AGENT                *\n");
        printf("\t* 0---> Quitter                            *\n");
        printf("\t********************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:Sinscrire();break;
            case 2:ListerAgent();break;
            case 0:MenuAdmin();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
}
void GestionFormation(){
       int choix;
    do{
        system("cls");
        system("color e0");
        printf("\t*|****************************************|*\n");
        printf("\t*==========================================*\n");
        printf("\t********************************************\n");
        printf("\t*°           GESTION FORMATION            °*\n");
        printf("\t********************************************\n");
        printf("\t* 1 |--------> Ajouter Formation           *\n");
        printf("\t* 2 |--------> Lister Formation            *\n");
        printf("\t* 3 |--------> Modifier Formation          *\n");
        printf("\t* 4 |--------> Supprimer Formation         *\n");
        printf("\t* 5 |--------> les place Vide?             *\n");
        printf("\t* 0---> Quitter                            *\n");
        printf("\t********************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:AjouterFormation();break;
            case 2:ListerFormation();break;
            case 3:ModifierFormation();break;
            case 4:SupprimerFormation();break;
            case 5:ListerPlaceFerme();break;
            case 0:MenuAdmin();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
}
void GestionFormateur(){
    int choix;
    do{
        system("cls");
        system("color e0");
        printf("\t*|****************************************|*\n");
        printf("\t*==========================================*\n");
        printf("\t********************************************\n");
        printf("\t*°           GESTION FORMATEUR            °*\n");
        printf("\t********************************************\n");
        printf("\t* 1 |--------> Ajouter Formateur           *\n");
        printf("\t* 2 |--------> Lister Formateur            *\n");
        printf("\t* 3 |--------> Modifier Formateur          *\n");
        printf("\t* 4 |--------> Supprimer Formateur         *\n");
        printf("\t* 0---> Quitter                            *\n");
        printf("\t********************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:AjouterFormateur();break;
            case 2:ListerFormateur();break;
            case 3:ModifierFormateur();break;
            case 4:SupprimerFormateur();break;
            case 0:MenuAdmin();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
}
void GestionInscription(){
    int choix;
    do{
        system("cls");
        system("color e0");
        printf("\t*|****************************************|*\n");
        printf("\t*==========================================*\n");
        printf("\t********************************************\n");
        printf("\t*°          GESTION INSCRIPTION           °*\n");
        printf("\t********************************************\n");
        printf("\t* 1 |--------> Cr%cer Inscription          *\n",130);
        printf("\t* 2 |--------> Lister Inscription          *\n");
        printf("\t* 3 |--------> Supprimer Inscription       *\n");
        printf("\t* 4 |--------> Annuler Inscription         *\n");
        printf("\t* 5 |--------> Modifier Inscription        *\n");
        printf("\t* 0---> Quitter                            *\n");
        printf("\t********************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:CreerInscription();break;
            case 2:ListerInscription();break;
            case 3:SupprimerInscription();break;
            case 4:AnnulerInscription();break;
            case 5:ModifierInscription();break;
            case 0:MenuAdmin();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
}
void GestionClient(){
 int choix;
    do{
        system("cls");
        system("color e0");
        printf("\t*|******************************************|*\n");
        printf("\t*============================================*\n");
        printf("\t**********************************************\n");
        printf("\t*°              GESTION CLIENT              °*\n");
        printf("\t**********************************************\n");
        printf("\t* 1 |--------> Ajouter Client                *\n");
        printf("\t* 2 |--------> Lister les Client             *\n");
        printf("\t* 3 |--------> Afficher les Client Soci%ct%c *\n",130,130);
        printf("\t* 4 |--------> Afficher les Client Individu  *\n");
        printf("\t* 5 |--------> Les Client Inscription        *\n");
        printf("\t* 6 |--------> Modifier Client               *\n");
        printf("\t* 7 |--------> Supprimer Client              *\n");
        printf("\t* 0---> Quitter                              *\n");
        printf("\t**********************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:AjouterClient();break;
            case 2:ListerClient();break;
            case 3:ListerClientSociete();break;
            case 4:ListerClientIndividu();break;
            case 5:ListerClientInscription();break;
            case 6:ModifierClient();break;
            case 7:SupprimerClient();break;
            case 0:MenuAdmin();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
}
//****************************************//
void ListerPlaceFerme(){
    int i,j,som=0;
    for(i=0;i<cptFormation;i++){
        for(j=0;j<cptInscription;j++){
                if(BDFormation[i].codeFormation == BDInscription[j].codeFormation.codeFormation){
                    som=som+BDInscription[j].numplace;
            }
        }
        if(BDFormation[i].numPlace == som){
            printf("\t\t\t* la formation ' %d ' les Place ferm%ce *\n",BDFormation[i].codeFormation,130);
        }else{
            printf("\t\t* la Formation ' %d ' les place en cours *\n",BDFormation[i].codeFormation);
        }
    }
}

void CreerInscription(){
   Inscription cre;
   int pos;
        printf("\t********************* Nouveau Inscription *********************\n");
        printf("\t|* Entrez le Code Client: ");
        scanf("%d",&cre.codeCli.codeClient);
        pos=ChercherClient(cre.codeCli.codeClient);
        if(pos!=-1){
                rep:
            printf("\t|* Entrez le Code Formateur: ");
            scanf("%d",&cre.codeForm.codeFormateur);
            pos=ChercherFormateur(cre.codeForm.codeFormateur);
            if(pos!=-1){
                    printf("\t|* Entrez le Code Formation: ");
                    scanf("%d",&cre.codeFormation.codeFormation);
                    pos=ChercherFormation(cre.codeFormation.codeFormation);
                    if(pos!=-1){
                            rep_3:
                        printf("\t*|Entrez la Date JJ/MM/AA de Inscription: ");
                        scanf("%d%d%d",&cre.dateInscription.j,&cre.dateInscription.m,&cre.dateInscription.a);
                        pos=DateValide(cre.dateInscription.j,cre.dateInscription.m,cre.dateInscription.a);
                        if(pos==0){
                            printf("\t*|Entrez le Num%cro de personnes: ",130);
                            scanf("%d",&cre.numplace);
                            pos=CalculPlaceLibre(cre.numplace);
                                if(pos != 0){
                                    printf("\t*|Entrez le Prix de la Formation: ");
                                    scanf("%f",&cre.prix);
                                    cre.numSession= 1+cptInscription++; /*NumSassion Auto*/
                                    BDInscription=(Inscription *)realloc(BDInscription,cptInscription*sizeof(Inscription));
                                    BDInscription[cptInscription-1]=cre;
                                    CalculMontant(cre.codeCli.codeClient,cre.numSession);
                                    SauvegarderInscription();
                                    printf("\t\t\t * | Inscription Cr%cer Avec Succes Merci ^_$ | *\n",130);
                                }else{
                                    printf("\t* Désol%c, les places de formation ont %ct%c ferm%ces *\n",130,130,130,130);
                                }
                        }else if(pos!=0)
                        goto rep_3;
                    }else{
                        printf("\t\t\t* Code * %d * Formation est incorrect !!! *\n",cre.codeFormation.codeFormation);
              }
            }else{
               printf("\t\t\t* Code * %d * Formateur est incorrect !!! *\n",cre.codeForm.codeFormateur);
                    goto rep;
            }
        }else{
            printf("\t\t\t* Code * %d * Client est incorrect !!! *\n",cre.codeCli.codeClient);
        }
}
void CalculMontant(int code,int num){
    int i,j;
    for(i=0;i<cptClient;i++){
        if(BDClient[i].codeClient == code){
                if(strcmp(BDClient[i].typeClient,"Societe")==0){
                    for(j=0;j<cptInscription;j++){
                        if(BDInscription[j].numSession == num){
                            if(BDInscription[j].numplace>10){
                                BDInscription[j].prix=0.7*BDInscription[j].prix;
                                /* 0.7 = 30% dicount du prix */
                            }else if (BDInscription[j].numplace < 10){
                                BDInscription[j].prix=0.95*BDInscription[j].prix;
                                /* 0.95 = 5% dicount du prix */
                        }
                    }
                }
            }
        }
    }
}

/***************** Connectez-vous à la base de données ****************************************/
void ChargerClient(){
    pointfClient=fopen("DataBase//MesClient.bin","r");
    if(pointfClient!=NULL){
        fseek(pointfClient,0L,SEEK_END);
        cptClient=ftell(pointfClient)/sizeof(Client);
        fseek(pointfClient,0L,SEEK_SET);
        BDClient=(Client *)realloc(BDClient,cptClient*sizeof(Client));
        fread(BDClient,cptClient*sizeof(Client),1,pointfClient);
        fclose(pointfClient);
    }
}
void ChargerFormateur(){
    pointfFormateur=fopen("DataBase//MesFormateur.bin","r");
    if(pointfFormateur!=NULL){
        fseek(pointfFormateur,0L,SEEK_END);
        cptFormateur=ftell(pointfFormateur)/sizeof(Formateur);
        fseek(pointfFormateur,0L,SEEK_SET);
        BDFormateur=(Formateur *)realloc(BDFormateur,cptFormateur*sizeof(Formateur));
        fread(BDFormateur,cptFormateur*sizeof(Formateur),1,pointfFormateur);
        fclose(pointfFormateur);
    }
}
void ChargerFormation(){
    pointfFormation=fopen("DataBase//MesFormation.bin","r");
    if(pointfFormation!=NULL){
        fseek(pointfFormation,0L,SEEK_END);
        cptFormation=ftell(pointfFormation)/sizeof(Formation);
        fseek(pointfFormation,0L,SEEK_SET);
        BDFormation=(Formation *)realloc(BDFormation,cptFormation*sizeof(Formation));
        fread(BDFormation,cptFormation*sizeof(Formation),1,pointfFormation);
        fclose(pointfFormation);
    }
}
void ChargerInscription(){
    pointfInscription=fopen("DataBase//MesInscription.bin","r");
    if(pointfInscription!=NULL){
        fseek(pointfInscription,0L,SEEK_END);
        cptInscription=ftell(pointfInscription)/sizeof(Inscription);
        fseek(pointfInscription,0L,SEEK_SET);
        BDInscription=(Inscription *)realloc(BDInscription,cptInscription*sizeof(Inscription));
        fread(BDInscription,cptInscription*sizeof(Inscription),1,pointfInscription);
        fclose(pointfInscription);
    }
}
void SauvegarderClient(){
    pointfClient=fopen("DataBase//MesClient.bin","w");
    fwrite(BDClient,cptClient*sizeof(Client),1,pointfClient);
    fclose(pointfClient);
}
void SauvegarderFormateur(){
    pointfFormateur=fopen("DataBase//MesFormateur.bin","w");
    fwrite(BDFormateur,cptFormateur*sizeof(Formateur),1,pointfFormateur);
    fclose(pointfFormateur);
}
void SauvegarderFormation(){
    pointfFormation=fopen("DataBase//MesFormation.bin","w");
    fwrite(BDFormation,cptFormation*sizeof(Formation),1,pointfFormation);
    fclose(pointfFormation);
}
void SauvegarderInscription(){
    pointfInscription=fopen("DataBase//MesInscription.bin","w");
    fwrite(BDInscription,cptInscription*sizeof(Inscription),1,pointfInscription);
    fclose(pointfInscription);
}
/********************************* 21/01/2020 ********************************/
void AjouterClient(){
    Client Cli;
    int pos,m;
    printf("\t*|****************************************|*\n");
    printf("\t|* Entrez le Code Client: ");
    scanf("%i",&Cli.codeClient);
    pos = ChercherClient(Cli.codeClient);
    if(pos == -1){
        printf("\t|* Entrez le Nom de Client: ");
        fflush(stdin);
        gets(Cli.nom);
        printf("\t|* Entrez le Pr%cnom de Client: ",130);
        fflush(stdin);
        gets(Cli.prenom);
        printf("\t|* Entrez la Adresse: ");
        fflush(stdin);
        gets(Cli.adresse);
            ch:
        printf("\t|*************************************|\n");
        printf("\t|*1 --> Soci%ct%c                      *|\n",130,130);
        printf("\t|*2 --> Individu                     *|\n");
        printf("\t|*************************************|\n");
        printf("\t| Entrez Votre Choix: ");
        scanf("%i",&m);
        if(m == 1)
           strcpy(Cli.typeClient,"Societe");
        else if (m == 2)
            strcpy(Cli.typeClient,"Individu");
        else{
            printf("\t * Choix Invalide !!! * \n");
                goto ch;
        }
        cptClient++;
        BDClient=(Client *)realloc(BDClient,cptClient*sizeof(Client));
        BDClient[cptClient-1]=Cli;
        SauvegarderClient();
        printf("\t| Client Ajouter Avec Succ%cs ^_^\n",130);
    }else
        printf("\t\t\t* Code * %d * Client Existe D%cja !!! *\n",Cli.codeClient,130);
}
void AjouterFormation(){
    Formation ftion;
    int pos;
    printf("\t*|****************************************|*\n");
    printf("\t*|Entrez Le Code Formation: ");
    scanf("%d",&ftion.codeFormation);
    pos=ChercherFormation(ftion.codeFormation);
    if(pos==-1){
        printf("\t*|Entrez Code Formateur de Formation: ");
        fflush(stdin);
        scanf("%d",&ftion.codeForm.codeFormateur);
        pos=ChercherFormateur(ftion.codeForm.codeFormateur);
        if (pos != -1){
        printf("\t*|Entrez Le Type de la Formation: ");
        fflush(stdin);
        gets(ftion.typeFormation);
        printf("\t*|Entrez Sujet de la Formation: ");
        fflush(stdin);
        gets(ftion.sujet);
        printf("\t*|Entrez Niveau: ");
        scanf("%d",&ftion.niveau);
        printf("\t*|Entrez Dur%ce de la Formation: ",130);
        fflush(stdin);
        scanf("%d",&ftion.duree);
        printf("\t*|Entrez la lieu de la Formation: ");
        fflush(stdin);
        gets(ftion.lieu);
        printf("\t*|Entrez Nombre de Places: ");
        scanf("%d",&ftion.numPlace);
            va1:
        printf("\t*|Entrez la Date JJ/MM/AA D%cbut de la Formation: ",130);
        scanf("%d%d%d",&ftion.debut.j,&ftion.debut.m,&ftion.debut.a);
        pos=DateValide(ftion.debut.j,ftion.debut.m,ftion.debut.a);
        if(pos==0){
                va2:
            printf("\t*|Entrez la Date JJ/MM/AA Fin de la Formation: ");
            scanf("%d%d%d",&ftion.fin.j,&ftion.fin.m,&ftion.fin.a);
                pos=DateValide(ftion.fin.j,ftion.fin.m,ftion.fin.a);
                    if(pos==0){
                        cptFormation++;
                        BDFormation=(Formation *)realloc(BDFormation,cptFormation*sizeof(Formation));
                        BDFormation[cptFormation-1]=ftion;
                        SauvegarderFormation();
                    }else{
                        goto va2;
                    }
        }else if(pos!=0){
                goto va1;
        }
    }else{
        printf("\t\t\t* Code * %d * Formateur est incorrect !!! *\n",ftion.codeForm.codeFormateur);
}
    }else
        printf("\t\t\t* Code * %d * Formation Existe D%cja !!! *\n",ftion.codeFormation,130);

}
void AjouterFormateur(){
    Formateur ateur;
    int pos;
    printf("\t*|****************************************|*\n");
    printf("\t*|Entrez Le Code Formateur: ");
    scanf("%d",&ateur.codeFormateur);
    pos=ChercherFormateur(ateur.codeFormateur);
    if(pos==-1){
        printf("\t*| Entrez le Nom de Formateur: ");
        fflush(stdin);
        gets(ateur.nom);
        printf("\t*| Entrez Sp%ccialit%c de Formateur: ",130,130);
        fflush(stdin);
        gets(ateur.specialite);
            validi:
        printf("\t*| Entrez la Date de disponibilit%c JJ/MM/AAAA Valid: ",130);
        scanf("%d%d%d",&ateur.dateDisponibl.j,&ateur.dateDisponibl.m,&ateur.dateDisponibl.a);
        pos=DateValide(ateur.dateDisponibl.j,ateur.dateDisponibl.m,ateur.dateDisponibl.a);
        if(pos==0){
            cptFormateur++;
            BDFormateur=(Formateur *)realloc(BDFormateur,cptFormateur*sizeof(Formateur));
            BDFormateur[cptFormateur-1]=ateur;
            SauvegarderFormateur();
        }else if(pos!=0)
                goto validi;
    }else
        printf("\t\t\t* Code * %d * Formateur Existe D%cja !!! *\n",ateur.codeFormateur,130);
}
void MenuAgent(){
    int choix;
    ChargerClient();
    ChargerFormateur();
    ChargerFormation();
    ChargerInscription();
    do{
        system("cls");
        system("color f0");
        printf("\t*|****************************************|*\n");
        printf("\t*==========================================*\n");
        printf("\t********************************************\n");
        printf("\t*°            Bienvenue Agent             °*\n");
        printf("\t********************************************\n");
        printf("\t* 1 |--------> Ajouter Client              *\n");
        printf("\t* 2 |--------> Ajouter Formateur           *\n");
        printf("\t* 3 |--------> Ajouter Formation           *\n");
        printf("\t* 4 |--------> Cr%cer Inscription           *\n",130);
        printf("\t* 5 |--------> Annuler Inscription         *\n");
        printf("\t* 0---> Quitter                            *\n");
        printf("\t********************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:AjouterClient();break;
            case 2:AjouterFormateur();break;
            case 3:AjouterFormation();break;
            case 4:CreerInscription();break;
            case 5:AnnulerInscription();break;
            case 0:Quitter();exit(0);break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
}
void MenuAdmin(){
      int choix;
    ChargerClient();
    ChargerFormateur();
    ChargerFormation();
    ChargerInscription();
    system("mode 80");
    do{
        system("cls");
        system("color e0");
        printf("\t²*°²°°²°°²°°²°°²°°²°°²°°²°°²°°²°°²°°²°°²°°²°*²\n");
        printf("\t°********************************************²\n");
        printf("\t²*²     ^_^ Bienvenue Administrateur ^_^   ²*°\n");
        printf("\t°********************************************²\n");
        printf("\t²* 1 |--------> GESTION CLIENT              *°\n");
        printf("\t°* 2 |--------> GESTION FORMATEUR           *²\n");
        printf("\t²* 3 |--------> GESTION FORMATION           *°\n");
        printf("\t°* 4 |--------> GESTION AGENT               *²\n");
        printf("\t²* 5 |--------> GESTION INSCRIPTION         *°\n");
        printf("\t°* 0---> Quitter                            *²\n");
        printf("\t²********************************************°\n");
        printf("\t°* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:GestionClient();break;
            case 2:GestionFormateur();break;
            case 3:GestionFormation();break;
            case 4:GestionAgent();break;
            case 5:GestionInscription();break;
            case 0:Quitter();exit(0);break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
}
int ChercherClient(int id){
    int pos=-1,i;
    for(i=0;i<cptClient;i++){
        if(BDClient[i].codeClient == id){
            pos=i;break;
        }
    }
    return pos;
}
int ChercherFormateur(int id){
    int pos=-1,i;
    for(i=0;i<cptFormateur;i++){
        if(BDFormateur[i].codeFormateur == id){
            pos=i;break;
        }
    }
    return pos;
}
int ChercherFormation(int id){
    int pos=-1,i;
    for(i=0;i<cptFormation;i++){
        if(BDFormation[i].codeFormation == id){
            pos=i;break;
        }
    }
    return pos;
}
int ChercherInscription(int num){
    int pos=-1;
    for(int i=0;i<cptInscription;i++){
        if(BDInscription[i].numSession == num){
            pos=i;break;
        }
    }
    return pos;
}
/********************************* 20/01/2020 ********************************/
void MenuConnect(){
    int choix;
    do{
        system("cls");
        system("color 2e");
        printf("\t*------------------------------------------*\n");
        printf("\t********************************************\n");
        printf("\t*° \t\t Bienvenue\t\t  °*\n");
        printf("\t********************************************\n");
        printf("\t* 1---> Se Connecter                       *\n");
        printf("\t* 2---> S'inscrire                         *\n");
        printf("\t* 0---> Quitter                            *\n");
        printf("\t********************************************\n");
        printf("\t* Entrez Voter Choix: ");
        scanf("%i",&choix);
        switch(choix){
            case 1:SeConnecter();break;
            case 2:Sinscrire();break;
            case 0:Quitter();break;
            default:system("color 47");
                    printf("\t\t\t*--------------------*\n");
                    printf("\t\t\t*| Choix Invalide !!!*\n");
                    printf("\t\t\t*--------------------*\n");
        }
    system("pause");
    system("cls");
    }while(choix!=0);
}
void Sinscrire(){
    Login log;
    printf("\t|-----------------------------|\n");
    printf("\t|Entrez le nom d'utilisateur: ");
    fflush(stdin);
    gets(log.nom);
    printf("\t|------------------------|\n");
    printf("\t|Entrez le mot de passe: ");
    fflush(stdin);
    gets(log.mot_pas);
    cptAdmin++;
    BDAdmin=(Login *)realloc(BDAdmin,cptAdmin*sizeof(Login));
    BDAdmin[cptAdmin-1]=log;
    pointfAdmin=fopen("DataBase//DataAdmin//MesAdmin.bin","w");
        fwrite(BDAdmin,cptAdmin*sizeof(Login),1,pointfAdmin);
        fclose(pointfAdmin);
        printf("\t|Bienvenue, vous avez %ct%c ajout%c avec succ%cs\n",130,130,130,130);
}
void SeConnecter(){
    char logTest[20];
    char codeTest[15];
    pointfAdmin=fopen("DataBase//DataAdmin//MesAdmin.bin","r");
    if(pointfAdmin!=NULL){
    fseek(pointfAdmin,0L,SEEK_END);
    cptAdmin=ftell(pointfAdmin)/sizeof(Login);
    BDAdmin=(Login *)malloc(cptAdmin*sizeof(Login));
    fseek(pointfAdmin,0L,SEEK_SET);
    fread(BDAdmin,cptAdmin*sizeof(Login),1,pointfAdmin);
    fclose(pointfAdmin);
    }
        printf("\t|Entrez le nom d'utilisateur: ");
        fflush(stdin);
        gets(logTest);
        int pos=chercherlogin(logTest);
        if(pos!=-1){
        if(strcmp(BDAdmin[pos].nom,logTest)==0){
            printf("\t|Entrez le mot de passe: ");
            fflush(stdin);
            gets(logTest);
            if(strcmp(BDAdmin[pos].mot_pas,logTest)==0){
                    printf("\t|Utilisez-vous un code cl%c?(Oui/No): ",130);
                    fflush(stdin);
                    gets(codeTest);
                    if(strcmp(strlwr(codeTest),"oui")==0){
                        printf("\t|Entrez le code cl%c: ",130);
                        gets(codeTest);
                        if(strcmp(strupr(codeTest),codeCle)==0)
                            MenuAdmin();
                    }else{
                        MenuAgent();
                }
            }else{
                printf("\t\t\t * Le mot de passe est incorrect !!! *\n");
            }
       }
    }else{

            printf("\t\t\t * Le nom d'utilisateur est incorrect !!! *\n");
    }
}
int chercherlogin(char *nom){
    int pos=-1,i;
    for(i=0;i<cptAdmin;i++){
        if(strcmp(BDAdmin[i].nom,nom)== 0){
            pos=i;
        }
    }
    return pos;
}
int CalculPlaceLibre(int num){
    int ram;
    for(int i=0;i<cptFormation;i++){
        if(BDFormation[i].numPlace >= num){
            printf("\t\t*Les places de formation restantes sont %d *\n",BDFormation[i].numPlace-num);
            BDFormation[i].numPlace -=num;
            SauvegarderFormation();
            ram=1;
        }else{
            ram=0;
        }
    }
    return ram;
}
int DateValide(int j, int m ,int a){
    int jmax;
    int valid;
    if(a>2019){
        if(m>=1 && m<=12){
            switch(m){
                case 4:jmax=30;break;
                case 6:jmax=30;break;
                case 9:jmax=30;break;
                case 11:jmax=30;break;
                case 2:if(a%4==0){
                           jmax=29;break;
                        }else{
                           jmax=31;break;
                        }
                default: jmax=31;
            }
            if(j>=1 && j<= jmax){
                valid=0;
                printf("\t\t\t| * Merci Date Valide ^_^ * |\n");
            }else{
                valid=1;
                printf("\t\t\t| Jour Invalide !!! |\n");
        }
        }else{
            valid=2;
            printf("\t\t\t| Mois Invalide !!! |\n");
        }
    }else{
            valid=3;
            printf("\t\t\t| Ann%ce Invalide !!! |\n",130);
    }
    return valid;
}
void Quitter(){
    system("cls");
    system("color 0e");
    printf("\t*****************************************\n");
    printf("\t*\t         ²²²²²                  *\n");
    printf("\t*\t        ²     ²                 *\n");
    printf("\t*\t        ²²²²   ²                *\n");
    printf("\t*\t              ²                 *\n");
    printf("\t*\t             ²                  *\n");
    printf("\t*²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²*\n");
    printf("\t*²²²²²²²²²²²²²* Au Revoir *²²²²²²²²²²²²²*\n");
    printf("\t*²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²*\n");
    printf("\t*\t          ²                     *\n");
    printf("\t*\t         ²                      *\n");
    printf("\t*\t        ²                       *\n");
    printf("\t*\t        ²  ²²²²                 *\n");
    printf("\t*\t        ²     ²                 *\n");
    printf("\t*\t         ²²²²²                  *\n");
    printf("\t*****************************************\n");
}
void Loading(){
    int i,j;
    printf("\n - YOUSSEF APIWI |\n");
    system("color 0f");
    printf("\n\n\n\t\t\t\t Loading... ^_^ \n\n\n\n");
    for(i=1;i<=80;i++){
        for(j=20;j<=10000000;j++);
        printf("²");
        if(i == 40){
          system("color 0a");
        }
    }
}
/************************************** Fin Definition **************************************/
#endif // DEFINITION_H_INCLUDED 6 DAY
/*****//* YOUSSEF APIWI *//***************************************************************/
