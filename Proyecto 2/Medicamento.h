#pragma once

enum Clasificaci�n {
	ventaLibre = 0,
	ventaReceta = 1
};

ref class Medicamento {
protected:
	System::String^ nombre;
	int numRegistro;
	Clasificaci�n categor�a;
	double dosisRecomendada_mg;
	System::String^ principiosActivos;
	static int idRegistro;
public:
	Medicamento() {}
	Medicamento(System::String^ nombre, Clasificaci�n categor�a,
		double dosisRecomendadaMg, System::String^ principiosActivos);
	Medicamento(Medicamento% m);
	System::String^ getNombre();
	int getNumRegistro();
	Clasificaci�n getCategor�a();
	double getDosisMg();
	System::String^ getPrincipiosActivos();
	void setNombre(System::String^ nombre);
	void setNumRegistro(int NumRegistro);
	void setDosisMg(double dosisRecomendada_mg);
	void setPrincipiosActivos(System::String^ principiosActivos);
	void setCategor�a(Clasificaci�n categor�a);
};