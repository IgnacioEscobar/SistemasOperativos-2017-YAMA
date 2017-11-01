/*
 * Tarea.c
 *
 *  Created on: 11/10/2017
 *      Author: utnso
 */

#include "Tarea.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

t_tarea *newTareaTransformacion()
{
	t_tarea *tarea = malloc(sizeof(t_tarea));
	tarea->tipo = TAREA_TRANSFORMACION;
	tarea->estado = TAREA_NO_EJECUTADA;

	return tarea;
}

t_tarea *newTareaReduccionLocal()
{
	t_tarea *tarea = malloc(sizeof(t_tarea));
	tarea->tipo = TAREA_REDUCCION_LOCAL;
	tarea->estado = TAREA_NO_EJECUTADA;

	return tarea;
}

t_tarea *newTareaReduccionGlobal()
{
	t_tarea *tarea = malloc(sizeof(t_tarea));
	tarea->tipo = TAREA_REDUCCION_GLOBAL;
	tarea->estado = TAREA_NO_EJECUTADA;

	return tarea;
}

t_tarea *newTareaAlmacenamiento(){
	t_tarea* tarea = malloc(sizeof(t_tarea));
	tarea->tipo = TAREA_ALMACENAMIENTO;
	tarea->estado = TAREA_NO_EJECUTADA;

	return tarea;
}

int tareaEsTransformacion(t_tarea *tarea)
{
	return tarea->tipo == TAREA_TRANSFORMACION;
}


int tareaEsReduccionLocal(t_tarea *tarea)
{
	return tarea->tipo == TAREA_REDUCCION_LOCAL;
}

int tareaEsReduccionGlobal(t_tarea *tarea)
{
	return tarea->tipo == TAREA_REDUCCION_GLOBAL;
}

int tareaEsAlmacenamiento(t_tarea *tarea)
{
	return tarea->tipo == TAREA_ALMACENAMIENTO;
}

void tareaMarcarEnEjecucion(t_tarea *tarea, char *nombreResultadoTemporal)
{
	tarea->estado = TAREA_EN_EJECUCION;
	tarea->nombreResultadoTemporal = strdup(nombreResultadoTemporal);
}

int tareaEstaEnEjecucion(t_tarea *tarea)
{
	return tarea->estado == TAREA_EN_EJECUCION;
}

int tareaEstaNoEjecutada(t_tarea *tarea)
{
	return tarea->estado == TAREA_NO_EJECUTADA;
}

void tareaMarcarNoEjecutada(t_tarea *tarea)
{
	tarea->estado = TAREA_NO_EJECUTADA;
}

void tareaMarcarFinalizada(t_tarea *tarea)
{
	tarea->estado = TAREA_FINALIZADA;
}

int tareaEstaFinalizada(t_tarea *tarea)
{
	return tarea->estado == TAREA_FINALIZADA;
}

char *tareaObtenerNombreResultadoTemporal(t_tarea *tarea)
{
	return tarea->nombreResultadoTemporal;
}

void tareaSetearNombreResultadoTemporal(t_tarea* tarea, char* nombreTemporal){
	tarea->nombreResultadoTemporal = nombreTemporal;
}
