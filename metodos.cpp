#include <iostream>
#include <stdio.h>
#include <conio.h>
#include<cstdlib>
#include<ctime>

//PROTOTIPOS DE FUNCIONES
void mostrarArreglo (int [], int);
void metodoSeleccion (int [], int, int&, int&);
void metodoBurbujeo (int [],int, int&, int&);
void metodoInsercion (int [],int, int&, int&);
void metodoShell(int [],int, int&, int&);
void metodoQuickSort (int [],int, int, int&, int&);
void darOrdenInverso (int[] ,int);

using namespace std;

int main (void)
{
	clock_t tiempoI;
	clock_t tiempoF;
	double tiempoTot;
	int cantIntercambios=0, cantComparaciones=0;
	int i,n;
	
    int opcion;
    int subOp;
  do
  {

    cout<<"1 - Mejor caso" << endl; //elementos ya ordenados de menor a mayor
	cout<<"2 - Caso medio" << endl; //aleatorio
	cout<<"3 - Peor caso" << endl;  //elementos ordenados de mayor a menor (inverso)
	cout<<"4 - Salir" << endl;
    cout<<"Indique el tipo de caso que desea cronometrar: ";
    cin>>opcion;
    switch(opcion)
    {
     case 1:
          {
          	do{
          		cout<<endl;
          		cout<<"1 - Metodo de seleccion"<<endl;
				cout<<"2 - Metodo de burbujeo"<<endl;
				cout<<"3 - Metodo de insercion"<<endl;
				cout<<"4 - Metodo Shell"<< endl;
				cout<<"5 - Metodo QuickSort"<<endl;
				cout<<"6 - Atras"<<endl;
				cout<< "Indique el metodo: ";
				cin>>subOp;
	          	switch(subOp)
	          	{
	          		case 1:
	          			{
						    srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%100000+1);
						    
						    metodoSeleccion(vec,n,cantIntercambios, cantComparaciones); // lo ordeno previamente para a continuaci�n probar el mejor caso
							cout<< "EL VECTOR HA SIDO GENERADO Y ORDENADO" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI= clock();
	          				metodoSeleccion(vec,n,cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
						}
	          			break;
	          		case 2:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
						    
						    metodoBurbujeo(vec,n,cantIntercambios, cantComparaciones); // lo ordeno previamente para a continuaci�n probar el mejor caso
							cout<< "EL VECTOR HA SIDO GENERADO Y ORDENADO" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI = clock();
	          				metodoBurbujeo(vec,n,cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
	          				
						}
	          			break;
	          		case 3:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
						    
						    metodoInsercion(vec,n,cantIntercambios, cantComparaciones); // lo ordeno previamente para a continuaci�n probar el mejor caso
							cout<< "EL VECTOR HA SIDO GENERADO Y ORDENADO" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI = clock();
	          				metodoInsercion(vec,n,cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
						}
	          			break;
	          		case 4:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
						    
						    metodoShell(vec,n,cantIntercambios, cantComparaciones); // lo ordeno previamente para a continuaci�n probar el mejor caso
							cout<< "EL VECTOR HA SIDO GENERADO Y ORDENADO" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI = clock();
	          				metodoShell(vec,n,cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
	          				
						}
	          			break;
	          		case 5:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
						
							
							metodoQuickSort(vec,0,n-1, cantIntercambios, cantComparaciones); // lo ordeno previamente para a continuaci�n probar el mejor caso
							cout<< "EL VECTOR HA SIDO GENERADO Y ORDENADO" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI = clock();
	          				metodoQuickSort(vec,0,n-1, cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
	          				
						}
	          			break;
				  }  		
			  }while (subOp!=6);
		  }
          break;
     case 2:
     	{
     		do{
          		cout<<endl;
          		cout<<"1 - Metodo de seleccion"<<endl;
				cout<<"2 - Metodo de burbujeo"<<endl;
				cout<<"3 - Metodo de insercion"<<endl;
				cout<<"4 - Metodo Shell"<< endl;
				cout<<"5 - Metodo QuickSort"<<endl;
				cout<<"6 - Atras"<<endl;
				cout<< "Indique el metodo: ";
				cin>>subOp;
	          	switch(subOp)
	          	{
	          		case 1:
	          			{
						    srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI = clock();
	          				metodoSeleccion(vec,n,cantIntercambios, cantComparaciones); //ahora tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
						}
	          			break;
	          		case 2:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
				
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						   	tiempoI = clock();
	          				metodoBurbujeo(vec,n,cantIntercambios, cantComparaciones); //ahora tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
	          				
						}
	          			break;
	          		case 3:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
		
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						   	tiempoI = clock();
	          				metodoInsercion(vec,n,cantIntercambios, cantComparaciones); //ahora tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
						}
	          			break;
	          		case 4:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
				
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI = clock();
	          				metodoShell(vec,n,cantIntercambios, cantComparaciones); //ahora tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
	          				
						}
	          			break;
	          		case 5:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
				
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE "<< endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
						    
						   	tiempoI = clock();
	          				metodoQuickSort(vec,0,n-1, cantIntercambios, cantComparaciones); //ahora tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
	          				
						}
	          			break;
				  }  		
			  }while (subOp!=6);
     		
     		
		}
          break;
     case 3:
          {
          		do{
          		cout<<endl;
          		cout<<"1 - Metodo de seleccion"<<endl;
				cout<<"2 - Metodo de burbujeo"<<endl;
				cout<<"3 - Metodo de insercion"<<endl;
				cout<<"4 - Metodo Shell"<< endl;
				cout<<"5 - Metodo QuickSort"<<endl;
				cout<<"6 - Atras"<<endl;
				cout<< "Indique el metodo: ";
				cin>>subOp;
	          	switch(subOp)
	          	{
	          		case 1:
	          			{
						    srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
						        
						  	//mostrarArreglo(vec,n);
						    //cout<<endl;
						    darOrdenInverso(vec,n);
						    //mostrarArreglo(vec,n);
						    //cout<<endl;
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE Y EL ORDEN DE SUS ELEMENTOS HA SIDO INVERTIDO TOTALMENTE" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						   	tiempoI = clock();
	          				metodoSeleccion(vec,n,cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
						}
	          			break;
	          		case 2:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
				
							darOrdenInverso(vec,n);
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE Y EL ORDEN DE SUS ELEMENTOS HA SIDO INVERTIDO TOTALMENTE" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI = clock();
	          				metodoBurbujeo(vec,n,cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
	          				
						}
	          			break;
	          		case 3:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
		
							darOrdenInverso(vec,n);
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE Y EL ORDEN DE SUS ELEMENTOS HA SIDO INVERTIDO TOTALMENTE" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI = clock();
	          				metodoInsercion(vec,n,cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
						}
	          			break;
	          		case 4:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
				
							darOrdenInverso(vec,n);
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE Y EL ORDEN DE SUS ELEMENTOS HA SIDO INVERTIDO TOTALMENTE" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
							
						    tiempoI = clock();
	          				metodoShell(vec,n,cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
	          				
						}
	          			break;
	          		case 5:
	          			{
	          				srand( time(NULL) );
						    cout<< "Ingrese la cantidad de elementos que contendra el array" << endl;
						    cin>> n;
						    int vec[n];
						    
						    for (i=0;i<n;i++) //lleno al array con n�meros entre 1 y 10, generados aleatoriamente
						        vec[i] = (rand()%10+1);
				
							darOrdenInverso(vec,n);
							cout<< "EL VECTOR HA SIDO GENERADO ALEATORIAMENTE Y EL ORDEN DE SUS ELEMENTOS HA SIDO INVERTIDO TOTALMENTE" << endl;
						    //mostrarArreglo(vec,n);
						    cout<<endl;
						    
						    cantIntercambios=0;
							cantComparaciones=0;
						    
						    tiempoI = clock();
	          				metodoQuickSort(vec,0,n-1, cantIntercambios, cantComparaciones); //ahora s� tomo el tiempo de cu�nto tarda
	          				tiempoF=clock();
    						tiempoTot = tiempoF-tiempoI;
    						//mostrarArreglo(vec,n);
    						cout<< "NUEVO TIEMPO DE ORDENAMIENTO: " << double(tiempoTot)/CLOCKS_PER_SEC << " SEGUNDOS " << endl;
    						cout<< "CANTIDAD DE INTERCAMBIOS: " << cantIntercambios << " CANTIDAD DE COMPARACIONES: " << cantComparaciones << endl;
	          				
						}
	          			break;
				  }  		
			  }while (subOp!=6);
          	
		  }
          break;
     case 4:
            cout<< "Hasta luego!" << endl;
          break;
     }
 }
  while(opcion != 4);
  
 
    
    getch();
    return(0);
}

