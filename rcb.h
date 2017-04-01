// Creating rcb structure //
 
#define MAX_RCB_LENGTH = 1024 

struct RCB {
	struct RCB next[MAX_RCB_LENGTH];	/*The next rcb in the queue or if array make it to be an array*/
	int seqNum;
	int fileDes;
	FILE* fileH;
	int remainingLen;
	int sizeQuant;
}; 


