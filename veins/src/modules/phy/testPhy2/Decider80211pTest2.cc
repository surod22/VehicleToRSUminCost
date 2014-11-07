#include <Decider80211pTest2.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <FakePhyLayer80211p.h>
#include <Decider80211p.h>

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(Decider80211pTest2);


void Decider80211pTest2::setUp()
{
}


void Decider80211pTest2::tearDown()
{
}


void Decider80211pTest2::testConstructor()
{
    //Decider80211p decider = new Decider80211p(this, sensitivity, centerFreq, findHost()->getIndex(), collectCollisionStatistics, coreDebug);
     FakePhyLayer80211p* phyLayer = new FakePhyLayer80211p();
     std::map<std::string, cMsgPar> params;
     //Decider decider = phyLayer->initializeDecider80211p(params);
     Decider80211p* decider = new Decider80211p(phyLayer, 1.0, 1.0, 1, false, false);
     decider->checkIfSignalOk(NULL);
     CPPUNIT_ASSERT_EQUAL(1,1 );
     printf("HELLO");
}

int main( int argc, char **argv)
{
  CppUnit::TextUi::TestRunner runner;
  runner.addTest( Decider80211pTest2 ::suite() );
  runner.run();
  return 0;
}
