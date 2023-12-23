CXX = g++
CXXFLAGS = -std=c++11

all: DesignLogger

DesignLogger: LogProcessor.o InfoLogProcess.o DebugLogProcess.o ErrorLogProcess.o Main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

LogProcessor.o: LogProcessor.cpp LogProcessor.h
	$(CXX) $(CXXFLAGS) -c $<

InfoLogProcess.o: InfoLogProcess.cpp InfoLogProcess.h LogProcessor.h
	$(CXX) $(CXXFLAGS) -c $<

DebugLogProcess.o: DebugLogProcess.cpp DebugLogProcess.h LogProcessor.h
	$(CXX) $(CXXFLAGS) -c $<

ErrorLogProcess.o: ErrorLogProcess.cpp ErrorLogProcess.h LogProcessor.h
	$(CXX) $(CXXFLAGS) -c $<

Main.o: Main.cpp LogProcessor.h InfoLogProcess.h DebugLogProcess.h ErrorLogProcess.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o DesignLogger
