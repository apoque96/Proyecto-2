#pragma once
#include "Proveedor.h"

Proveedor::Proveedor(System::String^ nombre, int Nit, System::String^ direcciónFiscal,
	System::String^ dirección, System::String^ teléfono, System::String^ correo, int id) {
	this->nombre = nombre;
	this->Nit = Nit;
	this->direcciónFiscal = direcciónFiscal;
	this->dirección = dirección;
	this->teléfono = teléfono;
	this->correo = correo;
	this->id = id;
}

System::String^ Proveedor::getNombre() {
	return nombre;
}
int Proveedor::getNit() {
	return Nit;
}
System::String^ Proveedor::getDirecciónFiscal() {
	return direcciónFiscal;
}
System::String^ Proveedor::getDirección() {
	return dirección;
}
System::String^ Proveedor::getTeléfono() {
	return teléfono;
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