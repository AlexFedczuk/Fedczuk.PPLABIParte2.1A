#include "bibliotecaPPLab I.h"

char mostrarMenu()
{
    char opcionIngresada;
    char opcionTransformada;

    printf("\nA. ALTAS MASCOTAS");
    printf("\nB. MODIFICAR MASCOTAS");
    printf("\nC. BAJA MASCOTAS");
    printf("\nD. LISTAR MASCOTAS");
    printf("\nE. LISTAR TIPOS");
    printf("\nF. LISTAR COLORES");
    printf("\nG. LISTAR SERVICIOS");
    printf("\nH. ALTA TRABAJO");
    printf("\nI. LISTAR TRABAJOS");
    printf("\nElija una opcion: ");
    scanf("%c",&opcionIngresada);
    //printf("\nEl valor de opcion antes de toupper: %c",opcionIngresada);
    opcionTransformada=toupper(opcionIngresada);
    //printf("\nEl valor de opcion despues de toupper: %c",opcionTransformada);

    return opcionTransformada;
}

/**---*/

int pedirDia()
{
    int dia;

    printf("Ingrese el dia de la fecha: ");
    scanf("%d",&dia);

    return dia;
}

int pedirMes()
{
    int mes;

    printf("Ingrese el mes de la fecha: ");
    scanf("%d",&mes);

    return mes;
}

int pedirAnio()
{
    int anio;

    printf("Ingrese el anio de la fecha: ");
    scanf("%d",&anio);

    return anio;
}

void pedirFechaDeIngreso(int dia,int mes,int anio)
{
    int diaIngresado;
    int mesIngresado;
    int anioIngresado;

    diaIngresado=pedirDia();
    mesIngresado=pedirMes();
    anioIngresado=pedirAnio();

    dia=diaIngresado;
    mes=mesIngresado;
    anio=anioIngresado;
}

/**---*/

int calcularIdDeTipo(int id,int i)
{
    id=i+1000;

    return id;
}

void pedirDescripcionDeTipo(char string[]);
{
    char descripcionAux[20];

    printf("Ingrese una descripcion del tipo(max 20 caracteres): ");
    scanf("%s",&descripcionAux);

    strcpy(string,descripcionAux);
}

void pedirTipoIngreso(int id,int i,char string[])
{
    int idAux;

    idAux=validarIdTipo(id,i);
    pedirDescripcionDeTipo(string);

    id=idAux;
}

/**---*/

int calcularIdDeColor(int id,int i)
{
     id=i+5000;

    return id;
}

void pedirNombreColor(char string[])
{
    char descripcionAux[20];

    printf("Ingrese el nombre del color(max 20 caracteres): ");
    scanf("%s",&descripcionAux);

    strcpy(string,descripcionAux);
}

void pedirColorIngreso(int id,int i,char string[])
{
    int idAux;

    idAux=calcularIdDeColor(id,i);
    pedirNombreColor(string);

    id=idAux;
}

/**---*/

int calcularIdMascota(int id,int i)
{
    id=i;

    return id;
}

void pedirNombreMascota(char string[])
{
    char nombreAux[20];

    printf("Ingrese el nombre de la mascota(max 20 caracteres): ");
    scanf("%s",&nombreAux);

    strcpy(string,nombreAux);
}

int validarIdTipo(int id,int i)
{
    int idAux;

    idAux=calcularIdDeTipo(id,i);

    if(idAux<1000)
    {
        do
        {
            printf("Error! El id ingresado es invalido!");
            idAux=calcularIdDeTipo(id,i);
        }
        while(idAux<1000)
    }

    id=idAux;

    return id;
}

int validarIdColor(int id,int i)
{
    int idAux;

    idAux=calcularIdDeColor(id,i);

    if(idAux<5000)
    {
        do
        {
            printf("Error! El id ingresado es invalido!");
            idAux=calcularIdDeColor(id,i);
        }
        while(idAux<5000)
    }

    id=idAux;

    return id;
}

