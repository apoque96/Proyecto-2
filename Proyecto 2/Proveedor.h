#pragma once
#include "Lista.h"
#include "Medicamento.h"
ref class Proveedor {
private:
	System::String^ nombre;
	int Nit;
	System::String^ direcciónFiscal;
	System::String^ dirección;
	System::String^ teléfono;
	System::String^ correo;
	int id;
	double maxCompra;
	double maxVenta;
	Lista<Medicamento^> listaMedicamentos;
public:
	Proveedor(System::String^ nombre, int Nit, System::String^ direcciónFiscal,
		System::String^ dirección, System::String^ teléfono, System::String^ correo, int id);
	System::String^ getNombre();
	int getNit();
	System::String^ getDirecciónFiscal();
	System::String^ getDirección();
	System::String^ getTeléfono();
	System::String^ getCorreo();
	int getId();
	void agregarMedicamento(Medicamento^ medicamento);
	void filtrarPorProveedor(System::Windows::Forms::DataGridView^ dgv);
	void checkPrecios(double compra, double venta);
	double getMaxCompra();
	double getMaxVenta();
};