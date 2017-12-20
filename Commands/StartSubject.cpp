#include "StartSubject.h"

namespace command {

StartSubject::StartSubject() {
	// TODO Auto-generated constructor stub

}

StartSubject::~StartSubject() {
	// TODO Auto-generated destructor stub
}

void StartSubject::attach(StartObserver* commandObserver) {
	startObservers.push_back(commandObserver);
}

void StartSubject::detach(StartObserver* commandObserver) {
	startObservers.remove(commandObserver);
}

void StartSubject::notify(void) {
	 for (list<StartObserver*>::iterator it=startObservers.begin(); it!=startObservers.end(); ++it){
		 (*it)->update(this);
	 }
}

} /* namespace command */