void mostrarArreglo (int vec[], int n)
{
     int i;
        
    for (i=0; i<n;i++)
         cout<< "Posicion: " << i << " Valor: " << vec[i]<< endl;
}

 void metodoSeleccion(int vec[],int n, int &cantIntercambios, int &cantComparaciones)
 {

   int i,j, posmin, aux;
    
    for (i=0;i<n-1;i++)
    {
        posmin=i;
        
        for (j=i+1;j<n;j++)
        {
        	cantComparaciones++;
            if (vec[j] < vec[posmin])	
				posmin=j;
               
        } 
        
        if (posmin!=i)
        {
        			  cantIntercambios++;
                      aux= vec[posmin];
                      vec[posmin] = vec[i];
                      vec[i] = aux;
        }
    }
  
 }
 
 void darOrdenInverso (int vec[],int n)
 {
 	int i,j, posmin, aux;
    
    for (i=0;i<n-1;i++)
    {
        posmin=i;
        
        for (j=i+1;j<n;j++)
        {
            if (vec[j] > vec[posmin])
               posmin=j;
        } 
        
        if (posmin!=i)
        {
                      aux= vec[posmin];
                      vec[posmin] = vec[i];
                      vec[i] = aux;
        }
    }
 }
 	
 
 void metodoBurbujeo (int vec[], int n, int &cantIntercambios, int &cantComparaciones)
 {
      int i,aux, ult;
      bool cambio = true;
      ult=n-1;
    
    while (cambio)
    {
               cambio=false;
               
               for (i=0;i<ult;i++)
               {
               	   cantComparaciones++;
                   if (vec[i] > vec[i+1])
                   {
                   			  cantIntercambios++;
                              aux= vec[i];
                              vec[i] = vec[i+1];
                              vec[i+1]=aux;
                              cambio=true;
                   }
               }
               
               ult=ult-1;       
               
    }

 }
  
