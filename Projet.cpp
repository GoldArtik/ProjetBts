/*
Nom : Questionnaire Harry Potter
Par : STROBEL KYLIAN, le 26/09/2023 
*/

#include "fonction.hpp"  //appel des librairies
#include <fstream>
#include <iostream>
#include <string>

using namespace std;


int main() // Programme principal
{
    cout <<"Bienvenue sur mon test pour voir si vous etes un vrai fan d'Harry Potter"<<endl;
    cout <<"Appuyer sur entre pour commencer..."<<endl;
    getchar(); 
    string nom;
    TesQui(nom); //appel de la fonction pour l'identite

//initialisation à 0 des variables
    int Juste = 0;
    int Faux = 0;
    Questionnaire(Juste, Faux); //appel de la fonction du questionnaire
    
    if (Juste<= 5)
    {
        cout <<"Tu est pas un vrai fan d'Harry Potter"<<endl; 
    }
    else
    {
        cout <<"Tu est un vrai fan d'Harry Potter"<< endl; 
    }
    ofstream fichier("C:/Users/strob/Desktop/Projet/reponse.txt");
    if (fichier.is_open()) { //ouverture du fichier 
        fichier << "Nom : " << nom << endl; //écriture du fichier 
        fichier << "Bonnes reponses : " << Juste << endl;
        fichier << "Mauvaises reponses : " << Faux << endl;
        fichier.close(); //fermeture du fichier
    } else { //affichage du message d'erreur d'ouverture
        cout << "Impossible d'ouvrir le fichier pour enregistrer les resultats." << endl;
    }

    return 0;
}