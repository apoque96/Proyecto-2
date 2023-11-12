#pragma once
#include "Inventario.h"
Inventario::Inventario(System::String^ nombre, Clasificación categoría,
	System::String^ principio, double dosis, int stock, Proveedor^ proveedor,
	System::String^ caducidad, double compra, double venta) {
	this->nombre = nombre;
	this->categoría = categoría;
	this->dosisRecomendada_mg = dosis;
	this->principiosActivos = principio;
	this->numRegistro = idRegistro++;
	this->setCantidad(stock);
	this->setCaducidad(caducidad);
	this->setProveedor(proveedor);
	this->setCompra(compra);
	this->setVenta(venta);
}
void Inventario::setCantidad(int cantidad) {
	this->cantidad = cantidad;
}
int Inventario::getCantidad() {
	return cantidad;
}
void Inventario::setCaducidad(System::String^ caducidad) {
	this->caducidad = caducidad;
}
System::String^ Inventario::getCaducidad() {
	return caducidad;
}
void Inventario::setProveedor(Proveedor^ proveedor) {
	this->proveedor = proveedor;
}
Proveedor^ Inventario::getProveedor() {
	return proveedor;
}
void Inventario::setCompra(double precioCompra) {
	this->precioCompra = precioCompra;
}
double Inventario::getCompra() {
	return precioCompra;
}
void Inventario::setVenta(double precioVenta) {
	this->precioVenta = precioVenta;
}
double Inventario::getVenta() {
	return precioVenta;
}