void metodoInsercion (int vec[], int n, int &cantIntercambios, int &cantComparaciones)
{
     int i,j,aux;
       
      for (i=1;i<n;i++)
      {
          aux=vec[i];
          j=i-1;
          
       
          while ((j>=0) && (aux<vec[j]))
          {
          		cantComparaciones++; //compara
          		cantIntercambios++;
                vec[j+1]=vec[j];
                j--;
          }
          
        cantComparaciones++; //compar� aunque no entr� al while
          vec[j+1]=aux;         
      }

}

void metodoShell (int vec[], int n,  int &cantIntercambios, int &cantComparaciones)
{
    int i, j, aux, salto;
    bool bandera;
    
    salto=n;
	
	 while (salto > 1) { //lo m�nimo del salto es 1; con ese valor las comparaciones son como en el m�todo de inserci�n
	 	
	 	salto=(salto)/2; //el intervalo entre comparaciones es la mitad
	 	bandera=true;
	 	 
	 	while (bandera)
	 	{
	 		bandera=false;
	 	 	i=0;
	 	 	while ((i+salto)<n)
			  {
			  	
			  	cantComparaciones++;
			  	if (vec[i]>vec[i+salto]) 	  //comparo contenidos de las posiciones
				  {
				  	
				  	cantIntercambios++;
				  	aux = vec[i]; 			//ordeno
				  	vec[i] = vec[i+salto];
				  	vec[i+salto]=aux;
				  	bandera=true;
				  }
				i++;
			  }
	 	} 	
	}
	

}


void metodoQuickSort (int vec[], int inicio, int final, int &cantIntercambios, int &cantComparaciones)
{
  int centro,i,j,aux;
  int pivote;
  centro=(inicio+final)/2;
  pivote=vec[centro];
  i=inicio;
  j=final;
  do
  {
  	
    while(vec[i]<pivote)
	{
		cantComparaciones=cantComparaciones+1;
		i++;	
	}
	cantComparaciones=cantComparaciones+1;
	
    while(vec[j]>pivote) 
    {
    	cantComparaciones=cantComparaciones+1;
    	j--;	
	}	
    cantComparaciones++;
    
	if(i<=j)
     {
      cantIntercambios=cantIntercambios+1;
      aux=vec[i];
      vec[i]=vec[j]; //intercambio vec[i] con vec[j]
      vec[j]=aux;
      i++;
      j--;
     }
   }
   while(i<=j);
   if(inicio<j)
   		metodoQuickSort(vec,inicio,j,cantIntercambios, cantComparaciones); //mismo proceso con sublista izquierda
   if(i<final)
   		metodoQuickSort(vec,i,final,cantIntercambios, cantComparaciones); //mismo proceso con sublista derecha
	
}

