#include <iostream>
#ifndef __Posicao__HPP
#define __Posicao__HPP

using namespace std;

class Posicao{
	private:
		int lin;
		int col;
		Posicao* prox;
	public:
		void setPosicao(int lin, int col);
		int Linha();
		int Coluna();
		void setProx(Posicao* p);
		Posicao* obterProx();
		
};

#endif
