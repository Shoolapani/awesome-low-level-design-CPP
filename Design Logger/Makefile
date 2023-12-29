CXX = g++
CXXFLAGS = -std=c++11
SRC_DIR = src
INC_DIR = inc
LIB_DIR = $(SRC_DIR)/lib

all: DesignLogger

DesignLogger: $(LIB_DIR)/LogProcessor.o $(LIB_DIR)/InfoLogProcess.o $(LIB_DIR)/DebugLogProcess.o $(LIB_DIR)/ErrorLogProcess.o $(LIB_DIR)/Main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

$(LIB_DIR)/LogProcessor.o: $(SRC_DIR)/LogProcessor.cpp $(INC_DIR)/LogProcessor.h | $(LIB_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(INC_DIR)

$(LIB_DIR)/InfoLogProcess.o: $(SRC_DIR)/InfoLogProcess.cpp $(INC_DIR)/InfoLogProcess.h $(INC_DIR)/LogProcessor.h | $(LIB_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(INC_DIR)

$(LIB_DIR)/DebugLogProcess.o: $(SRC_DIR)/DebugLogProcess.cpp $(INC_DIR)/DebugLogProcess.h $(INC_DIR)/LogProcessor.h | $(LIB_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(INC_DIR)

$(LIB_DIR)/ErrorLogProcess.o: $(SRC_DIR)/ErrorLogProcess.cpp $(INC_DIR)/ErrorLogProcess.h $(INC_DIR)/LogProcessor.h | $(LIB_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(INC_DIR)

$(LIB_DIR)/Main.o: Main.cpp $(INC_DIR)/LogProcessor.h $(INC_DIR)/InfoLogProcess.h $(INC_DIR)/DebugLogProcess.h $(INC_DIR)/ErrorLogProcess.h | $(LIB_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(INC_DIR)

$(LIB_DIR):
	@if not exist "$(LIB_DIR)" mkdir "$(LIB_DIR)"

clean:
	rm -f $(LIB_DIR)/*.o DesignLogger
	rmdir $(LIB_DIR)
