#ifndef PROTOTYPE_H_INCLUDED
#define PROTOTYPE_H_INCLUDED
/**************************************** Prototype ****************************************/
/*
*****
** les prototypes
*****
*/
void AjouterClient();
void AjouterFormateur();
void AjouterFormation();
void CreerInscription();
/*******/
void ListerClient();
void ListerClientSociete();
void ListerClientIndividu();
void ListerClientInscription();
void ListerFormateur();
void ListerFormation();
void ListerFormationClient();
void ListerInscription();
/*******/
void ModifierClient();
void ModifierFormateur();
void ModifierFormation();
void ModifierInscription();
/*******/
void SupprimerClient();
void SupprimerFormateur();
void SupprimerFormation();
void SupprimerInscription();
void AnnulerInscription();
/*******/
int CalculPlaceLibre(int num);
void ListerPlaceFerme();
/*******/
int ChercherClient(int id);
int ChercherFormateur(int id);
int ChercherFormation(int id);
int ChercherInscription(int num);
int chercherlogin(char *nom);
/*******/
void CalculMontant(int code,int num);
/*******/
int DateValide(int j, int m,int a); /* Chercher Date Valide Oui ou NO */
/****** MENU*/
void MenuConnect();
void MenuAdmin(); /***** Menu Administrateur d' a Application*/
void MenuAgent();
//void MenuClient(); /* No menu Client */
void GestionClient();
void GestionFormateur();
void GestionFormation();
void GestionInscription();
void GestionAgent();
/*******/
void SeConnecter();
void Sinscrire();
/*******/
/*
** Enregistrer et Charger Data Base*
*/
void SauvegarderClient();
void SauvegarderFormateur();
void SauvegarderFormation();
void SauvegarderInscription();
/***** Charger **/
void ChargerClient();
void ChargerFormateur();
void ChargerFormation();
void ChargerInscription();
/*******/
void Loading();
void Quitter();
/************************************** Fin Prototype **************************************/
#endif // PROTOTYPE_H_INCLUDED
/*****//* YOUSSEF CHOUIREF *//***************************************************************/
