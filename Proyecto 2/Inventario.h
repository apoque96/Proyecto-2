#pragma once
#include "Medicamento.h"
#include "Proveedor.h"

ref class Inventario : public Medicamento {
private:
	int cantidad;
	System::String^ caducidad;
	Proveedor^ proveedor;
	double precioCompra;
	double precioVenta;
public:
	Inventario(System::String^ nombre, Clasificación categoría,
		System::String^ principio, double dosis, int stock, Proveedor^ proveedor,
		System::String^ caducidad, double compra, double venta);
	void setCantidad(int cantidad);
	int getCantidad();
	void setCaducidad(System::String^ caducidad);
	System::String^ getCaducidad();
	void setProveedor(Proveedor^ proveedor);
	Proveedor^ getProveedor();
	void setCompra(double precioCompra);
	double getCompra();
	void setVenta(double precioVenta);
	double getVenta();
};