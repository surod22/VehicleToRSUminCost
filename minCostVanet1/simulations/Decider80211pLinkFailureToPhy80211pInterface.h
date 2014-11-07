#ifndef DECIDER80211PLINKFAILURETOPHY80211PINTERFACE_H_
#define DECIDER80211PLINKFAILURETOPHY80211PINTERFACE_H_

/**
 * @brief
 * Interface of PhyLayer80211p exposed to Decider80211p.
 *
 * @author David Eckhoff
 * @edited Susana Rodriguez
 * @ingroup phyLayer
 */
class Decider80211pLinkFailureToPhy80211pInterface {
public:
    virtual ~Decider80211pLinkFailureToPhy80211pInterface() {};
    virtual int getRadioState()=0;
};

#endif /* DECIDER80211PLINKFAILURETOPHY80211PINTERFACE_H_ */
