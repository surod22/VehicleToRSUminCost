package mincostvanet1.simulations;
import org.car2x.veins.nodes.RSU;
import org.car2x.veins.nodes.Scenario;
//import org.inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;



network RSUVehicleScenario extends Scenario
{
    submodules:
        rsu[1]: RSU{
            @display("p=150,140;b=10,10,oval");
        }

        //topology: FlatNetworkConfigurator {
        //    @display("p=272,105");
        //}
}
