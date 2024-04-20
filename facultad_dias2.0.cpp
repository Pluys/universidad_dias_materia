#include <iostream>
#include <string>
using namespace std;

/*
un programa que me diga si tengo clase de programación según el día.
[X]declarar variable dia str e int
[X]preguntar dia
[X]trasladar el dia a dato numerico
[X]mostrar si tienen programacion con el god de agustin o no
*/

int main(){

string dia;
int diaprogramacion;


cout<< "¿Que dia es hoy?" <<endl;
preguntadia:
//Si no se ingresa un día válido, vuelve a preguntar con el "goto" (linea 47)
cin>> dia;

if(dia=="lunes")
{diaprogramacion=1;
}
else if (dia=="martes")
    {diaprogramacion=2;
    }
    else if (dia=="miercoles")
        {diaprogramacion=3;
        }
        else if (dia=="jueves")
            {diaprogramacion=4;
            }
            else if (dia=="viernes")
                {diaprogramacion=5;
                }
                else if (dia=="sabado")
                    {diaprogramacion=6;
                    }
                    else if (dia=="domingo")
                        {diaprogramacion=7;
                        }
                            else {cout<< "escribilo bien maquina\n";
                                goto preguntadia;
                                }


switch(diaprogramacion)
{case 1:
    cout<<"No es hoy wacho\n";
    break;
case 2:
    cout<<"No es hoy wacho\n";
    break;
case 3:
    cout<<"Es hoy Es hoy\n";
    break;
case 4:
    cout<<"Es hoy Es hoy\n";
    break;
case 5:
    cout<<"Es hoy Es hoy\n";
    break;
case 6:
    cout<<"Ni hay clases boludo\n";
    break;
case 7:
    cout<<"Ni hay clases boludo\n";
    break;
}


        return 0;
}