int pedirEdadMascota()
{
    int edad;

    printf("Ingrese la edad de la mascota: ");
    scanf("%d",&edad);

    return edad;
}

void pedirMascotaIngresos(int id,int i,char string[],int edad)
{
    id=validarIdMascota(id,i);
    pedirNombreMascota(string);
    edad=pedirEdadMascota();
}

/**---*/

int calcularIdServicio(int id,int i)
{
    id=i+20000;

    return id;
}

void pedirDescripcionServicio(char string[])
{
    char descripcionAux[25];

    printf("Ingrese una descripcion del servicio(max 25 caracteres): ");
    scanf("%s",&descripcionAux);

    strcpy(string,descripcionAux);
}

float pedirPrecio()
{
    float precio;

    printf("Ingrese el precio del servicio: ");
    scanf("%f",&precio);

    return precio;
}

void pedirServicioIngresos(int id,int i,char string[],float precio)
{
    id=validarIdServicio(id,i);
    pedirDescripcionServicio(string);
    precio=pedirPrecio();
}

/**---*/

int calcularIdDeTrabajo(int id,int i)
{
    id=i;

    return id;
}

int validarIdMascota(int id,int i)
{
    int idAux;

    idAux=calcularIdMascota(id,i);

    if(idAux<0)
    {
        do
        {
            idAux=calcularIdMascota(id,i);
        }
        while(idAux<0)
    }

    return idAux;
}

int validarIdServicio(int id,int i)
{
    int idAux;

    idAux=calcularIdServicio(id,i);

    if(idAux<20000)
    {
        do
        {
            idAux=calcularIdServicio(id,i);
        }
        while(idAux<20000)
    }

    return idAux;
}

void validarFecha(int dia,int mes,int anio)
{
    int diaAux;
    int mesAux;
    int anioAux;

    diaAux=pedirDia();
    mesAux=pedirMes();
    anioAux=pedirAnio();

    if(anioAux<0 || anioAux>2020)
    {
        do
        {
            printf("Error! Anio invalido!");
            anioAux=pedirAnio();
        }
        while(anioAux<0 || anioAux>2020);
    }

    if(mesAux<1 || mesAux>12)
    {
        do
        {
            printf("Error! El mes ingresado es invalido!");
            mesAux=pedirMes();
        }
        while(mesAux<1 || mesAux>12)
    }

    switch(mesAux)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(diaAux<1 || diaAux>31)
            {
                do
                {
                    printf("Error! el numero de dia ingresado es invalido con el mes conrrespondiente!");
                    diaAux=pedirDia();
                }
                while(diaAux<1 || diaAux>31);
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if(diaAux<1 || diaAux>30)
            {
                do
                {
                    printf("Error! el numero de dia ingresado es invalido con el mes conrrespondiente!");
                    diaAux=pedirDia();
                }
                while(diaAux<1 || diaAux>30);
            }
            break;

        case 2:
            if(diaAux<1 || diaAux>28)
            {
                do
                {
                    printf("Error! el numero de dia ingresado es invalido con el mes conrrespondiente!");
                    diaAux=pedirDia();

                }
                while(diaAux<1 || diaAux>28);
            }
            break;

        default:
            break;
    }
}

/**---*/


void hardcodearArrayTipos(eTipo list[],int tam)
{
    char descripcio[][20]={"Ave","Perro","Gato","Roedor","Pez"};

    for(int i=0;i<tam;i++)
    {
        strcpy(list[i].descripcion,descripcio[i]);
    }
}

void hardcodearArrayColores(eColor list[],int tam)
{
    char nombreColor[][20]={"Negro","Blanco","Gris","Rojo","Azul"};

    for(int i=0;i<tam;i++)
    {
        strcpy(list[i].nombreColor,nombreColor[i]);
    }
}

void hardcodearArrayServicios(eServicio list[],int tam)
{
    char descripcion[][20]={"Corte","Desparasitado","Castrado"};
    float precio[]={250,300,400};

    for(int i=0;i<tam;i++)
    {
        strcpy(list[i].descripcion,descripcion[i]);
        list[i].precio=precio[i];
    }
}

