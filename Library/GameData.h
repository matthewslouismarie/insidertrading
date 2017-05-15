#pragma once

#include "PlayerBalance.h"
#include "Duration.h"
#include "ObservablePointer.h"
#include "PlayerPosition.h"
#include "Boolean.h"

// TODO: rename to I_GameData
namespace it
{
  class Company;
  class Sec;

  class GameData
  {
  public:
    virtual virtual ~GameData() {};
    virtual Duration & getTime() = 0;
    virtual PlayerBalance & getPlayersMoney() = 0;
    virtual std::set<Company *> const & getCompanies() = 0;
    virtual ObservablePointer<Company> & getCompanyBeingCleaned() = 0;
    virtual PlanarPosition & getPlayerPosition() = 0;
    virtual Sec & getSec() = 0;
    virtual void setCompanyBeingCleaned (Company *) = 0;
    virtual Boolean & isPlayerInTheGame() = 0;
  };
}