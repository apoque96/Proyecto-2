#pragma once
#include "Inventario.h"
#include "Lista.h"
#include <string>

ref class Sistema {
private:
	Lista<Proveedor^> listaProveedores;
	Lista<Inventario^> listaInventario;

public:
	void registrar(System::String^ nombre, System::String^ principio, double dosis, int stock,
		Proveedor^ proveedor, System::String^ caducidad, double compra, double venta);
	void actualizar(Inventario^ inventario);
	void informe();
	int promedio();
	void inventarioMedicamento(Inventario^ inventario);
	double precioMásAlto(Proveedor^ proveedor);
	Medicamento^ buscarCriterio();
	void añadirProveedor(Proveedor^ proveedor);
	Proveedor^ getProveedor(int index);
	void añadirInventario(Inventario^ inventario);
	Inventario^ getInventario(int index);
	Inventario^ getInventario(System::String^ nombre);
	Inventario^ getInventarioPrincipio(System::String^ principio);
	void añadirMedicamentoAProveedor(Medicamento^ medicamento, int index);
	void generarInforme(std::string nombre);
	//El unico motivo por el cual esta función devuelve int, es porque con bool me salía un error raro
	int inventarioVacio();
	void filtrarPorProveedor(System::Windows::Forms::DataGridView^ dgv, int index);
	void filtrarPorCategoría(System::Windows::Forms::DataGridView^ dgv, int categoría);
	void sort();
	double Sistema::getPromC();
	double Sistema::getPromV();
};