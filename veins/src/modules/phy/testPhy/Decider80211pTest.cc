#include <Decider80211pTest.h>
#include <cppunit/ui/text/TestRunner.h>


// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(Decider80211pTest);


void Decider80211pTest::setUp()
{
}


void Decider80211pTest::tearDown()
{
}


void Decider80211pTest::testConstructor()
{
    //Decider80211p decider = new Decider80211p(this, sensitivity, centerFreq, findHost()->getIndex(), collectCollisionStatistics, coreDebug);
     PhyLayer80211p* phyLayer = new PhyLayer80211p();
     std::map<std::string, cMsgPar> params;
     //Decider decider = phyLayer->initializeDecider80211p(params);
     Decider80211p* decider = new Decider80211p(phyLayer, 0, 0, 0, false, false);
     //decider->getSignalState(NULL);
     CPPUNIT_ASSERT_EQUAL(1,1 );
     printf("HELLO");
}


//int main( int argc, char **argv)
//{
//  CppUnit::TextUi::TestRunner runner;
//  runner.addTest( Decider80211pTest ::suite() );
//  runner.run();
//  return 0;
//}
