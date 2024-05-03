Proceso ejerciciofor7
	Definir num, i Como entero;
    Dimension vector1[10];
    Dimension vector2[10];
    Dimension vector3[10];
    Escribir "Ingrese la longitud de los vectores: ";
    Leer num;
	
    Escribir "Ingrese los valores de los vectores: ";
    Para i <- 0 Hasta num-1 Con Paso 1 Hacer
        Leer vector1[i];
    FinPara
	
    Para i <- 0 Hasta num-1 Con Paso 1 Hacer
        Leer vector2[i];
    FinPara
	
    Para i <- 0 Hasta num-1 Con Paso 1 Hacer
        vector3[i] <- vector1[i] + vector2[i];
    FinPara
	
    Escribir "El resultado de la suma de vectores es: ";
    Para i <- 0 Hasta num-1 Con Paso 1 Hacer
        Escribir vector3[i], " ";
    FinPara
    Escribir "";
FinProceso
