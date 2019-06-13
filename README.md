# GabrielJoshua_seminario_os_rr_2019
Repositório do seminário de SO

Para compilar, é necessário o pacote linux-headers da versão atual do seu kernel

Após instalado o pacote, compilar o módulo basta somente executar o Makefile:

	sudo make Makefile

Após compilado, irá surgir um arquivo com extensão .ko.
Esse arquivo deverá ser inserido no kernel com o comando:

	sudo insmod arquivo.ko

Para visualizar as mensagens do módulo utilize o comando:

	sudo dmesg

Ao terminar, remova o módulo com o comando:

	sudo rmmod arquivo.ko
