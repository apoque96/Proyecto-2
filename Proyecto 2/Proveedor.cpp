#pragma once
#include "Proveedor.h"

Proveedor::Proveedor(System::String^ nombre, int Nit, System::String^ direcci�nFiscal,
	System::String^ direcci�n, System::String^ tel�fono, System::String^ correo, int id) {
	this->nombre = nombre;
	this->Nit = Nit;
	this->direcci�nFiscal = direcci�nFiscal;
	this->direcci�n = direcci�n;
	this->tel�fono = tel�fono;
	this->correo = correo;
	this->id = id;
}

System::String^ Proveedor::getNombre() {
	return nombre;
}
int Proveedor::getNit() {
	return Nit;
}
System::String^ Proveedor::getDirecci�nFiscal() {
	return direcci�nFiscal;
}
System::String^ Proveedor::getDirecci�n() {
	return direcci�n;
}
System::String^ Proveedor::getTel�fono() {
	return tel�fono;
}
System::String^ Proveedor::getCorreo() {
	return correo;
}
int Proveedor::getId() {
	return id;
}

void Proveedor::agregarMedicamento(Medicamento^ medicamento) {
	listaMedicamentos.Add(medicamento);
}

void Proveedor::filtrarPorProveedor(System::Windows::Forms::DataGridView^ dgv) {
	listaMedicamentos.filtrarPorProveedor(dgv);
}

void Proveedor::checkPrecios(double compra, double venta) {
	if (maxCompra < compra) maxCompra = compra;
	if (maxVenta < compra) maxVenta = venta;
}

double Proveedor::getMaxCompra() {
	return maxCompra;
}

double Proveedor::getMaxVenta() {
	return maxVenta;
}