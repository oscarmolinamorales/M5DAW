// Ejercicio1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

//Atributos del enemigo
int enemyHP = 100;
string enemyName = "Cunyado";
bool enemyIsAlive = true;
int enemyDamage = 0;

//Atributos del enemigo 2
int enemyHP2 = 150;
string enemyName2 = "Suegra";
bool enemyIsAlive2 = true;
int enemyDamage2 = 0;

//Atributos de héroe
string heroName;
int heroDamage;
int heroHP = 500;
bool heroIsAlive = true;

//Ataques especiales
int zapatilla = 25;
int charla = 50;
int tortazo = 90;


//contador
int contZapatilla = 20;
int contCharla = 10;
int contTortazo = 5;


int main() {

    ////////////////////// INTRODUCCION //////////////////////////

    srand(time(NULL));
    cout << "Un " << enemyName << " y una " << enemyName2 << " acaba de aparecer en tu Casa.\nEl Cunyado tiene " << enemyHP << " de ganas de fastidiarte la tarde.\nY tu querida Suegra... " << enemyHP2 << " de ganas de alegrarte la siesta.\n";
    cout << "\n";
    cout << "Como se llama el Inquilino afectado?\n";
    cin >> heroName;
    cout << "El nombre del inquilino es " << heroName << ".\nBueno... empezemos esta triste historia.\n";
    system("pause");

    ////////////////////// BUCLE //////////////////////////

    while ((enemyIsAlive == true || enemyIsAlive2 == true) && heroIsAlive == true) {
        system("cls"); // CODIGO PARA LIMPIAR PANTALLA



        cout << "Que familiar odias mas ?\n";
        if (enemyIsAlive == true && enemyIsAlive2 == true) cout << "1. " << enemyName << " 2. " << enemyName2 << "\n";
        else if (enemyIsAlive == true && enemyIsAlive2 == false) cout << "1. " << enemyName << "\n";
        else if (enemyIsAlive == false && enemyIsAlive2 == true) cout << "2. " << enemyName2 << "\n";


        int eleccion;

        cin >> eleccion;

        ////////////////////// LUCHAR CONTRA EL MALO 1//////////////////////////

        if (eleccion == 1)
        {
            system("cls");
            if (enemyIsAlive == false) {

                cout << "Pobre Cunyado, esta KAO.\n";
            }
            else {


                cout << "Has elejido al " << enemyName << ".\n";
                cout << "con que poder quieres atacar?\n";
                cout << "1.Zapatilla " << "2.Charla " << "3.Tortazo\n"; // ELEJIR ATAQUE

                int eleccionAtaque;
                cin >> eleccionAtaque;

                ////////////////////////////////////////////////////ATAQUE ZAPATILLA

                if (eleccionAtaque == 1 && contZapatilla != 0) {

                    cout << "Has elejido ataque " << "Zapatilla" << "\n";

                    enemyHP = enemyHP - zapatilla;
                    contZapatilla = contZapatilla - 1;

                    if (enemyHP <= 0) {
                        enemyIsAlive = false;
                        cout << "Has mandado a la cama al " << enemyName << "\n";


                    }
                    else {
                        cout << "Al Cunyado le queda " << enemyHP << " de vida.\n";

                    }
                    system("pause");

                }
                else if (contZapatilla == 0) {

                    cout << "Te has quedado sin Zapatillas.\nPIERDES TURNO\n";
                    system("pause");
                }



                ////////////////////////////////////////////////////////ATAQUE CHARLA

                if (eleccionAtaque == 2 && contCharla != 0) {

                    cout << "Has elejido ataque " << "Charla" << "\n";

                    enemyHP = enemyHP - charla;
                    contCharla = contCharla - 1;

                    if (enemyHP <= 0) {
                        enemyIsAlive = false;
                        cout << "Has mandado a la cama al " << enemyName << "\n";


                    }
                    else {
                        cout << "Al Cunyado le queda " << enemyHP << " de vida.\n";

                    }
                    system("pause");

                }
                else if (contCharla == 0) {

                    cout << "Te has quedado sin SALIVA.\nPIERDES TURNO\n";
                    system("pause");
                }




                //////////////////////////////////////////////////ATAQUE TORTAZO

                if (eleccionAtaque == 3 && contTortazo != 0) {

                    cout << "Has elejido ataque " << "Tortazo" << "\n";


                    enemyHP = enemyHP - tortazo;
                    contTortazo = contTortazo - 1;

                    cout << "Te queda " << contTortazo << " para usar.\n";

                    if (enemyHP <= 0) {
                        enemyIsAlive = false;
                        cout << "Has mandado a la cama al " << enemyName << "\n";


                    }
                    else {
                        cout << "Al Cunyado le queda " << enemyHP << " de vida.\n";

                    }
                    system("pause");

                }
                else if (contTortazo == 0) {

                    cout << "Te has quedado sin MANOS.\nPIERDES TURNO\n";
                    system("pause");
                }

            }
        }

        ////////////////////// LUCHAR CONTRA EL MALO 2//////////////////////////

        if (eleccion == 2)
        {

            system("cls");
            if (enemyIsAlive2 == false) {
                cout << "Se nota que no la aguantas.\n";
            }
            else {


                cout << "Has elejido a la " << enemyName2 << ".\n";
                cout << "con que poder quieres atacarla?\n";
                cout << "1.Zapatilla " << "2.Charla " << "3.Tortazo\n";

                int eleccionAtaque2;
                cin >> eleccionAtaque2;




                ////////////////////////////////ATAQUE ZAPATILLA ENEMIGO 2

                if (eleccionAtaque2 == 1 && contZapatilla != 0) {

                    cout << "Has elejido ataque " << "Zapatilla" << "\n";

                    enemyHP2 = enemyHP2 - zapatilla;
                    contZapatilla = contZapatilla - 1;

                    if (enemyHP2 <= 0) {
                        enemyIsAlive2 = false;
                        cout << "Has mandado al sillon a la " << enemyName2 << "\n";


                    }
                    else {
                        cout << "A la Suegra le quedan " << enemyHP2 << " de vida.\n";

                    }
                    system("pause");

                }
                else if (contZapatilla == 0) {

                    cout << "Te has quedado sin ZAPATILLAS.\nPIERDES TURNO\n";
                    system("pause");
                }

                ////////////////////////////ATAQUE CHARLA ENEMIGO 2

                if (eleccionAtaque2 == 2 && contCharla != 0) {

                    cout << "Has elejido ataque " << "Charla" << "\n";

                    enemyHP2 = enemyHP2 - charla;
                    contCharla = contCharla - 1;

                    if (enemyHP2 <= 0) {
                        enemyIsAlive2 = false;
                        cout << "Has mandado al sillon a la " << enemyName2 << "\n";


                    }
                    else {
                        cout << "A la Suegra le quedan " << enemyHP2 << " de vida.\n";

                    }
                    system("pause");

                }
                else if (contCharla == 0) {

                    cout << "Te has quedado sin SALIVA.\nPIERDES TURNO\n";
                    system("pause");
                }


                ////////////////////////////////ATAQUE TORTAZO ENEMIGO 2

                if (eleccionAtaque2 == 3 && contTortazo != 0) {

                    cout << "Has elejido ataque " << "Tortazo" << "\n";

                    enemyHP2 = enemyHP2 - tortazo;
                    contTortazo = contTortazo - 1;

                    if (enemyHP2 <= 0) {
                        enemyIsAlive2 = false;
                        cout << "Has mandado al sillon a la " << enemyName2 << "\n";


                    }
                    else {
                        cout << "A la Suegra le quedan " << enemyHP2 << " de vida.\n";

                    }
                    system("pause");

                }
                else if (contTortazo == 0) {

                    cout << "Te has quedado sin MANOS.\nPIERDES TURNO\n";
                    system("pause");
                }

            }

        }






        ////////////////////////////////////////////ATAQUE CON DOS ENEMIGOS VIVOS

        if (enemyIsAlive == true && enemyIsAlive2 == true) {

            enemyDamage = 1 + (rand() % 100);
            heroHP = heroHP - enemyDamage;




            if (heroHP <= 0) {
                heroHP = 0;
                heroIsAlive = false;
                cout << "El " << enemyName << " Te ha mandado a dormir.\n";
            }
            else {
                cout << "El " << enemyName << " Te ha hecho un ataque de " << enemyDamage << " puntos de charla politica.\nTe quedan " << heroHP << " de paciencia.\n";
                system("pause");
            }


            enemyDamage2 = 1 + (rand() % 100);
            heroHP = heroHP - enemyDamage2;



            if (heroHP <= 0) {
                heroHP = 0;
                heroIsAlive = false;
                cout << "La " << enemyName2 << " Te ha mandado a por el pan.\n";
            }
            else {
                cout << "La " << enemyName2 << " te ha hecho un ataque de " << enemyDamage2 << " puntos sobre El diario de Ana Rosa.\nTe quedan " << heroHP << " de paciencia.\n";
                system("pause");
            }






            ////////////////////////////////ATAQUE CON ENEMIGO UNO VIVO

        }
        else if (enemyIsAlive && enemyHP2 >= 0) {
            enemyDamage = 1 + (rand() % 100);
            heroHP = heroHP - enemyDamage;


            if (heroHP <= 0) {
                heroHP = 0;
                heroIsAlive = false;
                cout << "El " << enemyName << " te ha mandado a por el pan.\n";
            }
            else {
                cout << "El " << enemyName << " te ha hecho un ataque de " << enemyDamage << " puntos de charla sobre Castores.\nTe quedan " << heroHP << " de paciencia.\n";
                system("pause");
            }





            ///////////////////////////////////// ATAQUE CON ENEMIGO DOS VIVO

        }
        else if (enemyIsAlive == false && enemyIsAlive2) {
            enemyDamage2 = 1 + (rand() % 100);
            heroHP = heroHP - enemyDamage2;



            if (heroHP <= 0) {
                heroHP = 0;
                heroIsAlive = false;
                cout << "La " << enemyName2 << " Te ha mandado a por el pan.\n";
            }
            else {
                cout << "La " << enemyName2 << " te ha hecho un ataque de " << enemyDamage2 << " puntos de tertulia sobre La Pantoja.\nTe quedan " << heroHP << " de paciencia.\n";
                system("pause");
            }
        }
    }




    /////////// DOS ENEMIGOS MUERTOS
    if (enemyIsAlive == false && enemyIsAlive2 == false) {
        system("cls");
        system("color a");


        cout << "HAS GANADO!!!!\nSe ha sufrido Javi...";
        system("pause");

    }
}
