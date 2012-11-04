package node.application.finalApplication;

simple FinalApplication like node.application.iApplication {
	parameters:
	string applicationID = default("FinalApplication");
	bool collectTraceInfo = default(false);
	int priority = default(1);
	int packetHeaderOverhead = default(8);
	int constantDataPayload = default(0);

	int packet_spacing = default(2000); //ms
	int listening_interval = default(10); //ms
	int sample_interval = default(1000); //ms
	int initial_energy = default(10); //can't access this from rscMgr 'cuz protected
	int duty_cycle = default(1000); //ms
	int tx_power = default (5000);
	bool isSink = default (false);

	gates:
	output toCommunicationModule;
	output toSensorDeviceManager;
	input fromCommunicationModule;
	input fromSensorDeviceManager;
	input fromResourceManager;

}