void hardcodearLosArray(eTipo listTipo[],eColor listColores[],eServicio listServicios[],int tam)
{
    hardcodearArrayTipos(listTipo,tam);
    hardcodearArrayColores(listColores,tam);
    hardcodearArrayServicios(listServicios,tam);
}

/**---*/

int pedirIdParaModificarMascota()
{
    int idAux;

    printf("\nIngrese el id de la mascota que quiera modificar: ");
    scanf("%d",&idAux);

    return idAux;
}

int encontrarPosicionDelId(eTipo list[],int tam,int id)
{
    int posicionId;

    for(int i=0;i<tam;i++)
    {
        if(id==list[i].id)
        {
            posicionId=i;
            break;
        }
    }

    return posicionId;
}

void modificarMascotaTipo(eTipo list[],int tam,int id,char string[])
{
    for(int i=0;i<tam;i+++)
    {
        if(list[i].id==id)
        {
            pedirDescripcionDeTipo(string);
            break;
        }

    }
}

int modificarMascotaEdad(eMascota list[],int tam,int id,int edad)
{
    int edadModificada;

    for(int i=0;i<tam;i+++)
    {
        if(list[i].id==id)
        {
            edadModificada=pedirEdadMascota();
            break;
        }

    }

    return edadModificada;
}

/**---*/

int pedirIdParaBajarMascota()
{
    int idAux;

    printf("Ingrese el id de la mascota que quiera dar de baja: ");
    scanf("%d",&idAux);

    return idAux;
}

int encontrarPosicionDelId(eMascota list[],int tam,int id)
{
    int posicionId;

    for(int i=0;i<tam;i++)
    {
        if(id==list[i].id)
        {
            posicionId=i;
            break;
        }
    }

    return posicionId;
}

void realizarUnaBajaLogica(eMascota list[],int tam,int id,int posicion)
{
    eMascota mascotaAux;

    for(int i=0;i<tam;i++)
    {
        if(list[posicion].id==id)
        {
            list[posicion].id=0;
            list[posicion].nombre[]={""};
            list[posicion].edad=0;
            break;
        }
    }
}//

/**---*/

void listarMascotas(eTipo list[],eMascota list[],int tam)
{
    printf("\n***** Lista de Mascotas *****");
    printf("\nTipo     Nombre");

    for(int i=0;i<tam;i++)
    {
        printf("\n%s     %s",list[i].descripcion,list[i].nombre);
    }
}

/**---*/

void listarSoloTipos(eTipo list[],int tam)
{
    printf("\n***** Lista de solo tipos *****");
    printf("\nTipos");

    for(int i=0;i<tam;i++)
    {
        printf("\n%s",list[i].descripcion);
    }
}

/**---*/

void listarSoloColores(eColor list[],int tam)
{
    printf("\n***** Lista de solo colores *****");
    printf("\nColores");

    for(int i=0;i<tam;i++)
    {
        printf("\n%s",list[i].nombreColor);
    }
}

/**---*/

void listarSoloServicios(eServicio list[],int tam)
{
    printf("\n***** Lista de solo servicios *****");
    printf("\Servicios");

    for(int i=0;i<tam;i++)
    {
        printf("\n%s: $%.2f",list[i].descripcion,list[i].precio);
    }
}

/**---*/

void listarSoloNombreMascotaYServicios(eMascota list[],eServicio list[],int tam);
{
    int opcionMascota;
    int opcionServicio;

    printf("\n**** Lista de mascotas y servicios *****");
    printf("\nMascotas");
    for(int i=0;i<TAM;i++)
    {
        printf("%d.%s",i,list[i].nombreMascota);
    }
    printf("\nElija una mascota: ");
    scanf("%d",&opcionMascota);

    printf("\nServicios");
    for(int i=0;i<TAM;i++)
    {
        printf("%d.%s",i,list[i].descripcion);
    }
    printf("\nElija un servicio: ");
    scanf("%d",&opcionServicio);
}
