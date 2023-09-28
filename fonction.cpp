/*
Nom : Questionnaire Harry Potter
Par : STROBEL Kylian, le 26/09/2023
*/

//appel des librairies
#include "fonction.hpp"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;
//configuration de la fonction de l'indentité
void TesQui(string& nom) {
    cout << "Entrez votre nom : ";
    getline(std::cin, nom);
}
//configuration de la fonction des questions/réponses
void Questionnaire(int& Juste, int& Faux) 
{
    Juste = 0;
    Faux = 0;

        char Correcte1='a',Correcte2='c',Correcte3='b',Correcte4='a',Correcte5='c',Correcte6='a',Correcte7='a',Correcte8='b',Correcte9='a',Correcte10='c';
        char reponseUtilisateur;

        cout <<"Question numero 1 : Comment s'appelle le personnage principal ?" << endl; //Question 1 
             cout <<"a) Harry Potter" << endl;
             cout <<"b) Drago Malefoy" << endl;
             cout <<"c) Hermione Granger" << endl;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte1) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte1 << endl;
            Faux++;
        }
    
        cout <<"Question numero 2 : Comment s'appelle le chateau ou vont les eleves ?" << endl; //Question 2
             cout <<"a) Buckingam Palace" << endl;
             cout <<"b) Versaille" << endl;
             cout <<"c) Poudlard" << endl;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte2) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte2 << endl;
            Faux++;
        }

             cout <<"Question numero 3 : Qui est le mechant de l'histoire ?" << endl; //Question 3
             cout <<"a) Severus Rogue (le bad boy)" << endl;
             cout <<"b) Voldemort (alias le sans nez)" << endl;
             cout <<"c) Dobby (l'elfe de maison)" << endl;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte3) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte3 << endl;
            Faux++;
        }

         cout <<"Question numero 4 : Comment s'appelle la mere d'harry potter ?" << endl; //Question 4
             cout <<"a) Lily Evans" << endl;
             cout <<"b) Fleur Delacour" << endl;
             cout <<"c) Sibylle Trelawney" << endl;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte4) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte4 << endl;
            Faux++;
        }

         cout <<"Question numero 5 : Quelle sort est le plus dangeureux ?" << endl; //Question 5
             cout <<"a) Wingardium leviosa" << endl;
             cout <<"b) Lumos" << endl;
             cout <<"c) Avada kedavra" << endl;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte5) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte5 << endl;
            Faux++;
        }

            cout <<"Question numero 6 : Qui est l'acteur d'Harry Potter ?" << endl; //Question 6
             cout <<"a) Daniel Radcliffe" << endl;
             cout <<"b) Dwayne Johnson" << endl;
             cout <<"c) Leonardo DiCaprio" << endl;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte6) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte6 << endl;
            Faux++;
        }

            cout <<"Question numero 7 : Qui est le personnage le plus fort?" << endl; //Question 7
             cout <<"a) Albus dumbeldore" << endl;
             cout <<"b) Voldemort" << endl;
             cout <<"c) Sevrus Rogue" << endl;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte7) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte7 << endl;
            Faux++;
        }

             cout <<"Question numero 8 : Quel est l'univers d'Harry Potter" << endl; //Question 8
             cout <<"a) Marvel" << endl;
             cout <<"b) Il a sont propre univers" << endl;
             cout <<"c) Dc Comics" << endl;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte8) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte8 << endl;
            Faux++;
        }

             cout <<"Question numero 9 : Est ce que Harry Potter est mieux que Star Wars ? (oui)" << endl; //Question 9
             cout <<"a) OUI " << endl;
             cout <<"b) Non "<< endl ;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte9) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte9 << endl;
            Faux++;
        }

             cout <<"Question numero 10 : Quel est le vrai nom de voldemor ?" << endl; //Question 10
             cout <<"a) Maugrey Alastor " << endl;
             cout <<"b) Cedric Diggory "<< endl ;
             cout <<"c) Tom Jedusor "<< endl ;
        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == Correcte10) { //comparaison
            cout << "Bonne reponse !" << endl; //bonne réponse
            Juste++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << Correcte10 << endl;
            Faux++;
        }
    cout << "Le questionnaire est fini ! Vous pouvez voir le nombre de bonne et mauvaise reponse dans le fichier reponse.txt" << endl;
}
//test
