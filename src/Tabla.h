// Tabla.h: definición de la plantilla tabla:
// C con Clase: Marzo de 2002

#ifndef T_TABLA
#define T_TABLA

template <class T>
class Tabla {
public:
	Tabla(int nElem);
	~Tabla();
	T& operator[](int indice) { return pT[indice]; }
	int NElementos() const { return nElementos; }

private:
	T* pT;
	int nElementos;
};

// Definición:
template <class T>
Tabla<T>::Tabla(int nElem) : nElementos(nElem) {
	pT = new T[nElementos];
}

template <class T>
Tabla<T>::~Tabla() {
	delete[] pT;
}
#endif
