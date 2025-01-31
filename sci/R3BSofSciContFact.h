#ifndef R3BSOFSCICONTFACT_H
#define R3BSOFSCICONTFACT_H 1

#include "FairContFact.h"

// --- --------------------------------------- --- //
// --- Factory for SofSci parameter containers --- //
// --- --------------------------------------- --- //

class FairParSet;

class R3BSofSciContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BSofSciContFact();
    ~R3BSofSciContFact() {}
    FairParSet* createContainer(FairContainer*);
    ClassDef(R3BSofSciContFact, 1)
};

#endif // R3BSCICONTFACT_H
