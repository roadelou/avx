################################### METADATA ###################################

# Contributors: roadelou
# Contacts: 
# Creation Date: 2021-08-31
# Language: Makefile

################################### ALIASES ####################################

# Source code
SRC = src/main.c

# Build directory
BUILD = build

# Resulting executable
EXEC = $(BUILD)/avx.elf

# Flags to trigger warnings during the compilation.
WARN = -Wall -pedantic

# Compiling with AVX support.
AVX = -mavx

################################### SPECIAL ####################################

.PHONY: clean

#################################### RULES #####################################

# We use an order-only dependancy for the directory.
$(EXEC): $(SRC) | $(BUILD)
	$(CC) $(WARN) $(AVX)  $(SRC) -o $(EXEC)

$(BUILD):
	mkdir -p $(BUILD)

clean:
	rm -rf $(EXEC)

##################################### EOF ######################################
