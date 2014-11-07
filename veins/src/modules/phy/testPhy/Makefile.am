#Rules  for the test code (use 'make check' to execute)
TESTS = VanetSimulation		
check_PROGRAMS = $(TESTS)
VanetSimulation_SOURCES = Decider80211p.h Decider80211pTest.h Decider80211pTest.cc Decider80211p.cc
VanetSimulation_CXXFLAGS = $(CPPUNIT_CFLAGS)
VanetSimulation_LDFLAGS = $(CPPUNIT_LIBS) -ldl
VanetSimulation_CCFLAGS = $(CCFLAGS) -l../../../../src
