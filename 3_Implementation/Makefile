# Name of the project
PROJECT_NAME = MED

# Output directory
BUILD = build

# All source code files
SRC = src/main.c\
src/WELMETI.c\
src/LoginScreen.c\
src/AddRec.c\
src/ListDelete.c\
src/searchedit.c\

# All test source files
TEST_SRC = src/WELMETI.c\
src/LoginScreen.c\
src/AddRec.c\
src/ListDelete.c\
src/searchedit.c\
test/test_medical_login.c\
unity/unity.c\

# All include folders with header files
INC	= -Iinc\
-Iunity\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= inc/Medical.h\
unity/unity.h\
unity/unity_internals.h\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT= $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)




# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
