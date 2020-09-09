
Esse estudo esta sendo feito a partir do livro: LINGUAGEM C
Autor: Manzano, José Augusto N.G.,
Título: Estudo dirigido de lingagem c

Dados Internacionais de Catalogação na Publicação(CIP)

Manzano, José Augusto Navarro Garcia, 1965
    Estudo dirigido de Linguagem C / José Augusto N. G. Manzano. -- 15. ed. rev. -- São Paulo: Érica, 2012.

Bibiografia.
ISBN 978-85-7194-887-7

1.C(Linguagem de Programação): I. Título.

11-14433                            CDD-005.133

Segue algumas informações importantes:

códigos de formatação para a função scanf() que permite a entrada dos dados
	%c lê um caractere
	%d lê números inteiros decimais - Destaque
	%e lê numeros de notação científica
	%f lê números reais(ponto flutuante) - Destaque 
	%l lê números inteiros longo
	%o lê números octais 
	%s lê uma série de caracteres - Destaque
	%u lê um número decimal sem sinal
	%x lê um número exadecimal
	%[código] lê uma entrada formatada pelo código - Destaque

Usa-se o simbulo & indica o endereço de uma variavel o que permite retornar o conteudo da variavel que esta em uso.
 
códigos de formatação para a função printf() que permite a saida da informação
	%c escrita de um caractere
	%d escrita de números inteiros decimais - Destaque
	%e escrita de numeros de notação científica
	%f escrita de números reais(ponto flutuante) - Destaque 
	%g escrita de %e ou %f no formato mais curto
	%o escrita de números octais 
	%s escrita de uma série de caracteres - Destaque
	%u escrita de um número decimal sem sinal
	%x escrita de um número exadecimal
	%n[] escrita de caracteres que serão aceitos e estarão entre os colchetes, o n é o numero que delimita o tamanho mas é opcional.
	
O simbulo \n dentro do printf servirá para que haja uma quebra de linha após a compilação

códigos especiais de formatação de saida

\n gera linha a partir do local onde é inserido
\t gera espaço de tabulação a partir do ponto que é inserido 
\b faz retrocesso de espaço a partir do ponto que é inserido 
\" acrescenta a aspa a partir do ponto que é inserido
\\ acrescenta uma barra para apresentar a partir do ponto que é inserido
\f gera um salto de uma pagina(uso de uma impressora)
\0 gera um nulo

Como reduzir a apresentação dos numeros:
na inclusão do %f pode se colocar entre o % e o f um valor que deseja colocar antes da apresentação da virgula 
e depois acrescentar um ponto e colocar a outro valor para delimitar a apresentação da quantidade de numeros para se apresentar depois da virgula
Exemplo no código: %7.2f 
Como será apresentado: 0000.00 ou 1400.95 até 9999.00.



    