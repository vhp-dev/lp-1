GCC = g++
GCC_FLAGS = -I include -std=c++11
PROGRAM = banco

$(PROGRAM): cliente.o conta.o funcionario.o main.o
	@echo "===================== COMPILANDO ====================="
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) cliente.o conta.o funcionario.o main.o

cliente.o: src/cliente.cpp include/cliente.hpp
	$(GCC) $(GCC_FLAGS) -c src/cliente.cpp

conta.o: src/conta.cpp include/conta.hpp
	$(GCC) $(GCC_FLAGS) -c src/conta.cpp

funcionario.o: src/funcionario.cpp include/funcionario.hpp
	$(GCC) $(GCC_FLAGS) -c src/funcionario.cpp

main.o: src/main.cpp include/caixa.hpp include/gerente.hpp include/seguranca.hpp include/clientepj.hpp include/clientepf.hpp include/fila.hpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

clean:
	rm -f *.o
	rm $(PROGRAM)