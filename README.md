# O que foi feito (o básico e as funcionalidades extras implementadas):

Foi feito um programa  em linguagem C para a Geração Aleatória de Terrenos, e nele você pode observar:
+        arranjos / matrizes;
+        Foi usado um Registro (struct) predefinido, no caso, o FILE;
+        Pode-se verificar a modularização em diferentes arquivos, ou seja, o uso de diferentes arquivos .c que compreendem: terreno1.c, alturaPontos.c e imprimir.c; e arquivos .h, no caso, alturaPontos.h e imprimir.h. Cada um destes arquivos apresenta funcionalidade específicas;
+        Pode-se verificar um padrão de indentação do código fonte e de nomenclatura das sub-rotinas e variáveis, e a adequação a este padrão;
+        Pode-se verificar uma documentação do código-fonte;

  Além disso, pode-se realizar a gravação de arquivos de imagem.

# O que não foi feito:

O programa não aceita os seguintes parâmetros de configuração em linha de comando:
-        -d <num>   define o deslocamento aleatório máximo a ser usado na geração da imagem.
-        -o <arq>   define o nome do arquivo de imagem a ser gerado.

# Como compilar o projeto:

Para compilar o usuário deve extrair todos os arquivos da pasta ProjetoVladimir. E para utiliza-los sugerimos o uso da IDE online Replit, pois suporta programas desenvolvidos em linguagem C.
Para gerar um arquivo executável digite no shell o seguinte comando:

-        gcc terreno1.c alturaPontos.c imprimir.c -o terrain -g -W

Por fim para obter a imagem execute o arquivo gerado com o seguinte comando:
-      ./terrain
