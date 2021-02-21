#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototype.h"
#include "Definition.h"
#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED
const char codeCle[15]="AGFADMIN1972";
/**************************************** Global ****************************************/
/*
******
** les Structeur
******
*/
typedef struct{
    int j,m,a;
}Date;
typedef struct{
    int codeClient;
    char nom[20];
    char prenom[20];
    char adresse[30];
    char typeClient[20];
}Client;
typedef struct{
    int codeFormateur;
    char nom[40];
    char specialite[30];
    Date dateDisponibl;
}Formateur;
typedef struct{
    int codeFormation;
    char typeFormation[50];
    Formateur codeForm;
    char sujet[100];
    char lieu[20];
    int niveau;
    int duree;
    int numPlace;
    Date debut;
    Date fin;
}Formation;
typedef struct{
    int numSession;
    int numplace;
    Client codeCli;
    Formateur codeForm;
    Formation codeFormation;
    Date dateInscription;
    float prix;
    char retirer[5];
}Inscription;
/**** Admin et Agent **/
typedef struct{
    char nom[20];
    char mot_pas[20];
}Login;
/*
******
** declaration des variables globales
******
*/
/**** Client **/
Client *BDClient;
int cptClient=0;
/**** Formateur **/
Formateur *BDFormateur;
int cptFormateur=0;
/**** formation **/
Formation *BDFormation;
int cptFormation=0;
/**** Inscription **/
Inscription *BDInscription;
int cptInscription;
/**** Admin et Agent **/
Login *BDAdmin;
int cptAdmin=0;
/********************************************/
/************************** FILE Data Base **/
FILE *pointfClient;
FILE *pointfFormateur;
FILE *pointfFormation;
FILE *pointfInscription;
/**** Admin et Agent **/
FILE *pointfAdmin;
/************************************** Fin Global **************************************/
#endif // GLOBAL_H_INCLUDED
/*****//* YOUSSEF CHOUIREF *//***************************************************************/
