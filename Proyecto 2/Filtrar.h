#pragma once
#include "Sistema.h"
namespace CRUDFarmacia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Filtrar
	/// </summary>
	public ref class Filtrar : public System::Windows::Forms::Form
	{
	public:
		Filtrar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Filtrar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_inventario;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Caducidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column_Proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Compra;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Venta;
	private: System::Windows::Forms::DataGridView^ dgv_medicamento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column_Medicamento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ registro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoría;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Principios;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dosis;
	private: System::Windows::Forms::Button^ btn_proveedores;








	private: System::Windows::Forms::Button^ btn_filtrar_proveedores;
	private: System::Windows::Forms::RadioButton^ rB_receta;
	private: System::Windows::Forms::RadioButton^ rB_libre;
	private: System::Windows::Forms::Button^ btn_filtrar_categoría;
	private: System::Windows::Forms::Panel^ pl_proveedores;
	private: System::Windows::Forms::Button^ btn_cerrar;
	private: System::Windows::Forms::DataGridView^ dgv_proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fiscal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dirección;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Teléfono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_inventario = (gcnew System::Windows::Forms::DataGridView());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Caducidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column_Proveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Compra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Venta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_medicamento = (gcnew System::Windows::Forms::DataGridView());
			this->column_Medicamento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->registro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoría = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Principios = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dosis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_proveedores = (gcnew System::Windows::Forms::Button());
			this->btn_filtrar_proveedores = (gcnew System::Windows::Forms::Button());
			this->rB_receta = (gcnew System::Windows::Forms::RadioButton());
			this->rB_libre = (gcnew System::Windows::Forms::RadioButton());
			this->btn_filtrar_categoría = (gcnew System::Windows::Forms::Button());
			this->pl_proveedores = (gcnew System::Windows::Forms::Panel());
			this->btn_cerrar = (gcnew System::Windows::Forms::Button());
			this->dgv_proveedor = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fiscal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dirección = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Teléfono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_inventario))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_medicamento))->BeginInit();
			this->pl_proveedores->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_proveedor))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_inventario
			// 
			this->dgv_inventario->AllowUserToAddRows = false;
			this->dgv_inventario->AllowUserToDeleteRows = false;
			this->dgv_inventario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_inventario->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Stock,
					this->Caducidad, this->column_Proveedor, this->Compra, this->Venta
			});
			this->dgv_inventario->Location = System::Drawing::Point(12, 324);
			this->dgv_inventario->Name = L"dgv_inventario";
			this->dgv_inventario->ReadOnly = true;
			this->dgv_inventario->Size = System::Drawing::Size(956, 74);
			this->dgv_inventario->TabIndex = 3;
			// 
			// Stock
			// 
			this->Stock->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			this->Stock->ReadOnly = true;
			// 
			// Caducidad
			// 
			this->Caducidad->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Caducidad->HeaderText = L"Fecha de caducidad";
			this->Caducidad->Name = L"Caducidad";
			this->Caducidad->ReadOnly = true;
			// 
			// column_Proveedor
			// 
			this->column_Proveedor->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->column_Proveedor->HeaderText = L"Proveedor";
			this->column_Proveedor->Name = L"column_Proveedor";
			this->column_Proveedor->ReadOnly = true;
			// 
			// Compra
			// 
			this->Compra->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Compra->HeaderText = L"Precio de compra";
			this->Compra->Name = L"Compra";
			this->Compra->ReadOnly = true;
			// 
			// Venta
			// 
			this->Venta->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Venta->HeaderText = L"Precio de venta";
			this->Venta->Name = L"Venta";
			this->Venta->ReadOnly = true;
			// 
			// dgv_medicamento
			// 
			this->dgv_medicamento->AllowUserToAddRows = false;
			this->dgv_medicamento->AllowUserToDeleteRows = false;
			this->dgv_medicamento->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_medicamento->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->column_Medicamento,
					this->registro, this->Categoría, this->Principios, this->Dosis
			});
			this->dgv_medicamento->Location = System::Drawing::Point(12, 161);
			this->dgv_medicamento->Name = L"dgv_medicamento";
			this->dgv_medicamento->ReadOnly = true;
			this->dgv_medicamento->Size = System::Drawing::Size(956, 136);
			this->dgv_medicamento->TabIndex = 2;
			// 
			// column_Medicamento
			// 
			this->column_Medicamento->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->column_Medicamento->HeaderText = L"Medicamento";
			this->column_Medicamento->Name = L"column_Medicamento";
			this->column_Medicamento->ReadOnly = true;
			// 
			// registro
			// 
			this->registro->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->registro->HeaderText = L"Número de registro";
			this->registro->Name = L"registro";
			this->registro->ReadOnly = true;
			// 
			// Categoría
			// 
			this->Categoría->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Categoría->HeaderText = L"Categoría";
			this->Categoría->Name = L"Categoría";
			this->Categoría->ReadOnly = true;
			// 
			// Principios
			// 
			this->Principios->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Principios->HeaderText = L"Principios Activos";
			this->Principios->Name = L"Principios";
			this->Principios->ReadOnly = true;
			// 
			// Dosis
			// 
			this->Dosis->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Dosis->HeaderText = L"Dosis recomendada(mg)";
			this->Dosis->Name = L"Dosis";
			this->Dosis->ReadOnly = true;
			// 
			// btn_proveedores
			// 
			this->btn_proveedores->Location = System::Drawing::Point(21, 12);
			this->btn_proveedores->Name = L"btn_proveedores";
			this->btn_proveedores->Size = System::Drawing::Size(112, 23);
			this->btn_proveedores->TabIndex = 30;
			this->btn_proveedores->Text = L"mostrar proveedores";
			this->btn_proveedores->UseVisualStyleBackColor = true;
			this->btn_proveedores->Click += gcnew System::EventHandler(this, &Filtrar::btn_proveedores_Click);
			// 
			// btn_filtrar_proveedores
			// 
			this->btn_filtrar_proveedores->Location = System::Drawing::Point(151, 60);
			this->btn_filtrar_proveedores->Name = L"btn_filtrar_proveedores";
			this->btn_filtrar_proveedores->Size = System::Drawing::Size(120, 56);
			this->btn_filtrar_proveedores->TabIndex = 31;
			this->btn_filtrar_proveedores->Text = L"filtrar por proveedores";
			this->btn_filtrar_proveedores->UseVisualStyleBackColor = true;
			this->btn_filtrar_proveedores->Click += gcnew System::EventHandler(this, &Filtrar::btn_filtrar_proveedores_Click);
			// 
			// rB_receta
			// 
			this->rB_receta->AutoSize = true;
			this->rB_receta->Location = System::Drawing::Point(381, 80);
			this->rB_receta->Name = L"rB_receta";
			this->rB_receta->Size = System::Drawing::Size(86, 17);
			this->rB_receta->TabIndex = 34;
			this->rB_receta->TabStop = true;
			this->rB_receta->Text = L"Venta receta";
			this->rB_receta->UseVisualStyleBackColor = true;
			this->rB_receta->CheckedChanged += gcnew System::EventHandler(this, &Filtrar::rB_receta_CheckedChanged);
			// 
			// rB_libre
			// 
			this->rB_libre->AutoSize = true;
			this->rB_libre->Checked = true;
			this->rB_libre->Location = System::Drawing::Point(381, 49);
			this->rB_libre->Name = L"rB_libre";
			this->rB_libre->Size = System::Drawing::Size(75, 17);
			this->rB_libre->TabIndex = 33;
			this->rB_libre->TabStop = true;
			this->rB_libre->Text = L"Venta libre";
			this->rB_libre->UseVisualStyleBackColor = true;
			this->rB_libre->CheckedChanged += gcnew System::EventHandler(this, &Filtrar::rB_libre_CheckedChanged);
			// 
			// btn_filtrar_categoría
			// 
			this->btn_filtrar_categoría->Location = System::Drawing::Point(483, 49);
			this->btn_filtrar_categoría->Name = L"btn_filtrar_categoría";
			this->btn_filtrar_categoría->Size = System::Drawing::Size(120, 56);
			this->btn_filtrar_categoría->TabIndex = 35;
			this->btn_filtrar_categoría->Text = L"filtrar por categoría";
			this->btn_filtrar_categoría->UseVisualStyleBackColor = true;
			this->btn_filtrar_categoría->Click += gcnew System::EventHandler(this, &Filtrar::btn_filtrar_categoría_Click);
			// 
			// pl_proveedores
			// 
			this->pl_proveedores->Controls->Add(this->btn_cerrar);
			this->pl_proveedores->Controls->Add(this->dgv_proveedor);
			this->pl_proveedores->Location = System::Drawing::Point(273, 115);
			this->pl_proveedores->Name = L"pl_proveedores";
			this->pl_proveedores->Size = System::Drawing::Size(639, 285);
			this->pl_proveedores->TabIndex = 36;
			this->pl_proveedores->Visible = false;
			// 
			// btn_cerrar
			// 
			this->btn_cerrar->Location = System::Drawing::Point(3, 259);
			this->btn_cerrar->Name = L"btn_cerrar";
			this->btn_cerrar->Size = System::Drawing::Size(630, 23);
			this->btn_cerrar->TabIndex = 27;
			this->btn_cerrar->Text = L"cerrar";
			this->btn_cerrar->UseVisualStyleBackColor = true;
			this->btn_cerrar->Click += gcnew System::EventHandler(this, &Filtrar::btn_cerrar_Click);
			// 
			// dgv_proveedor
			// 
			this->dgv_proveedor->AllowUserToAddRows = false;
			this->dgv_proveedor->AllowUserToDeleteRows = false;
			this->dgv_proveedor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_proveedor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Nombre,
					this->Nit, this->Fiscal, this->Dirección, this->Teléfono, this->Correo, this->id
			});
			this->dgv_proveedor->Location = System::Drawing::Point(-2, -2);
			this->dgv_proveedor->Name = L"dgv_proveedor";
			this->dgv_proveedor->ReadOnly = true;
			this->dgv_proveedor->Size = System::Drawing::Size(642, 259);
			this->dgv_proveedor->TabIndex = 26;
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			// 
			// Nit
			// 
			this->Nit->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nit->HeaderText = L"Nit";
			this->Nit->Name = L"Nit";
			this->Nit->ReadOnly = true;
			// 
			// Fiscal
			// 
			this->Fiscal->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Fiscal->HeaderText = L"Dirección fiscal";
			this->Fiscal->Name = L"Fiscal";
			this->Fiscal->ReadOnly = true;
			// 
			// Dirección
			// 
			this->Dirección->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Dirección->HeaderText = L"Dirección";
			this->Dirección->Name = L"Dirección";
			this->Dirección->ReadOnly = true;
			// 
			// Teléfono
			// 
			this->Teléfono->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Teléfono->HeaderText = L"Teléfono";
			this->Teléfono->Name = L"Teléfono";
			this->Teléfono->ReadOnly = true;
			// 
			// Correo
			// 
			this->Correo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Correo->HeaderText = L"Correo";
			this->Correo->Name = L"Correo";
			this->Correo->ReadOnly = true;
			// 
			// id
			// 
			this->id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Visible = false;
			// 
			// Filtrar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 412);
			this->Controls->Add(this->pl_proveedores);
			this->Controls->Add(this->btn_filtrar_categoría);
			this->Controls->Add(this->rB_receta);
			this->Controls->Add(this->rB_libre);
			this->Controls->Add(this->btn_filtrar_proveedores);
			this->Controls->Add(this->btn_proveedores);
			this->Controls->Add(this->dgv_inventario);
			this->Controls->Add(this->dgv_medicamento);
			this->Name = L"Filtrar";
			this->Text = L"Filtrar";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_inventario))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_medicamento))->EndInit();
			this->pl_proveedores->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_proveedor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		//Contiene todos los metodos y las variables del sistema
		Sistema^ sistema;
		//Categoría seleccionada
		Clasificación categoría = ventaLibre;
		//Despliega los datos de los proveedores
		void desplegarProveedores();
		//Pasa el sistema del main al form "Filtrar"
		void pasarSistema(Sistema^ sistema);
		//Abre la lista de proveedores
	private: System::Void btn_proveedores_Click(System::Object^ sender, System::EventArgs^ e);
		   //Muestra solamente los medicamentos que distribuye el proveedor seleccionado
	private: System::Void btn_filtrar_proveedores_Click(System::Object^ sender, System::EventArgs^ e);
		   //Muestra solamente los medicamentos que tengan la categoría seleccionada
	private: System::Void btn_filtrar_categoría_Click(System::Object^ sender, System::EventArgs^ e);
		   //Selecciona la categoría
	private: System::Void rB_libre_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		   //Selecciona la categoría
	private: System::Void rB_receta_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		   //Cierra la lista de proveedores
	private: System::Void btn_cerrar_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
