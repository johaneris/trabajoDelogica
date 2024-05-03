Algoritmo ejerciciofor4
	definir cal como entero;
    Dimension cal[10];
    Definir suma Como Entero;
    Definir prom Como Real;
	definir i como entero;
    suma <- 0;
	
    Para i <- 0 Hasta 9 Con Paso 1 Hacer
        Escribir "Ingrese calificacion para estudiante ", i+1, ": ";
        Leer cal[i];
        suma <- suma + cal[i];
    FinPara
	
    prom <- suma / 10;
	
    Escribir "El promedio de las calificaciones es: ", prom;
	
FinAlgoritmo
