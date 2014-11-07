//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

#ifndef DECIDER80211PTEST_H_
#define DECIDER80211PTEST_H_

#ifndef DBG
#define DBG EV
#endif

#include <../PhyLayer80211p.h>
#include <cppunit/extensions/HelperMacros.h>


class Decider80211pTest : public CppUnit::TestFixture
{
  CPPUNIT_TEST_SUITE( Decider80211pTest );
  CPPUNIT_TEST( testConstructor );
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void testConstructor();
};


#endif /* DECIDER80211PTEST_H_ */
