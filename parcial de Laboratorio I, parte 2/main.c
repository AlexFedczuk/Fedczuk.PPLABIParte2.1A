#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define TAM 5

int main()
{
    char opcionElegida;
    int idParaModificar;
    int posicionIdParaModificar;
    int idParaBajarMascota;
    int posicionIdParaBajar;
    int opcionCaseB;

    eFecha fecha[TAM];
    eTipo tipo[TAM];
    eColor color[TAM];
    eMascota mascota[TAM];
    eServicio servicio[TAM];
    eTrabajo trabajo[TAM];

    hardcodearLosArray(tipo,color,servicio,TAM);

    do
    {
        opcionElegida=mostrarMenu();
        //printf("\nEl valor de la opcion ingresada, en main: %c\n",opcionElegida);

        switch(opcionElegida)
            {
                case 'A':
                    for(int i=0;i<TAM;i++)
                    {
                        validarFecha(fecha[i].dia,fecha[i].mes,fecha[i].anio);
                        pedirTipoIngreso(tipo[i].id,i,tipo[i].descripcion);
                        pedirColorIngreso(color[i].id,i,color[i].nombreColor);
                        pedirMascotaIngresos(mascota[i].id,i,mascota[i].nombre,mascota[i].edad);
                        pedirServicioIngresos(servicio[i].id,i,servicio[i].descripcion,servicio[i].precio);
                    }
                    break;

                case 'B':
                    printf("\n1. Modificar tipo");
                    printf("\n2. Modificar edad");
                    printf("Elija una opcion: ");
                    scanf("%d",&opcionCaseB);

                    idParaModificar=pedirIdParaModificarMascota();
                    posicionIdParaModificar=encontrarPosicionDelId(tipo,TAM,idParaModificar);

                    switch(opcionCaseB)
                    {
                        case 1:
                            modificarMascotaTipo(tipo,TAM,idParaModificar,tipo[posicionIdParaModificar].descripcion);
                            break;

                        case 2:
                            modificarMascotaEdad(eTipo list[],int tam,int id);
                            break;

                        default:
                            break;
                    }
                    break;
                    //

                case 'C':
                    idParaBajarMascota=pedirIdParaBajarMascota();
                    idParaBajarMascota=encontrarPosicionDelId();
                    //Realizar una baja logica...
                    break;

                case 'D':
                    listarMascotas(tipo,mascota,TAM);
                    break;

                case 'E':
                    listarSoloTipos(tipo,TAM);
                    break;

                case 'F':
                    listarSoloColores(color,TAM);
                    break;

                case 'G':
                    listarSoloServicios(servicio,TAM);
                    break;

                case 'H':

                    //
                    break;

                case 'I':
                    break;

                default:
                    break;
            }


        system("pause");
        system("cls");
    }
    while(opcionElegida=='A' || opcionElegida=='B' || opcionElegida=='C' || opcionElegida=='D' || opcionElegida=='E' || opcionElegida=='F' || opcionElegida=='G' || opcionElegida=='H' || opcionElegida=='I');

    return 0;
}
