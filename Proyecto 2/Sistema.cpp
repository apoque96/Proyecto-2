#pragma once
#include "Sistema.h"

void Sistema::añadirProveedor(Proveedor^ proveedor) {
	listaProveedores.Add(proveedor);
}

Proveedor^ Sistema::getProveedor(int index) {
	return listaProveedores.GetNodeVal(listaProveedores.Get(index));
}

void Sistema::añadirInventario(Inventario^ inventario) {
	listaInventario.Add(inventario);
}

Inventario^ Sistema::getInventario(int index) {
	return listaInventario.GetNodeVal(listaInventario.Get(index));
}

Inventario^ Sistema::getInventarioId(int id) {
	return listaInventario.GetNodeVal(listaInventario.GetMedicamento(id));
}

Inventario^ Sistema::getInventarioPrincipio(System::String^ principio) {
	return listaInventario.GetNodeVal(listaInventario.GetMedicamentoPrincipio(principio));
}

void Sistema::añadirMedicamentoAProveedor(Medicamento^ medicamento, int index) {
	listaProveedores.GetNodeVal(listaProveedores.Get(index))->agregarMedicamento(medicamento);
}

void Sistema::generarInforme(std::string nombre) {
	listaInventario.escribirCSV(nombre);
}

int Sistema::inventarioVacio() {
	return listaInventario.Size() == 0 ? true : false;
}

void Sistema::filtrarPorProveedor(System::Windows::Forms::DataGridView^ dgv, int index) {
	listaProveedores.GetNodeVal(listaProveedores.Get(index))->filtrarPorProveedor(dgv);
}

void Sistema::filtrarPorCategoría(System::Windows::Forms::DataGridView^ dgv, int categoría) {
	listaInventario.filtrarPorCategoría(dgv, categoría);
}

void Sistema::sort() {
	listaInventario.sort();
}

double Sistema::getPromC()
{
	return listaInventario.promC();
}

double Sistema::getPromV()
{
	return listaInventario.promV();
}