Proceso ejerciciofor5
	Dimension cal[8];
    Definir suma, aprobados, reprobados, i, cal Como Entero;
    Definir prom Como Real;
	
    suma <- 0;
    aprobados <- 0;
    reprobados <- 0;
	
    Para i <- 0 Hasta 7 Con Paso 1 Hacer
        Escribir "Ingrese la calificación para el estudiante ", i+1, ": ";
        Leer cal[i];
        suma <- suma + cal[i];
		
        Si cal[i] >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi
    FinPara
	
    prom <- suma / 8;
	
    Escribir "El promedio general del grupo es: ", prom;
    Escribir "La cantidad de estudiantes aprobados es: ", aprobados;
    Escribir "La cantidad de estudiantes reprobados es: ", reprobados;
FinProceso
