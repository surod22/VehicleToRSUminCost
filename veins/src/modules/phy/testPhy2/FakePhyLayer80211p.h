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

#ifndef FAKEPHYLAYER_H_
#define FAKEPHYLAYER_H_


#include <DeciderToPhyInterface.h>
class FakePhyLayer80211p: public DeciderToPhyInterface {

public:
   virtual int getRadioState();
   virtual void cancelScheduledMessage(cMessage* msg);
   virtual void drawCurrent(double amount, int activity);
   virtual void sendControlMsgToMac(cMessage* msg);
   virtual int getCurrentRadioChannel();
   virtual simtime_t getSimTime();
   virtual void recordScalar(const char *name, double value, const char *unit=NULL);
   virtual ConstMapping* getThermalNoise(simtime_t_cref from, simtime_t_cref to);
   virtual void getChannelInfo(simtime_t_cref from, simtime_t_cref to, AirFrameVector& out);
   virtual BaseWorldUtility* getWorldUtility();
   virtual void rescheduleMessage(cMessage* msg, simtime_t_cref t);
   virtual void sendUp(AirFrame* packet, DeciderResult* result);

};

#endif /* FAKEPHYLAYER_H_ */
