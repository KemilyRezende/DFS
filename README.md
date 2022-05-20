# DFS
  O algorítmo trata-se de um jogo onde o usuário insere um mapa (matriz) e o programa realiza uma busca em profundidade para encontrar o caminho do início ao final do mesmo.

# O que é DFS?
  Depth first search ou busca em profundidade é o algorítmo usado para fazer buscas em uma árvore ou grafo percorrendo o quanto possível os ramos de cada raiz antes de retroceder.

# Posicao.hpp e Posicao.cpp
  Definem a classe Posição, usada como parâmetro em diversas funções na classe Pilha, intuitivamente, esta classe armazena a posição (linha, coluna) da matriz inserida e é usada de forma a facilitar a busca.

# Pilha.hpp e Posicao.cpp
  Em primeiro lugar, vale destacar o que é uma pilha. Em programação a Pilha é uma estrutura que o usa o conceito de First-in Last-out, ou seja, o último item adiconado será o primeiro a ser removido como se estes estivessem empilhados.
  Estes arquivos definem a classe Pilha, usada para armazenar cada Posição caminhada no mapa.

# CaminhoDFS.hpp e CaminhoDFS.cpp
  Definem a classe de mesmo nome, utilizada como uma função para executar o programa, recebendo os parâmetros Linha e Coluna para a criação da matriz que armazenará o mapa fornecido pelo usuário.
  Após o mapa ser fornecido pelo usuário, se iniciará na posição 0x0 o cálculo da trajetória para chegar até a posição nXn, de acordo com a escolha do usuário. Por ser um algorítmo de busca em profundidade, o caminho prosseguirá na mesma coluna até encontrar um obstáculo. Ao encontrar uma posição onde não é possível prosseguir nem para a direita nem para baixo, utilizando a pilha, deletar-se-á a posição atual, fazendo com que o programa retorne a posição anterior, refazendo a trajetória a partir desta "percepção" de caminho bloqueado.
  
 # main.cpp
  A função principal deste algorítmo é bem simples, recebendo do usuário apenas os parâmetros para a criação da matriz chamando o contrutor da classe CaminhoDFS.
