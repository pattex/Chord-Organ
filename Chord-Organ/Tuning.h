#ifndef Tuning_h
#define Tuning_h

#include <SD.h>

class Tuning {

public:
	Tuning(char* filename);
	boolean init();
	boolean read();
	float pitchValues[128];
	float* createNoteMap();
	float getStandardFreq(float note);
	void setTuningFile(char* tuningFile);
private:
	char* _filename;
	float ratios[128];
	int numRatios;
	File scalaFile;
	float processRatio(String* ratioLine);
	boolean addRatio(String* ratioLine);
};

#endif
