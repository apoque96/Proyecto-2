#pragma once
#include "Inventario.h"
#include "Lista.h"
#include <string>

ref class Sistema {
private:
	Lista<Proveedor^> listaProveedores;
	Lista<Inventario^> listaInventario;

public:
	void a�adirProveedor(Proveedor^ proveedor);
	Proveedor^ getProveedor(int index);
	void a�adirInventario(Inventario^ inventario);
	Inventario^ getInventario(int index);
	Inventario^ getInventarioId(int id);
	Inventario^ getInventarioPrincipio(System::String^ principio);
	void a�adirMedicamentoAProveedor(Medicamento^ medicamento, int index);
	void generarInforme(std::string nombre);
	//El unico motivo por el cual esta funci�n devuelve int, es porque con bool me sal�a un error raro
	int inventarioVacio();
	void filtrarPorProveedor(System::Windows::Forms::DataGridView^ dgv, int index);
	void filtrarPorCategor�a(System::Windows::Forms::DataGridView^ dgv, int categor�a);
	void sort();
	double Sistema::getPromC();
	double Sistema::getPromV();
};