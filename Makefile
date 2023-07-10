# Diretórios
BIN_DIR := bin
OBJ_DIR := obj
SRC_DIR := src

# Encontrar todos os diretórios no SRC_DIR
DIRECTORIES := $(shell find $(SRC_DIR) -type d)

# Gerar nomes de diretório de objeto
OBJ_DIRECTORIES := $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(DIRECTORIES))

# Gerar nomes de arquivo de objeto
SRC_FILES := $(wildcard $(addsuffix /*.c,$(DIRECTORIES)))
OBJ_FILES := $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(patsubst %.c,%.o,$(SRC_FILES)))

# Nome do arquivo binário
BIN_FILE := $(BIN_DIR)/chess

# Flags do compilador
CFLAGS := -Wall -Wextra -g

# Bibliotecas
LIBS := -lm

# Regra principal
.PHONY: all
all: run

# Regra para executar o programa
.PHONY: run
run: create_dirs $(BIN_FILE)
	@./$(BIN_FILE)

# Regra para compilar o programa
$(BIN_FILE): $(OBJ_FILES)
	@$(CC) $(CFLAGS) $(OBJ_FILES) -o $(BIN_FILE) $(LIBS)

# Regra para compilar os objetos
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | create_dirs
	@$(CC) $(CFLAGS) -c $< -o $@

# Regra para criar os diretórios de saída
.PHONY: create_dirs
create_dirs: $(OBJ_DIRECTORIES) $(BIN_DIR)

$(OBJ_DIRECTORIES):
	@mkdir -p $@

$(BIN_DIR):
	@mkdir -p $@

# Regra para limpar os arquivos de objeto e executável
.PHONY: clean
clean:
	@rm -rf $(BIN_DIR) $(OBJ_DIR)

