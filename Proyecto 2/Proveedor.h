#pragma once
#include "Lista.h"
#include "Medicamento.h"
ref class Proveedor {
private:
	System::String^ nombre;
	int Nit;
	System::String^ direcci�nFiscal;
	System::String^ direcci�n;
	System::String^ tel�fono;
	System::String^ correo;
	int id;
	double maxCompra;
	double maxVenta;
	Lista<Medicamento^> listaMedicamentos;
public:
	Proveedor(System::String^ nombre, int Nit, System::String^ direcci�nFiscal,
		System::String^ direcci�n, System::String^ tel�fono, System::String^ correo, int id);
	System::String^ getNombre();
	int getNit();
	System::String^ getDirecci�nFiscal();
	System::String^ getDirecci�n();
	System::String^ getTel�fono();
	System::String^ getCorreo();
	int getId();
	void agregarMedicamento(Medicamento^ medicamento);
	void filtrarPorProveedor(System::Windows::Forms::DataGridView^ dgv);
	void checkPrecios(double compra, double venta);
	double getMaxCompra();
	double getMaxVenta();
};