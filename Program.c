/**
 * @file   Program.c
 * @brief  Chama todas as funções
 * 
 * @author Marco
 * @date   March 2023
 **/

#include "Cliente.h"
#include "Gestor.h"
#include "Transportes.h"


int main() {

	ListaClientes* Clientes = NULL; //Costumer linked list inicialization
	ListaGestores* Gestores = NULL; //Manager linked list inicialization
	ListaTransportes* transportes = NULL; //Transport linked list inicialization

	Cliente c1 = { "dwdw", "dwd", "dwdw", 69420 };
	Cliente c2 = { "dydfy", "breb", "sdf", 12345 };




	printf("\n %d", ReadTransportsFile(&transportes, TRANSPORTES_TEXT_DIR));

	printf("\n %d", SaveTransportsAsFile(transportes, TRANSPORTES_BIN_DIR));

	return (int) GetTransportes(transportes, 4)->transportes.id;